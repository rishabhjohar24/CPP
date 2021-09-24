#include<bits/stdc++.h>
#define N 10
using namespace std;
//bsnake is the position of snake head
//bladder is the bottom of ladder
//snake has cordinates of tail
//ladder has coodinates of top ladder
int board[11][11], snake[101][2], ladder[101][2], bsnake[101], bladder[101];
void boardMaker();
void snake_ladder_map();
void print();
int main(){
    srand(time(0));
    //player1 is the track and so does player 2
    //m1 & m2 are number of moves
    //n is the outcome of dice on rolling
    //flag is used as toggler to switch b/w player1 & player2
    int player1 = 0, player2 = 0, m1 = 0, m2 = 0;
    int n, flag = 1;
    boardMaker();
    // print();
    while(player1 < 100 && player2 < 100){
        if(flag == 1){
            m1++;
            flag = 2;
            //cflag is conditioned flag to check is player has exceeded 100 on a dice roll to stop
            int cflag = 1;
            //player1
            n = (rand() % 6) + 1;
            player1 += n;
            if(player1 > 100){
                player1 -= n;
                cflag = 0;
            }
            if(bsnake[player1] && cflag == 1){
                player1 = board[snake[player1][0]][snake[player1][1]];
            }
            else if(bladder[player1] && cflag == 1){
                player1 = board[ladder[player1][0]][ladder[player1][1]];
            }
            //remove the below comment to see the positions of player
            cout<<"Player 1 is at position :"<<player1<<endl;
            if(player1 == 100 && cflag == 1){
                break;
            }
        }
        if(flag == 2){
            m2++;
            flag = 1;
            //cflag is conditioned flag to check is player has exceeded 100 on a dice roll to stop
            int cflag = 1;
            //player2
            n = (rand() % 6) + 1;
            player2 += n;
            if(player2 > 100){
                player2 -= n;
                cflag = 0;
            }
            if(bsnake[player2] && cflag == 1){
                player2 = board[snake[player2][0]][snake[player2][1]];
            }
            else if(bladder[player2] && cflag == 1){
                player2 = board[ladder[player2][0]][ladder[player2][1]];
            }
            //remove the below comment to see the positions of players;
            cout<<"Player 2 is at position :"<<player2<<endl;
            if(player2 == 100 && cflag == 1){
                break;
            }
        }
    }
    if(player1 == 100){
        cout<<"\n\t\t Player 1 wins in "<<m1<<" moves ;)\n\n";
    }
    if(player2 == 100){
        cout<<"\n\t\t Player 2 wins in "<<m2<<" moves ;)\n\n";
    }
    return 0;
}

void boardMaker(){
    int count = 1;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            board[i][j] = count++;   
        }
    }
    snake_ladder_map();
}
void print(){
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
void snake_ladder_map(){
    ladder[1][0] = 4;
    ladder[1][1] = 8;
    ladder[4][0] = 2;
    ladder[4][1] = 4;
    ladder[9][0] = 4;
    ladder[9][1] = 1;
    ladder[28][0] = 9;
    ladder[28][1] = 4;
    ladder[21][0] = 5;
    ladder[21][1] = 2;
    ladder[51][0] = 7;
    ladder[51][1] = 7;
    ladder[72][0] = 10;
    ladder[72][1] = 1;
    ladder[80][0] = 10;
    ladder[80][1] = 9;
    snake[17][0] = 1;
    snake[17][1] = 7;
    snake[54][0] = 4;
    snake[54][1] = 4;
    snake[62][0] = 2;
    snake[62][1] = 9;
    snake[64][0] = 7;
    snake[64][1] = 10;
    snake[87][0] = 4;
    snake[87][1] = 6;
    snake[93][0] = 8;
    snake[93][1] = 3;
    snake[95][0] = 8;
    snake[95][1] = 5;
    snake[98][0] = 8;
    snake[98][1] = 9;
    bsnake[17] = 1;
    bsnake[54] = 1;
    bsnake[62] = 1;
    bsnake[64] = 1;
    bsnake[87] = 1;
    bsnake[93] = 1;
    bsnake[95] = 1;
    bsnake[98] = 1;
    bladder[1] = 1;
    bladder[4] = 1;
    bladder[9] = 1;
    bladder[21] = 1;
    bladder[28] = 1;
    bladder[51] = 1;
    bladder[80] = 1;
    bladder[72] = 1;
}