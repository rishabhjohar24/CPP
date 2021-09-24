#include<iostream>
using namespace std;
int main(){
    int n, p;
    cin>>p;
    for(int i = 0; i < p; i++){
        for(int j = 0; j < p - i; j++){
            int l = 0;
            for(int k = p - i - j - 1; k >=0; k--){
                cout<<i<<" "<<j + l<<" "<<k<<endl;
                l++;
            }
        }
    }
    return 0;
}