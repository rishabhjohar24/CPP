#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
   
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
ll findlcm(int arr[], int n) 
{  
    ll ans = arr[0]; 
   
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 
int main(){
    int n, x, p = 0;
    cin>>n;
    string sub, str[n], temp;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>str[i];
    }
    for(int i = 0; i < n; i++){ 
        temp = str[i] + str[i];
        x = (temp.length()) / 2;
        for(int j = 1; j <= x; j++){
            sub = temp.substr(j , x);
            temp = sub + sub;
            if(str[i] == sub){
                arr[p] = j;
                p++;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<findlcm(arr, n);
    return 0;
}