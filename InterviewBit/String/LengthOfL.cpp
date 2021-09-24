#include<bits/stdc++.h>
using namespace std;
int main(){
    string A;
    int n, count = 0, limit = 0;
    A = "world";
    n = A.length() - 1;
    for(int i = n; i >= 0; i--){
        if((A[i] >= 'a' && A[i] <= 'z') || (A[i] >= 'A' && A[i] <= 'Z')){
            count++;
            limit = 1;
        }
        else{
            if(limit == 1){
                cout<<count;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string A,b[10000],temp;
//     int n, i, j = 0;
//     A = "d d";
//     n = A.length();
//     for(i = 0; i < n - 1; i++){
//         if(A[i] == ' ' && A[i + 1] != ' '){
//             b[j] = temp;
//             temp = "";
//             j++;
//         } 
//         // else if(A[i] == ' ' && A[i + 1] == ' '){
//         //     continue;
//         // } 
//         else {
//             temp += A[i];
//         }
//     }
//     temp += A[i];
//     b[j] = temp;
//     if(b[j] == " "){
//         temp = b[j-1];
//         cout<<temp.length();
//     } else {
//         temp = b[j];
//         cout<<temp.length();
//     }
    
//     return 0;
// }














// int main(){
//     string s;
//     int n,count;
//     s = "my name is rishabh";
//     n = s.length();
//     if(s[n-1] == ' '){
//         cout<<"0";
//     } else{
//         for(int i = n - 1; i>=0; i++){
//             if(s[i] != ' '){
//                 count++;
//             }
//             else {
//                 break;
//             }
//         }
//         cout<<count;
//     }
//     return 0;
// }