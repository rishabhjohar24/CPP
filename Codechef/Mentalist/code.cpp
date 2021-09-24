#include <bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int K, int start, int end, int max_sum)
{
    if (K == 0)
        return max_sum;
    int max_sum_start = max_sum + arr[start];
    int max_sum_end = max_sum + arr[end];
    int ans = max(
        maxSum(arr, K - 1, start + 1, end, max_sum_start),
        maxSum(arr, K - 1, start, end - 1, max_sum_end));
    return ans;
}
 
void maximizeSum(int arr[], int K, int n)
{
    int max_sum = 0;
    int start = 0;
    int end = n - 1;
 
    cout << maxSum(arr, K, start,
                   end, max_sum);
}
 
// Driver code
int main()
{
    int arr[] = { 8, 4, 4, 8, 12, 3, 2, 9 };
    int K = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
 
    maximizeSum(arr, K, n);
 
    return 0;
}// #include<bits/stdc++.h>
// using namespace std;
// map<char, int> val;
// void create(){
//     int j = 26;
//     for(char i = 'a'; i <= 'z'; i++){
//         val[i] = j;
//         j--;
//     }
// }
// long long calculate(int left, int right, string s, string k, int str){
//     if(left > right){
//         return;
//     }
//     auto a, b;
// }
// int main(){
//     create();
//     string s, k;
//     cin>>s;
//     for(int i = 0; i < s.size(); i++){
//         if(i + 1 % 2){
//             k += '1';
//         }
//         else{
//             k += '0';
//         }
//     }
//     int i = 0, j = s.size() - 1, t = 0;
//     while(t < j + 1){
//         if()
//     }
//     return 0;
// }