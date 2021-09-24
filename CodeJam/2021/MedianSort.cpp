#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, n, q;
    cin >> t >> n >> q;
    for (int q = 0; q < t; q++) {
        vector<long long int>A;
        long long int GI = 3,judge;
        cout << "1 2 3"<<"\n";
        cin >> judge;
        if (judge == 1) {
           A.push_back(2);
           A.push_back(1);
           A.push_back(3);
        }
        else if (judge == 2) {
           A.push_back(1);
           A.push_back(2);
           A.push_back(3);
        }
        else {
           A.push_back(1);
           A.push_back(3);
           A.push_back(2);
        }
        for (long long int i = 4; i <= n; i++) {
            long long int index = 0, G1 = GI - 1;
            while (index <  G1) {
                long long int mid = (index +  G1) >> 1;
                cout <<A[mid] << " " <<A[mid + 1] << " " << i << endl;
                cin >> judge;
                if (judge == A[mid]){
                    G1 = mid;
                }
                else if (judge == A[mid + 1]){
                    index = mid + 1;
                }
                else {
                   A.insert(A.begin() + mid + 1, i);
                    GI++;
                    break;
                }
            }
            if (GI != i) {
                if (index == 0){
                    A.insert(A.begin(), i);
                }
                else {
                    A.push_back(i);
                }
                GI++;
            }
        }
        for (int j = 0; j < A.size(); j++){
            cout <<A[j] << " ";
        }
        cout << endl;
        cin >> judge;
        if (judge == -1) break;
    }
    return 0;
}

// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;
// int main(){
//     int t, n, q, judge;
//     cin>>t>>n>>q;
//     for(int i = 0; i < t; i++){
//         int counter = 0, flag = 0;
//         int arr[n], temp[3], result[n];
//         for(int i = 0; i < n; i++){
//             arr[i] = i + 1;
//         }
//         // Firstly inserted 3 elemnts in result array
//         cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
//         cin>>judge;
//         //templ is the left element of median
//         //tempr is the right element of median
//         int templ = 0, tempr = 0;
//         result[1] = judge;
//         for(int p = 0; p < 3; p++){
//             if(arr[p] != judge && templ == 0){
//                 templ = arr[p];
//             }
//             if(arr[p] != judge && templ != 0){
//                 tempr = arr[p];
//             }
//         }
//         result[0] = templ;
//         result[2] = tempr;
//         for(int i = 0; i < 3; i++){
//             cout<<result[i];
//         }
//         cout<<endl;
//         for(int j = 1; j < n - 2; j++){
//             templ = 0;
//             tempr = 0;
//             flag = 0;
//             cout<<arr[j]<<" "<<arr[j + 1]<<" "<<arr[j + 2]<<endl;
//             cin>>judge;
//             //taking next three values in temp array
//             temp[1] = judge;
//             for(int p = j; p < j + 3; p++){
//                 if(arr[p] != judge && templ == 0){
//                     templ = arr[p];
//                 }
//                 if(arr[p] != judge && templ != 0){
//                     tempr = arr[p];
//                 }
//             }
//             temp[0] = templ;
//             temp[2] = tempr;
//             //if first element of temp array matches with jth index
//             //then we will override result by 3 value of temp 
//             //& raise the flag
//             for(int i = 0; i < 3; i++){
//                 cout<<temp[i];
//             }
//             cout<<endl;
//             if(temp[0] == arr[j]){
//                 result[j] = temp[0];
//                 result[j + 1] = temp[1];
//                 result[j + 2] = temp[2];
//                 flag = 1;
//             }
//             //if first element of temp array matches with (j + 1)th 
//             //index then we will override result by 3 value of temp
//             //in reverse order
//             else if(temp[0] == arr[j + 1]){
//                 result[j] = temp[2];
//                 result[j + 1] = temp[1];
//                 result[j + 2] = temp[0];
//             }
//             for(int i = 0; i < j + 3; i++){
//                 cout<<result[i];
//             }
//             cout<<endl;
//             counter++;
//             if (counter > q){
//                 cin>>judge;
//             }
//         }
//         if(judge != -1){
//             for(int i = 0; i < n; i++){
//                 cout<<result[i]<<" ";
//             }
//             cout<<endl;
//             cin>>judge;
//             if(judge == -1){
//                 cout<<-1<<endl;
//             }
//             else{
//                 cout<<1<<endl;
//             }
//         }
//         else if(judge == -1){
//             cout<<-1<<endl;
//         }
//     }
//     return 0;
// }