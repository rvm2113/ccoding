#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

#define STUDENTS 16
#define GROUPS 4
#define PEOPLEPERGROUP 4

int count=STUDENTS;
int currmod=STUDENTS;
int s[STUDENTS];
void swap(int *a, int *b);


int main(int argc, const char* argv[]){
srand(time(NULL));
int array1[GROUPS][PEOPLEPERGROUP];


for(int i=0;i<count;i++){
    s[i]=i;
}
    for(int i=0;i<GROUPS;i++){
        for(int j=0;j<PEOPLEPERGROUP;j++){
        
        int ra=rand()%currmod;
        array1[i][j]=s[ra];
        swap(&s[ra],&s[count-1]);

        count--;
        currmod--;
        }
    }
    
for(int i=0;i<GROUPS;i++){
    printf("Group %i: \t",i+1 );
    for(int j=0;j<PEOPLEPERGROUP;j++){
        printf("%i\t",array1[i][j]);
    }
    
    printf("\n");
}


return 0;
}

void swap(int *a, int *b){
int tmp=*a;
*a=*b;
*b=tmp;
}
