#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int r = 0; r < t; r++){
        int n, k;
        cin>>n>>k;
        //arrk points assigned to each participant
        int arrk[k];
        string temp;
        for(int i = 0; i < k; i++){
            cin>>arrk[i];
        } 
        for(int i = 0; i < n; i++){
            cin>>temp;
            long score = 0;
            for(int j = 0; j < temp.length(); j++){
                if(temp[j] == '1'){
                    score = score + arrk[j];
                }
            } 
            cout<<score<<endl;
        } 
    }
    return 0;
}
// for(int i = 0; i < k; i++){
        //     temp = s[i];
        //     score = 0;
        //     for(int j = 0; j < temp.length(); j++){
        //         if(temp[j] == '1'){
        //             score = score + arrk[j];
        //         }
        //     }
        //     cout<<score<<endl;
        // }