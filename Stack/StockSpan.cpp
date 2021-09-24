#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector <int> v;
    stack <pair<int, int>> s;
    for(int i = 0 ; i < n; i++){
        if(s.size() == 0){
            v.push_back(-1);
        } else if(s.size() > 0 && s.top().first > arr[i]){
            v.push_back(s.top().second);
        } else if(s.size() > 0 && s.top().first <= arr[i]){
            while(s.size() > 0 && s.top().first <= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    for(int i = 0; i < v.size(); i++){
        v[i] = i - v[i];
    }
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

//-------------ADDITIONAL STACK IS USED-------------------------

// int main(){
//     int n, count = 1;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     vector <int> v;
//     stack <int> s, b;
//     for(int i = 0; i < n; i++){
//         if(s.size() == 0){
//             v.push_back(count);
//         }
//         else if(s.top() > arr[i]){
//             v.push_back(count);
//         }
//         else if(s.top() <= arr[i]){
//             while(s.size() > 0 && s.top() <= arr[i]){
//                 b.push(s.top());
//                 s.pop();
//                 count++;
//             }
//             v.push_back(count);
//             while(b.size() != 0){
//                 s.push(b.top());
//                 b.pop();
//             }
//         }
//         s.push(arr[i]);
//         count = 1;
//     }
//     for(int i = 0; i < v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }