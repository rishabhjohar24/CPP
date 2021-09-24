#include<bits/stdc++.h>
using namespace std;

//------Bottom Up-----------
unordered_map <string, int> mp;
int booleanParenthesization(string s, int i, int j, int x){
    if(i > j){
        return false;
    }
    if(i == j){
        if(x == 1){
            return s[i] = 'T';
        }
        else{
            return s[i] = 'F';
        }
    }
    string temp =  to_string(i);
    temp.push_back(' ');
    temp.append(to_string(j));
    temp.push_back(' ');
    temp.append(to_string(x));
    if(mp.find(temp) != mp.end()){
        return mp[temp];
    }
    int ans = 0;
    for(int k = i + 1; k <= j - 1; k = k + 2){
        int lt = booleanParenthesization(s, i, k - 1, 1);
        int lf = booleanParenthesization(s, i, k - 1, 0);
        int rt = booleanParenthesization(s, k + 1, j, 1);
        int rf = booleanParenthesization(s, k + 1, j, 0);
        if(s[k] == '&'){
            if(x == 1){
                ans = ans + (lt * rt);
            }
            else{
                ans = ans + (lt * rf) 
                            + (lf * rf)
                                + (rt * lf);
            }
        }
        else if(s[k] == '|'){
            if(x == 1){
                ans = ans + (lt * rt) 
                            + (lt * rf)
                                + (rt * lf);
            }
            else{
                ans = ans + (lf * rf);
            }
        }
        else if(s[k] == '^'){
            if(x == 1){
                ans = ans + (lf * rt) 
                            + (rf * lt);
            }
            else{
                ans = ans + (lt * rt)
                            + (lf * rf);
            }
        }
    }
    return mp[temp] = ans;
}

// int booleanParenthesization(string s, int i, int j, bool x){
//     if (i > j)
//     {
//         return  false;
//     }
//     if(i == j){
//         if(x == true){
//             return s[i] = true;
//         }
//         else{
//             return s[i] = false;
//         }
//     }
//     int ans = 0;
//     for(int k = i + 1; k < j; k = k + 2){
//         int lt = booleanParenthesization(s, i, k - 1, true);
//         int lf = booleanParenthesization(s, i, k - 1, false);
//         int rt = booleanParenthesization(s, k + 1, j, true);
//         int rf = booleanParenthesization(s, k + 1, j, false);
//         if(s[k] == '&'){
//             if(x == true){
//                 ans = ans + lt * rt;
//             }
//             else{
//                 ans = ans + lt * rf 
//                             + lf * rf
//                                 + rt * lf;
//             }
//         }
//         else if(s[k] == '|'){
//             if(x == true){
//                 ans = ans + lt * rt 
//                             + lt * rf
//                                 + rt * lf;
//             }
//             else{
//                 ans = ans + lf * rf;
//             }
//         }
//         else if(s[k] == '^'){
//             if(x == true){
//                 ans = ans + lf * rt 
//                             + rf * lt;
//             }
//             else{
//                 ans = ans + lt * rt
//                             + lf * rf;
//             }
//         }
//     }
//     return ans;
// }

int main(){
    mp.clear();
    string s;
    cin>>s;
    cout<<booleanParenthesization(s, 0, s.size() - 1, 0);
    return 0;
}