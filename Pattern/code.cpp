#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int n , m, t, k;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n>>m>>k;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cout<<i + j + k<<setw(3);
            }
            cout<<endl;
        }
    }
    return 0;
}