#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>



bool isPalindrome(char* str);
char* substr(char* str, int from, int to);

int main(int argc, char* argv[]){
    if(argc<3||(argc-2)!=atoi(argv[1])){
        printf("Improper Usage!\n");
        return -1;
    }

    
    char* tempptr;
    int nump=0;


    for(int i=2;i<argc;i++){
//       printf("%i Word!\n",i-1);  
        int counter=0;
        while(counter<=strlen(argv[i])-1){

            int anothercounter=counter+1;
  //          printf("Counter Value: %i\n",counter);
    //        printf("Anothercounter  Value: %i\n",anothercounter);

            while(anothercounter<strlen(argv[i])){
                tempptr=substr(argv[i],counter,anothercounter);
                if(isPalindrome(tempptr)){
      //              printf("Found a palindrome!\n");
        //            printf("%s\n",substr(argv[i],counter,anothercounter));
                    nump++;
                }
                


                anothercounter++;
          //      printf("Counter Value: %i\n",counter);
            //    printf("Anothercounter  Value: %i\n",anothercounter);
            }

            counter++;
        }



    }

    printf("Number of palindrome substrings found: %i\n",nump);


    
    /*Have code here to free memory
     *
     *
     * */
    free(tempptr);


    return 0;
}


char* substr(char* str, int from, int to){
    
  //  printf("From VALUE: %i\n",from);
  //  printf("TO VALUE: %i\n",to);
    int c;
    char* substring=(char *)malloc(sizeof(char)*(to-from+2)); //+2 for \0
    if(substring==NULL){
        printf("Unable to allocate memory.");
        exit(0);
    }
    for(c=0;c<from-1;c++){
       str++;
    }
    for(c=0;c<(to-from+1);c++){
   //     printf("*str=%c\n",*(str));
        *(substring+c)=*(str);
        str++;
    }
    *(substring+c)='\0';
  //  printf("Substring final print:%s\n",substring);
    return substring;
}

bool isPalindrome(char* str){
    int c;
    char* firstinit= malloc( sizeof(char)* (strlen( str )+1));//+1 for \0
   
    if(firstinit==NULL){
    printf("could not allocate memory");
    exit(0);
    }
    
    firstinit=substr(str,0,strlen(str)-1);
  //  printf("From Start to End: %s\n",firstinit);
    
    
    char* secondinit= malloc(sizeof(char)*(strlen(str)+1));//+1 for \0
    
    str+=strlen(str)-1;
    
    for(c=0;c<strlen(str);c++){
    //    printf("*(str)= %c\n", *(str));
      //  printf("*(secondinit+c)= %c\n", *(secondinit+c));
        *(secondinit+c)=*(str);
      //  printf("*(secondinit+c)= %c\n", *(secondinit+c));
        str--;
    }
    
    *(secondinit+c)='\0';
   // for(int x=0;x<strlen(str);x++){
   //     printf("%c\t",*(secondinit+x));
   // }
  //  printf("\n");
 //   printf("From End to Start: %s\n",secondinit);

    if(strcmp(firstinit, secondinit) == 0){
        free(firstinit);
        free(secondinit);
        return true;
    }
    
    free(firstinit);
    free(secondinit);
    return false;

}
