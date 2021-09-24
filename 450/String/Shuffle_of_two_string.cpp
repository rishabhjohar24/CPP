#include<iostream>
using namespace std;
int main(){
    string a, b, c, temp1;
    cin>>a>>b>>c;
    char arr1[a.size()], arr2[b.size()]; 
    for(int i = 0; i < a.size(); i++){
        int k = 0;
        while(c[k] != a[i]){
            k++;
        }
        arr1[i] = k;
    }
    int flag = 0;
    for(int i = 0; i < a.size() - 1; i++){
        if(arr1[i] > arr1[i + 1]){
            flag = 1;
            cout<<"NO";
            break;
        }
    }
    for(int i = 0; i < b.size() && flag == 0; i++){
        int k = 0;
        while(c[k] != b[i]){
            k++;
        }
        arr2[i] = k;
    }
    for(int i = 0; i < b.size() - 1 && flag == 0; i++){
        if(arr2[i] > arr2[i + 1]){
            flag = 1;
            cout<<"NO";
            break;
        }
    }
    if(flag == 0){
        cout<<"YES";
    }
    return 0;
}