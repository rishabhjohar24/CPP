#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solution(){
    int n1, n2;
    cin >> n1 >> n2;
    if(__gcd(n1, n2) != 1){
        cout << "0\n";
    }
    else{
        if(n1%2 == 0 && n2 % 2 == 0){
            cout << "0\n";
        }
        if((n1 % 2 == 1 && n2 % 2 == 0) || (n1 % 2 == 0 && n2 % 2 == 1)){
            cout << "1\n";
        }
        if(n1 % 2 == 1 && n2 % 2 == 1){
            ((__gcd(n1 + 1, n2) != 1) || (__gcd(n1, n2 + 1) != 1)) ? cout<<"1\n" : cout<<"2\n";
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solution(){
    int n1, n2;
    cin >> n1 >> n2;
    if(__gcd(n1, n2) != 1){
        cout << "0\n";
    }
    else{
        if(n1%2 == 0 && n2 % 2 == 0){
            cout << "0\n";
        }
        if((n1 % 2 == 1 && n2 % 2 == 0) || (n1 % 2 == 0 && n2 % 2 == 1)){
            cout << "1\n";
        }
        if(n1 % 2 == 1 && n2 % 2 == 1){
            ((__gcd(n1 + 1, n2) != 1) || (__gcd(n1, n2 + 1) != 1)) ? cout<<"1\n" : cout<<"2\n";
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}