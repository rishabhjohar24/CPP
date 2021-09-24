#include<bits/stdc++.h>
using namespace std;
//Driver Code

//Better approach using two pointer technique

int main(){
    string A, s;
    int i = 0, temp, flag = 1;
    getline(cin, A);
    temp = A.length();
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    while(temp >= i){
        if(isalnum(A[i])){
            s = s + A[i];
        }
        i++;
    }
    i = 0;
    temp = s.size() - 1;
    while(temp > i){
        if(s[i] == s[temp]){
            i++;
            temp--;
        }
        else {
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        cout<<"Success";
    }
    else{
        cout<<"Failure";
    }
    return 0;
}



//only alphanumeric characters are considered in thses line of code


// int main(){
//     string a;
//     cin>>a;
//     int temp, flag = 1;
//     temp = a.length();
//     if ((temp % 2) == 0){
//         for(int i=0; i<(temp)/2; i++){
//             if (a[i] != a[temp - i-1]){
//                 cout<<"Entered string is not Palindrome";
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag != 0){
//           cout<<"Success";   
//         }
//     }
//     else {
//         for(int i=0; i<((temp)/2) -1; i++){
//             if (a[i] != a[temp - i-1]){
//                 cout<<"Entered string is not Palindrome";
//                 flag = 0;
//                 break;
//             }
//         }
        
//         if(flag != 0){
//           cout<<"Success";   
//         }
//     }
//     return 0;
// }