//wrong answer

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j = 0; j < t; j++){
        string string;
        cin>>string;
        vector<int> arr;
        sort(string.begin(), string.end());
        int i=0;
        while(i<string.length()){
            int count = 1;
            char temp=string[i];
            i++;

            while(string[i]==temp){
                count++;
                i++;
            }
            arr.push_back(count);
        }
        int odd = 0, one = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 1){
                one++;
            }
            else{
                if(arr[i] % 2 == 0){
                    odd = odd + arr[i] / 2;
                }
                else{
                    odd = odd + (arr[i] - 3 )/ 2;
                }
            }
        } 
        if(odd >= one){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

