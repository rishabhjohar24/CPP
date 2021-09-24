#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long d, y;
    cin>>d>>y;
    for(long i = 0; i < d; i++){
        long n, t1, t2, credits = 0;
        cin>>n;
        vector<pair<int, int>> A;
        for(long i = 0; i < n; i++){
            cin>>t1;
            cin>>t2;
            A.push_back(make_pair(t1, t2));
        }
        for(long i = 0; i < n; i++){
            if(A[i].first >= 21600){
                credits += (A[i].second - A[i].first) * y;
            }
            else if(A[i].first < 21600 && A[i].second > 21600){
                credits += (A[i].second - 21600) * y;
            }
        }
        cout<<credits<<endl;
    }
    return 0;
}