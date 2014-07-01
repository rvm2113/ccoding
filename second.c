#include<cs50.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(int argc, const char *argv[]){
srand(time(NULL));
for(int i=2;i<22;i++){
int random=1+rand()%i;
printf("This is my  %i time in Columbia\n",random);
}

return 0;
}

