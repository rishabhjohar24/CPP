#include<bits/stdc++.h>
using namespace std;
int main(){
    int temp,k,n,max=0,sum=0;
    cin>>n;
    list <int> li;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        sum = sum + a[i];
        if(sum>0 && sum >= max){
            max = sum ;
            temp = a[i];
            li.push_back(temp);
        } else if(sum<=0){
            max = max;
            sum = 0;
            li.clear();
        }
    }
    for (auto it = li.begin(); it != li.end(); ++it){
        cout << ' ' << *it;
    }
    cout<<endl<<max;
    return 0;
}