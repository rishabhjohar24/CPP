#include <bits/stdc++.h>
using namespace std;
//------------------TLE---------------
int main()
{
    int a, temp, flag = 0, count = 0;
    cin >> a;
    string s, p;
    while (a > 0)
    {
        temp = a % 2;
        p = to_string(temp);
        s = s + p;
        a = a / 2;
    }
    temp = s.length();
    if (s[0] == '1')
    {
        cout << "0";
        flag = 1;
    }
    else
    {
        for (int i = 0; i < temp; i++)
        {
            if (s[i] == '1')
            {
                break;
            }
            else if (s[i] == '0')
            {
                count++;
            }
        }
    }
    if (flag != 1)
    {
        cout << count;
    }
    return 0;
}

// trail of factorial

// int main(){
//     int a, count = 0, temp;
//     cin>>a;
//     while(a > 0){
//         temp = a/5;
//         count = temp + count;
//         a = a / 5;
//     }
//     cout<<count;
//     return 0;
// }