#include<bits/stdc++.h>
using namespace std;
int main(){
    int counter = 0,count = 0;
    string A;
    cin>>A;
    if(A.length() == 1){
        cout<<1;
    } 
    else{
        for(int i = 0; i < A.length(); i++){
            if(A[i] == '('){
                count++;
            }
            else {
                if(count > 0){
                    count--;
                }
                else{
                    counter++;
                }
            }
        }
    }    
    cout<< counter + count;
    return 0;
}







// int main(){
//     int l = 0, r = 0;
//     string s;
//     cin>>s;
//     for(int i = 0; i < s.length(); i++){
//         if(s[i] == '('){
//             l++;
//         } else if(s[i] == ')'){
//             r++;
//         }
//     }
//     if(r == 0){
//         cout<<l;
//     } else if(l == 0){
//         cout<<r;
//     }else if(l == r){
//         cout<< l + r;
//     }else {
//         cout<<min(l,r);
//     }
//     return 0;
// }