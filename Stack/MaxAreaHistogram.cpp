#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector <int> l,r,a(n);
    stack <pair <int, int>> s;
    for(int i = 0; i < n; i++){
        if(s.size() == 0){
            l.push_back(-1);
        }
        else if(s.size() > 0 && s.top().first < arr[i]){
            l.push_back(s.top().second);
        }
        else if(s.size() > 0 && s.top().first >= arr[i]){
            while(s.size() > 0 && s.top().first >= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                l.push_back(-1);
            } else {
                l.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    while(s.size() > 0){
        s.pop();
    }
    for(int i = n - 1; i >= 0; i--){
        if(s.size() == 0){
            r.push_back(n);
        }
        else if(s.size() > 0 && s.top().first < arr[i]){
            r.push_back(s.top().second);
        }
        else if(s.size() > 0 && s.top().first >= arr[i]){
            while(s.size() > 0 && s.top().first >= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                r.push_back(n);
            } else {
                r.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    reverse(r.begin(), r.end());
    for(int i = 0; i < n; i++){
        temp = r[i] - l[i] - 1;
        temp = temp * arr[i];
        // cout<<temp<<" ";
        a[i] = temp;
    }
    // cout<<endl;
    // for(int i = 0; i < a.size(); i++){
    //     cout<<a[i]<<" ";
    // }
    cout<<"MAX AREA OF HISTOGRAM IS : "<<*max_element(a.begin(), a.end());
    return 0;
}