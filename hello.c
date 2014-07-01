#include<stdio.h>
#include<cs50.h>

//I WAS HERE

void swap(int *y, int *z);
int main(int argc, const char *argv[]){
unsigned int x=9;
unsigned int y=5;
double z = 2.3;
printf("Before swap: x is %i and y is %i\n",x,y);

printf("This is a double: %f\n",z);
printf("This is an integer: %i\n",x);
printf("Hello world!%i, %i\n",x,y);
printf("char size:%i bytes\n ",sizeof(char));
printf("int size:%i bytes\n", sizeof(int));
printf("double size: %i bytes\n",sizeof(double));
printf("float size: %i bytes\n",sizeof(float));
printf("short int size: %i\n",sizeof(short int));
int a=4;
int b=4;
int c=++a+!b;
printf("!b=%i\n",!b);
printf("Result: %i\n",c);
swap(&x, &y);

printf("After swap: x is %i and y is %i\n",x,y);


return 0;
}

void swap(int *y, int *z){
int tmp=*y;
*y=*z;
*z=tmp;
}
