#include<stdio.h>
#include<stdlib.h>

unsigned int reversebits(unsigned int num, unsigned int bits);

int main(int argc, char* argv[]){
if(argc!=3){
printf("Usage: <program exec> quantity numbits!\n");
return -1;
}

printf("Reversed Number: %i\n",reversebits(atoi(argv[1]),atoi(argv[2])));


}


unsigned int reversebits(unsigned int num, unsigned int bits){
    unsigned int n;
    n=1<<bits;
    unsigned int copynum=num;
    for(unsigned int i=1;i<bits;i++){
        num>>=1;
        copynum<<=1;
        copynum|=(num & 1);
    }
    copynum&=n-1;
    return copynum;

}

