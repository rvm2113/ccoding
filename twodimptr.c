#include<stdio.h>

#define LENGTH 5
#define WIDTH 5

int main( int argc , char* argv[] ){
    int starter=1;

    int arr[LENGTH][WIDTH];
    for(int i = 0; i < LENGTH;i++){
        
        for(int j = 0; j < WIDTH; j++){
            int sum=0;
            for(int j=starter;j<=starter+3;j++){
            sum+=j;
            }


            if(j==0){
            *(*(arr+i)+j) = sum;
            }else{
                *(*(arr+i)+j)=starter++;
            }



        }
        starter++;
        
    }
    
    for(int i = 0; i < LENGTH; i++){
        for(int j = 0; j < WIDTH; j++){
            printf("Element: %i\t",arr[i][j]);
        }
        printf("\n");
    }
    

}
