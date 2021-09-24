#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin>>arr[i][j];
        }
    }
    vector<pair<int, int>> A;
    int tempB, tempF;
    for(int i = 0; i < n; i++){
        tempB = arr[i][0];
        while((arr[i][1] >= arr[i + 1][0])){
            i++;
        }
        tempF = arr[i][1];
        A.push_back(make_pair(tempB, tempF));
    }
    for(int i = 0; i < A.size(); i++){
        cout<<"["<<A[i].first<<" , "<<A[i].second<<"]";
        if(i + 1 < A.size()){
            cout<<", ";
        }
    }
    return 0;
}