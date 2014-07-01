#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(int argc, char* argv[]){
if(argc==1||(argc-2)!=atoi(argv[1])){
    printf("Improper Usage!\n");
    return EXIT_FAILURE;
}

for(int i=2;i<argc;i++){
    for(int j=strlen(argv[i]);j>=0;j--){
        printf("%c",argv[i][j]);
    }
    printf("\n");
}



return 0;
}
