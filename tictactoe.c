#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

#define LENGTH 3
#define WIDTH 3

char board[LENGTH][WIDTH];
char pmark;
char cmark;

struct Player{
int xmove;
int ymove;
};
bool gameover=false;

//function prototypes
void initBoard();
void printBoard();
bool isTie();
void playcomputermove();
bool userhasWon();
bool computerWon();



int main(int argc, char* argv[]){
if(argc!=2){
printf("Improper Usage!\n");
return EXIT_FAILURE;
}
struct Player p;
initBoard();
pmark=(atoi(argv[1])==1?'X':'O');
cmark=(pmark=='X'?'O':'X');
printf("Your marker was: %c\n",pmark);
    while(!gameover){
    printBoard();
    //user input portion
    printf("Enter the coordinates of your next move.\n");
    scanf("%i",&p.xmove);
    scanf("%i",&p.ymove);
    printf("You entered: %i,%i\n",p.xmove,p.ymove);
    if(board[p.xmove][p.ymove]!='_'){
    printf("Spot already taken.\n");
    continue;
    }
    board[p.xmove][p.ymove]=pmark;
    printf("Length: %i\n",LENGTH);
    printf("Width: %i\n",WIDTH);

    //computer's move
    playcomputermove();  

        //check for win/tie
        if(userhasWon()){
            printf("You have won!\n");
            gameover=true;
            printBoard();
         }
        else if(computerWon()){
            printf("The computer won!\n");
            gameover=true;
            printBoard();
        }
        else{
            if(isTie()){
                printf("It is a tie!\n");
                gameover=true;
                printBoard();
            }
        }

      
    }
printf("Thank you for playing Tic-Tac-Toe vs Computer!\n");

return 0;
}


bool isTie(){
    for(int i=0;i<LENGTH;i++){
        for(int j=0;j<WIDTH;j++){
            if(board[i][j]=='_'){
                return false;
            }
        }
    }

    return true;
}
//  0 1 2
//0 _ _ _
//1 _ _ _
//2 _ _ _


void playcomputermove(){
    //first set of cases
    if(board[0][0]==pmark && board[1][0]==pmark && board[2][0]!=cmark){
        board[2][0]=cmark;
        return;
    }

    else if(board[0][1]==pmark && board[1][1]==pmark && board[2][1]!=cmark){
        board[2][1]=cmark;
        return;
    }

    else if(board[0][2]==pmark && board[1][2]==pmark && board[2][2]!=cmark){
        board[2][2]=cmark;
        return;
    }
    
    else if(board[0][0]==pmark && board[0][1]==pmark){
        board[0][2]=cmark;
        return;
    }

    else if(board[1][0]==pmark && board[1][1]==pmark){
        board[1][2]=cmark;
        return;
    }

    else if(board[2][0]==pmark && board[2][1]==pmark){
        board[2][2]=cmark;
        return;
    }

    else if(board[0][0]==pmark && board[1][1]==pmark){
        board[2][2]=cmark;
        return;
    }

    else if(board[0][2]==pmark && board[1][1]==pmark){
        board[2][0]=cmark;
        return;
    }
    //second set of cases
    else if(board[0][2]==pmark && board[0][1]==pmark){
    board[0][0]=cmark;
    return;
    }

    else if(board[1][2]==pmark && board[1][1]==pmark){
    board[1][0]=cmark;
    return;
    }

    else if(board[2][2]==pmark && board[2][1]==pmark){
    board[2][0]=cmark;
    return;
    }

    else if(board[2][0]==pmark && board[1][0]==pmark){
    board[0][0]=cmark;
    return;
    }
    else if(board[2][1]==pmark && board[1][1]==pmark){
    board[0][1]=cmark;
    return;
    }
    else if(board[2][2]==pmark && board[1][2]==pmark){
    board[0][2]=cmark;
    return;
    }
    else if(board[2][2]==pmark && board[1][1]==pmark){
    board[0][0]=cmark;
    return;
    }
    else if(board[2][0]==pmark && board[1][1]==pmark){
    board[0][2]=cmark;
    return;
    }
//  0 1 2
//0 _ _ _
//1 _ _ _
//2 _ _ _

    //third set of cases
    else if(board[0][0]==pmark && board[0][2]==pmark){
    board[0][1]=cmark;
    return;
    }
    else if(board[1][0]==pmark && board[1][2]==pmark){
    board[1][1]=cmark;
    return;
    }
    else if(board[2][0]==pmark && board[2][2]==pmark){
    board[2][1]=cmark;
    return;
    }
    else if(board[0][0]==pmark && board[2][0]==pmark){
    board[1][0]=cmark;
    return;
    }
    else if(board[0][1]==pmark && board[2][1]==pmark){
    board[1][1]=cmark;
    return;
    }
    else if(board[0][2]==pmark && board[2][2]==pmark){
    board[1][2]=cmark;
    return;
    }
    else if(board[0][0]==pmark && board[2][2]==pmark){
    board[1][1]=cmark;
    return;
    }
    else if(board[0][2]==pmark && board[2][0]==pmark){
    board[1][1]=cmark;
    return;
    }
    
    /*if user has no winning opportunity
     *then pick next available spot
     * */
    int i=0;
    while(i<LENGTH){
       int j=0;
        while(j<WIDTH){
            if(board[i][j]=='_'){
                board[i][j]=cmark;
                printf("I have played my move.\n");
                return;
            }
            j++;
        }
    i++;
    }

    printf("No available spots for computer.");
    return;
    


}


bool userhasWon(){
   if(board[0][0]==pmark && board[0][1]==pmark && board[0][2]==pmark ){
         return true;
   }                                                                 

    else if(board[1][0]==pmark && board[1][1]==pmark&&board[1][2]==pmark) {
        return true;
    }

    else if(board[2][0]==pmark && board[2][1]==pmark && board[2][2]==pmark){
        return true;
    }
    
    else if(board[0][0]==pmark && board[1][0]==pmark && board[2][0]==pmark){
        return true;
    }

    else if(board[0][1]==pmark && board[1][1]==pmark && board[2][1]==pmark){
        return true;
    }

    else if(board[0][2]==pmark && board[1][2]==pmark && board[2][2]==pmark){
        return true;
    }   
    
   else if(board[0][0]==pmark && board[1][1]==pmark && board[2][2]==pmark){
    return true;
   }

   else if(board[2][0]==pmark && board[1][1]==pmark && board[0][2]==pmark){
        return true;
    }

   return false;
    

}


bool computerWon(){
     if(board[0][0]==cmark && board[0][1]==cmark && board[0][2]==cmark ){
         return true;
   }                                                                 

    else if(board[1][0]==cmark && board[1][1]==cmark&&board[1][2]==cmark) {
        return true;
    }

    else if(board[2][0]==cmark && board[2][1]==cmark && board[2][2]==cmark){
        return true;
    }
    
    else if(board[0][0]==cmark && board[1][0]==cmark && board[2][0]==cmark){
        return true;
    }

    else if(board[0][1]==cmark && board[1][1]==cmark && board[2][1]==cmark){
        return true;
    }

    else if(board[0][2]==cmark && board[1][2]==cmark && board[2][2]==cmark){
        return true;
    }   
    
   else if(board[0][0]==cmark && board[1][1]==cmark && board[2][2]==cmark){
    return true;
   }

   else if(board[2][0]==cmark && board[1][1]==cmark && board[0][2]==cmark){
        return true;
    }

   return false;

}


void initBoard(){
    for(int i=0;i<LENGTH;i++){
        for(int j=0;j<WIDTH;j++){
             board[i][j]='_';
        }

    }   

}


void printBoard(){

for(int i=0;i<LENGTH;i++){
        for(int j=0;j<WIDTH;j++){
             printf("%c\t",board[i][j]);
        }
    printf("\n");
    }   


}
