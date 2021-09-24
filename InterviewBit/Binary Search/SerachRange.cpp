//Search for a Range

#include<bits/stdc++.h>
using namespace std;
 
//-------------SLOWER APPROACH-----------------
// int main(){
//     int n,x,b[2] = {-1, -1};
//     cin>>n>>x;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }    
//     for (int i=0; i<n; i++){
//         if (arr[i] == x){
//             b[0] = i;
//             while(arr[i] == x){
//                 i++;
//             }
//             b[1] = i-1;
//         }
//     }
//     cout<<b[0]<<" "<<b[1];
//     return 0;
// }

//------------Effecient Approach-----------------------

int main(){
    int mid, n, x, b[2] = {-1, -1}, l, r, temp;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    l = 0;
    r= n-1;
    while(r >= l){
        mid = (l + r)/2;
        if (arr[mid] == x){
            b[0] = mid;
            break;
        }
        else if(arr[mid] < x){
            l = mid+1;
        }
        else if (arr[mid] > x){
            r = mid - 1;
        }
    }
    temp = mid;
    while(arr[temp] == x){
        temp--;
        if(arr[temp] == x){
            b[0] = temp;
        }
    }
     temp = mid;
    while(arr[temp] == x){
        if(arr[temp] == x){
            b[1] = temp;
        }
        temp++;
    }
    cout<<b[0]<<" "<<b[1];
    return 0;
}