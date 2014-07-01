#include<stdio.h>
#include<stdlib.h>
int main(int argc, char ** argv){

    if(argc!=2){
    printf("Usage: [program command line] number of bottles");
    return -1;
    }
    
    int numb=atoi(argv[1]);
    for(int i=numb;i>0;i--){
        printf("%i bottles of beer on the wall,%i bottles of beer\n",i, i );
        printf("Take one down pass it around,%i bottles of beer on the wall ",i-1);
    
    }


return 0;

}
