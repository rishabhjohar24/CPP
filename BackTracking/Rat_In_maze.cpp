#include<iostream>
using namespace std;
#define N 4
bool rat(int maze[N][N], int x, int y, int sol[N][N]);
bool isvalid(int x, int y, int maze[N][N]){
    if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1){
        return true;
    }
    return false;
}
void print(int sol[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool solve(int maze[N][N]){
    int sol[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            sol[i][j] = 0;
        }
    }
    if(rat(maze, 0, 0, sol) == false){
        cout<<"DNE";
        return false;
    }
    print(sol); 
    return true;
}
bool rat(int maze[N][N], int x, int y, int sol[N][N]){
    if((x == N - 1) && (y == N - 1) && maze[x][y] == 1){
        sol[x][y] = 1;
        return true;
    }
    if(isvalid(x, y, maze) == true){
        if(sol[x][y] == 1){
            return false;
        }
        sol[x][y] = 1;
        if(rat(maze, x, y + 1, sol) == true){
            return true;
        }
        if(rat(maze, x + 1, y, sol) == true){
            return true;
        }
        if(rat(maze, x, y - 1, sol) == true){
            return true;
        }
        if(rat(maze, x - 1, y, sol) == true){
            return true;
        }
        sol[x][y] = 0; 
        return false; 
    }
    return false;
}
int main(){ 
    int maze[N][N] = { { 1, 0, 0, 0 }, 
                    { 1, 0, 1, 1 }, 
                    { 1, 1, 1, 1 }, 
                    { 1, 1, 0, 1 } }; 
 
    solve(maze); 
    return 0; 
} 