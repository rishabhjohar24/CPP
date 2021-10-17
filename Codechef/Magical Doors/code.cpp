// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     ll t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         string s, k;
//         int flag1 = 0, flag2 = 0, ans = 0, j = 0;
//         cin >> s;
//         while (s[j] == '1' && j < s.size())
//         {
//             j++;
//         }
//         for (int i = j; i < s.size(); i++)
//         {
//             while (s[i] == '0' && !flag1)
//             {
//                 flag2 = 0;
//             }
//             while(s[i] == '1' && !flag2){
//                 flag1 = 0;
//             }
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int bulbs(string a, int n)
{
    int count = 0;

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1' && count % 2 == 0)
            continue;
        else if (a[i] == '0' && count % 2 != 0)
            continue;
        else if (a[i] == '1' && count % 2 != 0)
        {
            res++;
            count++;
        }
        else if (a[i] == '0' && count % 2 == 0)
        {
            res++;
            count++;
        }
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int n = s.size();
        cout << bulbs(s, n) << "\n";
    }
}