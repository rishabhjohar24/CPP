#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a, a + n);
    long long int l, r, sum, temp, count = 0, flag = 0;
    for(int  i = n - 1; i >=1; i--){
        l = 0;
        r =  i - 1;
        while(l < r){
            sum = a[l] + a[r];
            if(a[i] < a[l] + a[r]){
                if((a[i] == a[l]) && (a[l] == a[r]) && (a[r] == a[i])){
                    temp = 1;
                }
                else{
                    temp = 3;
                }
                
                count  = count + r - l;
                r--;
            }
            else {
                l++;
            }
        }
    }
    count =  count % (1000000000+7)
    cout<<count;
   return 0; 
}




// for(int  i = 0; i < n -2; i++){
//         l = i + 1;
//         r = n - 1;
//         while(l < r){
//             temp = 0;
//             if((a[i] + a[l] > a[r]) && (a[l] + a[r] > a[i]) && (a[r] + a[i] > a[l])){
//                 if((a[i] == a[l]) && (a[l] == a[r]) && (a[r] == a[i])){
//                     temp = 1;
//                     flag = 1;
//                 }
//                 else{
//                     temp = 3;
//                     flag = 1;
//                 }
//                 l++;
//                 r--;
//             }
//             else if((a[i] + a[l] > a[r]) && (a[l] + a[r] > a[i]) && (a[r] + a[i] > a[l])){

//             } 
//         }
//         if(flag == 1){
//             count = count + temp;
//         }
//     }