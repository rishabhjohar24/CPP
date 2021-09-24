#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 0;
    string sa, sb;
    cin>>sa>>sb;
    int n = sa.size(), flag = 0;
    if(n == sb.size()){
        string temp = sa + sa;
        for(int i = 0; i < n; i++){
            if(sb == temp.substr(i, n)){
                flag = 1;
                cout<<"YES";
                break;
            }
        }
        if(flag == 0){
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
    return 0;
}