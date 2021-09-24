#include<iostream>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        long x, y, len, cost = 0;
        //CJ = x, JC = y
        string s, temp;
        cin>>x>>y>>s;
        len = s.size();
        for(int i = 0; i < len; i++){
            if(s[i] != '?'){
                temp += s[i];
            }
        }
        len = temp.size();
        for(int i = 0; i < len - 1; i++){
            if(temp[i] == 'C' && temp[i + 1] =='J'){
                cost += x;
            }
            if((temp[i] == 'J' && temp[i + 1] =='C')){
                cost += y;
            }
        }
        cout<<"Case #"<<i + 1<<": "<<cost<<endl;
    }
    return 0;
}


// int jccost = 0, cjcost = 0;
//             if(s[i] == 'c' && s[i + 1] =='j'){
//                 cost += x;
//             }
//             if((s[i] == 'j' && s[i + 1] =='c')){
//                 cost += y;
//             }
//             if(s[i] == '?'){
//                 if(s[i - 1] == 'j' && s[i + 1] == 'c'){
//                     //JC
//                     jccost += cost + y;
//                 }
//                 else if(s[i - 1] == 'c' && s[i + 1] == 'j'){
//                     //CJ
//                     cjcost += cost + x;
//                 }
//                 if(jccost < cjcost){
//                     cost = jccost;
//                 }
//                 else{
//                     cost = cjcost;
//                 }
//             }