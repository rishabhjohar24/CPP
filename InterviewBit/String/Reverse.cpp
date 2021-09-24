#include<bits/stdc++.h>
using namespace std;
int main(){
    string A,temp,b[10000],res;
    int n, j = 0;
    A = "       fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq                 ";
    n = A.length();
    for(int i = 0; i < n; i++){
        if(A[i] == ' ' && A[i + 1] != ' '){
            b[j] = temp;
            temp = "";
            j++;
        } else if(A[i] == ' ' && A[i + 1] == ' '){
            continue;
        } else {
            temp += A[i];
        }
    }
    b[j] = temp;
    temp = "";
    for(int i = j; i > 0; i--){
        res += b[i] + " ";
    }
    res += b[0];
    // for(int i = 1; i < res.length(); i++){
    //     temp = temp + res[i];
    // }
    // cout<<temp;
    cout<<res;
    return 0;
}


//Time Limit Exceeded

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string a, A;
//     int ini = 0, j = 0, k;
//     A = "fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq";
//     k = A.length();
//     cout<<A<<"\n\n";
//     while(A[j] == ' '){
//         j++;
//     }
//     while(A[k-1] == ' '){
//         k;
//     }
//     reverse(A.begin() + j, A.begin() + k); 
//     cout<<"REVERSED :"<<A<<"\n\n";
//     for(int i = j; i < k ; i++){
//         if(A[i] == ' '){
//             reverse(A.begin() + ini, A.begin() + i);
//             ini = i + 1;
//         }
//         if(i == k - 1){
//             reverse(A.begin() + ini, A.begin() + (i + 1));
//         }
//     }
//     cout<<A;
//     return 0;
// }