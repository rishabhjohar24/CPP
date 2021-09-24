#include <bits/stdc++.h>

using namespace std;
char win(vector<vector<char>> matrix, int k)
{
    pair<char,int> prix[matrix.size()][matrix[0].size()];
    char wanda = 'D';
    for(int i = 0; i < matrix.size(); i++) {
        for(int j=0; j<matrix[0].size(); j++) {
            if(i == 0 || j == 0) {

                if(matrix[i][j] != '.'){
                    if( k== 1){
                        return matrix[i][j];
                    }
                    prix[i][j] = {matrix[i][j], 1};
                }
                else{
                    prix[i][j] = {'.',0};
                }
            }
        }
    }
    for(int i = 1; i < matrix.size(); i++)    {
        for(int j = 1; j < matrix[0].size(); j++)        {
            if(matrix[i][j] != '.'){
                if(matrix[i][j] == prix[i-1][j].first && matrix[i][j] == prix[i-1][j-1].first && matrix[i][j] == prix[i][j-1].first){
                    prix[i][j] = {matrix[i][j] ,1 + min(prix[i][j-1].second, min(prix[i-1][j-1].second, prix[i-1][j].second))};
                }
                else {
                    prix[i][j] = {matrix[i][j],1};
                }
                if(prix[i][j].second == k){
                    wanda = prix[i][j].first;
                    return wanda;
                }
            }
            else{
                prix[i][j] = {'.',0};
            }
        }
    }
    return wanda;
}
int main() {
   int t;
   cin>>t;
   while(t--) {
       int n, m, k;
       cin >> n >> m>> k;
       vector<vector<char>> matrix(n, vector<char>(m, '.'));
        int a, b;
        char answer = 'D';
        for(int i = 0 ; i < n * m; i++){
           cin >> a>> b;
            if(i % 2 == 0){
               matrix[a - 1][b - 1] = 'a';
            }
            else matrix[a-1][b-1] = 'b';
            if(answer == 'D') answer = win(matrix, k);
        }
        if(answer == 'a'){
            cout << "Alice" << "\n";
        }
        else if(answer == 'b'){
            cout << "Bob" << "\n";
        }
        else{
            cout << "Draw" << "\n";
        }
   }
   return 0;
}