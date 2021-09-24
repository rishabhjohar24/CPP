#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, count = 0;
        cin>>n;
        unordered_set <string> s;
        unordered_set <string> :: iterator it;
        string arr[n], temp, temp1, temp2;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if(s.find(arr[i]) == s.end()){
                s.insert(arr[i]);
            }
        }
        vector <string> brr;
        it = s.begin();
        for(int i = 0; i < s.size(); i++){
            brr.push_back(*it);
            it++;
        }
        // for(int i = 0; i < s.size(); i++){
        //     cout<<brr[i]<<" ";
        // }
        // cout<<endl;
        for(int i = 0; i < s.size(); i++){
            for(int  j = i + 1; j < s.size(); j++){
                temp1 = brr[i];
                temp2 = brr[j];
                // cout<<temp1<<" "<<temp2<<endl;
                if(temp1[0] != temp2[0]){
                    temp = temp1;
                    temp1[0] = temp2[0];
                    temp2[0] = temp[0];
                    // cout<<temp1<<" "<<temp2<<endl;
                    if(temp1 != brr[i] && temp1 != brr[j] && temp2 != brr[i] && temp2 != brr[j] && s.find(temp1) == s.end() && s.find(temp2) == s.end()){
                        count++;
                        // cout<<"____YES_____"<<endl;
                    }
                }
            }
        }
        cout<<2*count<<endl;
    }
    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n, c_b = 0, c_c = 0, c_d = 0, ans, length, share = 0;
//         cin>>n;
//         unordered_set <string> s, b, c;
//         unordered_set <string> :: iterator it;
//         string arr[n], temp, temp1, temp2;
//         // for(int i = 0; i < n; i++){
//         //     cin>>arr[i];
//         // }
//         for(int i = 0; i < n; i++){
//             cin>>arr[i];
//             if(s.find(arr[i]) == s.end()){
//                 s.insert(arr[i]);
//             }
//         }
//         for(it = s.begin(); it != s.end(); it++){
//             temp = *it;
//             temp1 = temp[0];
//             if(b.find(temp1) == s.end()){
//                 b.insert(temp1);
//             }
//         }
//         for(it = s.begin(); it != s.end(); it++){
//             temp = *it;
//             length = temp.size();
//             temp1 = temp.substr(1, length - 1);
//             if(c.find(temp1) == c.end()){
//                 c.insert(temp1);
//             }
//             else{
//                 share++;
//             }
//         }
//         //c_d = number of same back
//         if(c.size() == 1){
//             c_d = s.size();
//         }
//         else{
//             c_d = s.size() - c.size();
//         }
//         //c_b = number of initial same 
//         if(b.size() == 1){
//             c_b = s.size();
//         }
//         else{
//             c_b = s.size() - b.size();
//         }
//         // c_c = is number of same word
//         c_c = n - s.size();
//         ans = (((n-1)*(n)) / 2 ) - c_c - c_b - c_d - share;
//         cout<<2*ans<<endl;
//     }
//     return 0;
// }