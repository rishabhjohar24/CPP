#include<bits/stdc++.h>
using namespace std;
int main(){
    int j, count = 1,temp = -1;
    string B, A;
    cin>>A>>B;
    if(A.length() == 0 || B.length() == 0){
        cout<<"00";
    }
    else{
        for(int i = 0; i < B.length(); i++){
        j = 0;
        if(B[i] == A[j]){
            temp = i;
            for(j = 1; j < A.length(); j++){
                if(A[j] == B[i + j]){
                    count++;
                    if(count == A.length()){
                        break;
                    }
                } 
                else {
                    temp = -1;
                    count = 1;
                    break;
                }
            }
        }
        if(count == A.length()){
            break;
        }
    }
    if(count == A.length()){
        cout<<temp;
    } 
    else{
        cout<<"0";
    }
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
 
// // Returns true if s1 is substring of s2
// int isSubstring(string s1, string s2)
// {
//     int M = s1.length();
//     int N = s2.length();
 
//     /* A loop to slide pat[] one by one */
//     for (int i = 0; i <= N - M; i++) {
//         int j;
 
//         /* For current index i, check for
//  pattern match */
//         for (j = 0; j < M; j++)
//             if (s2[i + j] != s1[j])
//                 break;
 
//         if (j == M)
//             return i;
//     }
 
//     return -1;
// }
 
// /* Driver code */
// int main()
// {
//     string s1 = "b";
//     string s2 = "baba";
//     int res = isSubstring(s1, s2);
//     if (res == -1)
//         cout << "Not present";
//     else
//         cout << "Present at index " << res;
//     return 0;
// }