#include<bits/stdc++.h>
using namespace std;
bool isCube(int N)
{
    int cube_root;
    cube_root = round(cbrt(N));
    if (cube_root * cube_root * cube_root == N) {
        return true;
    }
    return false;
}
int main(){
    int n, a, b;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cin>>a>>b;
    while(a < b){
        swap(arr[a], arr[b]);
        a++;
        b--;
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}