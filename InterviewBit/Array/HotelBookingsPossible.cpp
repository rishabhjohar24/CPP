#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int> a, vector<int> b, int c)
{
    int k = 1, i = 0, j = 1, n = a.size();
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = {a[i], b[i]};
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        k = 1;
        for (int j = i + 1; j <= min(n - 1, i + c); j++)
        {
            if (arr[i].second > arr[j].first)
            {
                k++;
            }
            else
            {
                break;
            }
        }
        if (k > c)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, c;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    cin >> c;
    cout << solve(A, B, c);
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,c,temp=0,j=0;
//     string str;
//     cin>>n;
//     int a[n], b[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     for(int i=0; i<n; i++){
//         cin>>b[i];
//     }
//     cin>>c;
//     for(int i=c-1; i=n; i++){
//         while(j<(n-c-1)){
//             if(b[j] < a[i]){
//                 temp++;
//             } else if(b[j] = a[i]){
//                 temp = temp;
//             } else if(b[i] > a[j] && temp == 0){
//                 str = "NO";
//                 cout<<str;
//             }
//             if(temp == c){
//                 temp = 0;
//             }
//             j++;
//         }
//     }
//     if(str != "NO"){
//         str = "YES";
//         cout<<str;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, k, curr=0, res=0;
//     cin>>n>>k;
//     int a[n], b[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     for(int i=0; i<n; i++){
//         cin>>b[i];
//     }
//     int i=0, j=0;
//     while(i<n && j<n){
//         if(a[i] < b[j]){
//             curr++;
//             i++;
//         } else if(a[i] > b[j]){
//             curr--;
//             j++;
//         }
//         if(curr > res){
//             res = curr;
//         }
//         cout<<"================================================================================="<<endl;
//         cout<<"___________________________   "<<curr<<" ____________________________ "<<res;
//         cout<<endl<<"=================================================================================";
//     }
//     if(k < res){
//         cout<<"NO";
//     } else{
//         cout<<"YES";
//     }
//     return 0;
// }