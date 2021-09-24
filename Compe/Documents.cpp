#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    string s, k;
    set<string> st;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            k += s[i];
        }
        else
        {
            if (k != "")
            {
                st.insert(k);
            }
            k = "";
        }
    }
    if (k != "")
    {
        st.insert(k);
    }
    int ans = 0;
    for (auto i : st)
    {
        if (i.size() == 4)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}