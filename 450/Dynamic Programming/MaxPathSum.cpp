#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    int n = rand() % 10 + 1, m = rand() % 10 + 1;
    cout<<"N = "<<n<<" M = "<<m<<endl;
    int arr[n][m], t[n][m];
    memset(t, 0, sizeof(t));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = rand() % 1000 + 1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int down = 0, down_left = 0, down_right = 0;
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < m; j++){
            if(i == n - 1){
                down = 0;
            }
            else{
                down = t[i + 1][j];
            }
            if(i == n - 1 || j == 0){
                down_left = 0;
            }
            else{
                down_left = t[i + 1][j - 1];
            }
            if(i == n - 1 || j == m - 1){
                down_right = 0;
            }
            else{
                down_right = t[i + 1][j - 1];
            }
            t[i][j] = arr[i][j] + max(down, max(down_right, down_left));
        }
    }
    int gmax = 0, lmax = 0;
    for(int i = 0; i < m; i++){
        lmax = t[0][i];
        if(lmax > gmax){
            gmax = lmax;
        }
    }
    cout<<gmax;
    return 0;
}