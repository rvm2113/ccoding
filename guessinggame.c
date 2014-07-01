#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int main(){
srand(time(NULL));
int randnum=1+rand()%1000;
bool guessedcorrectly=false;
int usersguess;
    while(!guessedcorrectly){
 printf("I have picked a number between 1 and 1000. Enter your guess.\n");
        scanf("%i", &usersguess);
        if(usersguess==randnum){
        guessedcorrectly=true;
        printf("CORRECT!!\n");
        }
        
        else if(usersguess<randnum){
        printf("Too below.\n");
        }

        else if(usersguess>randnum){
        printf("Too high.\n");
        }

        else{
        printf("Invalid input.\n");
        return -1;
        }

    }   



return 0;
}
