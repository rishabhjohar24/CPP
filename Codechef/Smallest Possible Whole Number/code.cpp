#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, t;
        cin>>n>>k;
        t = n % k;
        cout<< t <<endl;
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n,k;
//         cin>>n>>k;
//         cout<< n % k<<endl;
//     }
//     return 0;
// }