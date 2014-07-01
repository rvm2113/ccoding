#include<stdio.h>
#include "myheader.c"



int main(int argc, char* argv[]){
int num;
printf("Do you want to divide(1) or find average(2)?:");
scanf("%i",&num);
    int firstnum;
    int secondnum;
    switch(num){
    case 1:
    printf("Which two numbers would you like to divide?");
    scanf("%i %i",&firstnum,&secondnum);
    printf("Your result is: %f\n",divide(firstnum, secondnum));
    break;

    case 2:
    printf("Which two numbers would you like to find the average of? ");
    scanf("%i %i",&firstnum, &secondnum);
    printf("Your result is: %f\n",average(firstnum, secondnum));
    break;

    default:
    printf("Invalid input.\n");
    return -1;
    }
}



