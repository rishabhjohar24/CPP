#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int group = 0;
        cin>>s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                while(s[i] == '1'){
                    i++;
                }
                group++;
            }
        }
        cout<<group<<endl;
    }
    return 0;
}

//-----------Both Are GOod


// #include<bits/stdc++.h>
// using namespace std;
// int count_groups(string string){
//     int count = 0;
//     for(int i = 0; i < string.size(); i++){
//         if(string[i] == '1'){
//             while(string[i] == '1'){
//                 i++;
//             }
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         int group = 0;
//         cin>>s;
//         cout<<count_groups(s)<<endl;
//     }
//     return 0;
// }