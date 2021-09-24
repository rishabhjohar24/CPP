#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int titleToNumber(string s)
{
    int result = 0;
    for (const auto& c : s)
    {
        result *= 26;
        result += c  - 'A' + 1;
    }
  
    return result;
}
int main(){
    string s;
    cin>>s;
    cout<<titleToNumber(s);
    return 0;
}