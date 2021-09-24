#include<iostream>
using namespace std;
int main(){
    int n, k, len = 0, j = 0, space = 1, flag = 0;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        len += arr[i];
        if(len < k){
            if(flag == 0){
                j = i;
                flag = 1;
            }
            len += space;
        }
        if(len >= k){
            cout<<"From "<<j<<" to "<<i<<endl;
            j = i;
            flag = 0;
            len = arr[i];
            space  = 1;
            len += space;
        }
    }
    return 0;
}