#include<bits/stdc++.h>
using namespace std;

// int main(){
//     long long int temp, count = 0;
//     string s;
//     cin>>s;
    
//     for(int i=0; i<s.length(); i++){
//         for(int j=i; j<s.length(); j++){
//             for(int k=i; k<=j; k++){
//                 cout<<s[k];
//             }
//             cout<<" ";
//         }
//         cout<<endl;   
//     }
//     return 0;
// }



int main(){
    long long int temp, count = 0;
    string s;
    cin>>s;
    if(s.length() == 1){
        count = 0;
    }
    else {
        for(int i=0; i<s.length(); i++){
            for(int j=i; j<s.length(); j++){
                for(int k=i; k<=j; k++){
                    if(abs(j-k) > 0){
                        if((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ) && (s[j] != 'a' && s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j] != 'u' )){
                            cout<<i<<" "<<j<<" "<<s[i]<<" "<<s[j]<<endl;
                            count++;
                            break;
                        }
                        else if((s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' ) && (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' )){
                            cout<<i<<" "<<j<<" "<<s[i]<<" "<<s[j]<<endl;
                            count++;
                            break;
                        }
                    }
                }
            }
        }
    }
    count = count % (1000000007);
    cout<<count;
    return 0;
}