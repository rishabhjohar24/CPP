//----WITH DP----

#include<bits/stdc++.h>
using namespace std;
int arr[100000000];
int divide(int n){
    if(n < 12){
        return n;
    }
    if(arr[n] != -1){
        return arr[n];
    }
    arr[n] = divide(n/2) + divide(n/3) + divide(n/4);
    return arr[n];
}
int main(){
    memset(arr, -1, sizeof(arr));
    int n, max;
    while(cin>>n){
        if(n == -1){
            break;
        }
        max = divide(n);
        cout<<max<<endl;
    }
    return 0;
}


//----WITHOUT USING DP------

// #include<bits/stdc++.h>
// using namespace std;
// int divide(int n){
//     int a, b, c, maxy;
//     if(n < 12){
//         return n;
//     }
//     a = n / 2;
//     b = n / 3;
//     c = n / 4;
//     if(a >= 12 ){
//         a = max (a ,divide(a));
//     } 
//     if(b >= 12 ){
//         b = max (b, divide(b));
//     }
//     if(c >= 12 ){
//         c = max (c, divide(c));
//     } 
//     return maxy = a + b + c;
// }
// int main(){
//     int n, max;
//     while(cin>>n){
//         max = divide(n);
//         cout<<max<<endl;
//     }
//     return 0;
// }