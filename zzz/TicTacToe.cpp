#include<bits/stdc++.h>
#define N 3
using namespace std;
char board[N][N], represent[N][N];
void rep();
void print(char arr[][N]);
void mark(char p, int flag);
char win();
int main(){
    rep();
    memset(board, '_', sizeof(board));
    cout<<"markings on board \n";
    print(represent);
    int dflag = 1, flag = 1, n = 9;
    while(n--){
        if(flag == 1){
            char move;
            cin>>move;
            mark(move, flag);
            flag = 0;
        }
        else if(flag == 0){
            char move;
            cin>>move;
            mark(move, flag);
            flag = 1;
        }
        print(board);
        char t = win();
        if(t == 'x'){
            cout<<"Player 1 is winner \n";
            dflag = 0;
            break;
        }
        else if(t == 'o'){
            cout<<"Player 2 is winner \n";
            dflag = 0;
            break;
        }
    }
    if(dflag){
        cout<<"Match has been tied :(";
    }
    return 0;
}
char win(){
    //column
    for(int i = 0; i < N; i++){
        if(board[0][i] == board[1][i] && board[2][i] == board[1][i]){
            if(board[0][i] == 'x') {
               return 'x';
            }
            else if(board[0][i] == 'o') {
                return 'o';
            }
        }
    }
    //row
    for(int i = 0; i < N; i++){
        if(board[i][0] == board[i][1] && board[i][2] == board[i][1]){
            if(board[i][0] == 'x') {
               return 'x';
            }
            else if(board[i][0] == 'o') {
                return 'o';
            }
        }
    }
    //right diagonal
    if(board[0][0] == board[1][1] && board[2][2] == board[1][1]){
        if(board[1][1] == 'x'){
            return 'x';
        }
        else if(board[1][1] == 'o') {
            return 'o';
        }
    }
    //left diagonal
    if(board[0][2] == board[1][1] && board[2][0] == board[1][1]){
        if(board[1][1] == 'x') {
            return 'x';
        }
        else if(board[1][1] == 'o') {
            return 'o';
        }
    }
    return '-';
}
void mark(char p, int flag){
    if(p == 'a'){
        if(flag){
            board[0][0] = 'x';
        }
        else{
            board[0][0] = 'o';
        }
    }
    if(p == 'b'){
        if(flag){
            board[0][1] = 'x';
        }
        else{
            board[0][1] = 'o';
        }
    }
    if(p == 'c'){
        if(flag){
            board[0][2] = 'x';
        }
        else{
            board[0][2] = 'o';
        }
    }
    if(p == 'd'){
        if(flag){
            board[1][0] = 'x';
        }
        else{
            board[1][0] = 'o';
        }
    }
    if(p == 'e'){
        if(flag){
            board[1][1] = 'x';
        }
        else{
            board[1][1] = 'o';
        }
    }
    if(p == 'f'){
        if(flag){
            board[1][2] = 'x';
        }
        else{
            board[1][2] = 'o';
        }
    }
    if(p == 'g'){
        if(flag){
            board[2][0] = 'x';
        }
        else{
            board[2][0] = 'o';
        }
    }
    if(p == 'h'){
        if(flag){
            board[2][1] = 'x';
        }
        else{
            board[2][1] = 'o';
        }
    }
    if(p == 'i'){
        if(flag){
            board[2][2] = 'x';
        }
        else{
            board[2][2] = 'o';
        }
    }
}
void print(char arr[][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}
void rep(){
    char p = 'a';
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            represent[i][j] = p++;
        }
    }
}