#include<bits/stdc++.h>
using namespace std;
int mat[1001][1001] ={1};
void matrix(){
    for(int i = 1; i < 1001; i++){
        for(int j = 1; j < 1001; j++){
            if(j == 1){
                mat[i][j] = i - 1 + j + mat[i - 1][j];
            }
            else{
                mat[i][j] = i - 2 + j + mat[i][j - 1];
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    matrix();
    for(int i = 0; i < t; i++){
        int x1, x2, y1, y2, sum = 0;
        cin>>x1>>y1>>x2>>y2;
        while(x1 <= x2){
            sum += mat[x1][y1];
            x1++;
        }
        sum -= mat[x2][y1];
        while(y1 <= y2){
            sum += mat[x2][y1];
            y1++;
        }
        cout<<sum<<endl;
    }
    return 0;
}