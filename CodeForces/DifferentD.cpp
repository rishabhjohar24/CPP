// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int d, temp1, temp, y = 6, flag = 0, k = 0, arr[4],perv = 1;
//     cin>>d;
//     temp1 = d;
//     while(d > 0){
//         for(int i = 1; i <= y; i++){
//             temp = y/i;
//             cout<<temp;
//             cout<<" "<<perv;
//             if((temp == 0) && ( temp - perv >= d)){
//                 arr[k] = i ;
//                 d--;
//                 perv = temp;
//                 if(d == 0){
//                     flag = 1;
//                     break;
//                 }
//             }
//         }
//         if(flag != 1){
//             d = temp1;
//             y++;
//             k = 0;
//         }
//     }
//     for(int i = 0; i < 4; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }