#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int min = INT_MAX, max = INT_MIN, temp1 = arr[0], temp2 = arr[0];
    for(int i = 1; i < n; i++){
        temp1 = arr[i];
        temp2 = arr[i];
        if(temp1 > max){
            max = temp1;
        }
        if(temp2 < min){
            min = temp2;
        }
    }
    cout<<"Maximum : "<<max<<endl;
    cout<<"Minimum : "<<min<<endl;
    return 0;
}