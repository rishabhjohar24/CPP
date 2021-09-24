#include<bits/stdc++.h>
using namespace std;
int main(){
    int j = 0, n,carry, flag = 1;
    cin>>n;
    vector <int> A(n), B;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    A[n-1] += 1; 
    carry = A[n-1]/10; 
    A[n-1] = A[n-1] % 10; 
    for (int i=n-2; i>=0; i--) 
    { 
        if (carry == 1) 
        { 
           A[i] += 1; 
           carry = A[i]/10; 
           A[i] = A[i] % 10; 
        } 
    } 
    if (carry == 1){ 
        A.insert(A.begin(), 1);
    }
    while(A[j] == 0){
        j++;
    }
    for(int i = j; i < A.size(); i++){
        B.push_back(A[i]);
        flag = 0;
    }
        
    if(flag == 0){
        for (int i=0; i<A.size() - 1; i++) 
            cout << B[i] << " ";    
    }
    else {
        for (int i=0; i<A.size(); i++) 
            cout << A[i] << " ";
    }    
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,carry,i,sum=0;
//     cin>>n;
//     int a[n];
//     for( i=0; i<n; i++){
//         cin>>a[i];
//     }
//     a[n-1] = a[n-1] + 1;
//     while(a[i] == 10){
//         a[i] = 0;
//         carry = 1;
//         a[i-1] += 1;
//         i--;
//         carry--;
//     }
//     for(int j=0; j<n; j++){
//         cout<<a[j]<<", ";
//     }
//     return 0;
// }