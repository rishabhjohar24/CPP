#include <iostream>
using namespace std;
int countDistinct(int arr[], int n) 
{ 
    int res = 1; 
  
    // Pick all elements one by one 
    for (int i = 1; i < n; i++) { 
        int j = 0; 
        for (j = 0; j < i; j++) 
            if (arr[i] == arr[j]) 
                break; 
  
        // If not printed earlier, then print it 
        if (i == j) 
            res++; 
    } 
    return res; 
} 
int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
        };
        cout << countDistinct(a, n);
    };
    return 0;
}