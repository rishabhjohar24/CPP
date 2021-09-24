// #include<bits/stdc++.h>
// using namespace std;
// int Search(int arr[], int x, int n){
//     int jump = sqrt(n);
//     int perv = 0;
//     while(arr[min(jump, n)-1] < x){
//         perv = jump;
//         perv += sqrt(n);
//         if(perv >= n){
//             return -1;
//         }
//     }
//     while(arr[perv] < x){
//         perv++;
//         if(perv == min(jump,n)){
//             return -1;
//         }
//     }
//     if(arr[perv] == x){
//         return perv;
//     }
//     return -1;
// }
// int main(){
//     int n,flag;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     sort(a, a+n);
//     for(int i=0; i<n; i++){
//         cout<<a[i]<<" ";
//     }
//     cin>>flag;
//     cout<<Search(a,flag,n);
//     return 0;
// }

#include <bits/stdc++.h> 
using namespace std; 
  
int jumpSearch(int arr[], int x, int n) 
{ 
    // Finding block size to be jumped 
    int step = sqrt(n); 
  
    // Finding the block where element is 
    // present (if it is present) 
    int prev = 0; 
    while (arr[min(step, n)-1] < x) 
    { 
        prev = step; 
        step += sqrt(n); 
        if (prev >= n) 
            return -1; 
    } 
  
    // Doing a linear search for x in block 
    // beginning with prev. 
    while (arr[prev] < x) 
    { 
        prev++; 
  
        // If we reached next block or end of 
        // array, element is not present. 
        if (prev == min(step, n)) 
            return -1; 
    } 
    // If element is found 
    if (arr[prev] == x) 
        return prev; 
  
    return -1; 
} 
  
// Driver program to test function 
int main() 
{   int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    } 
    int x ; 
    cin>>x; 
      
    // Find the index of 'x' using Jump Search 
    int index = jumpSearch(arr, x, n); 
  
    // Print the index where 'x' is located 
    cout << "\nNumber " << x << " is at index " << index; 
    return 0; 
} 
  