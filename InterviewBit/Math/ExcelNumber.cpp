#include<bits/stdc++.h>
using namespace std;
int titleNumber(string A){
    string temp, ar[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    long long int index = 1, last, arr[26];
    for(int i = 0; i < 26; i++){
        arr[i] = i + 1;
    }
    for(int i = 0; i < 26; i++){
        cout<< arr[i];
    }
    if(A.length() == 1){
        for(int j = 0; j < 26; j++){
            if(A == ar[j]){
                index = arr[j];
                return index;
            }
        }
        for(int i = 0; i < A.length() - 1; i++){
            temp =  A[i];
            for(int j = 0; j < 26; j++){
                if(temp ==  ar[j]){
                    index = index*arr[j];
                }
            }
        }    
        last = A.length() - 1;
        for(int j = 0; j < 26; j++){
            temp = A[last];
            if(temp == ar[j]){
                index = index + arr[j];
            }
        }
    }   
    return index;
}
    
int main(){
    string s;
    cin>>s;
    long long int k = titleNumber(s);
    cout<<k;
    return 0;
}


// if(A.length() == 1){
    //     for(int j = 0; j < 26; j++){
    //         if(A == ar[j]){
    //             index = index + arr[j];
    //             return index;
    //         }
    //     }
    // }
    // else{
    //     for(int i = 0; i < A.length() - 1; i++){
    //         index = index + 26;
    //     }
    //     last = A.length() - 1;
    //     for(int j = 0; j < 26; j++){
    //         temp = A[last];
    //         if(temp == ar[j]){
    //             index = index + arr[j];
    //         }
    //     }
    // }