// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// map<int, int> m;
// void primeFactors(int n)
// {
//     while (n % 2 == 0)
//     {
//         m[2]++;
//         n = n / 2;
//     }
//     for (int i = 3; i <= sqrt(n); i = i + 2)
//     {
//         while (n % i == 0)
//         {
//             m[i]++;
//             n = n / i;
//         }
//     }
//     if (n > 2)
//         m[n]++;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         m.clear();
//         int n, a, b;
//         int ev = 0, od = 0, res = 0;
//         cin >> n >> a >> b;
//         primeFactors(n);
//         if (a < 0 && b < 0)
//         {
//             if (n % 2)
//             {
//                 cout << b;
//             }
//             else
//             {
//                 cout << a;
//             }
//         }
//         if (a >= 0 && b < 0)
//         {
//             for (auto i : m)
//             {
//                 (i.second % 2) ? od++ : ev++;
//             }
//             res = (ev > od) ? ev * a : ev * a + b;
//             cout << res;
//         }
//         if (a < 0 && b >= 0)
//         {

//             for (auto i : m)
//             {
//                 (i.second % 2) ? od++ : ev++;
//             }
//             res = (od > ev) ? od * b : od * b + a;
//             cout << res;
//         }
//         if (a > 0 && b > 0)
//         {

//             for (auto i : m)
//             {
//                 res += (i.second % 2) ? b * i.second : a * i.second;
//             }
//             cout << res;
//         }
//         cout << "\n";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b;
        cin >> n >> a >> b;
        vector<int> v;
        while (n % 2 == 0)
        {
            v.push_back(2);
            n = n / 2;
        }

        for (int i = 3; i <= sqrt(n); i = i + 2)
        {
            while (n % i == 0)
            {
                v.push_back(i);
                n = n / i;
            }
        }

        if (n > 2)
            v.push_back(n);
        long long int ev = 0, od = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % 2 == 0)
                ev++;
            else
                od++;
        }
        if (a >= 0 && b >= 0)
        {
            cout << a * ev + b * od << "\n";
        }
        else if (a >= 0 && b < 0)
        {
            long long int sum = 0;
            if (ev >= od)
                sum = ev * a;
            else
            {
                sum = (ev)*a + b;
            }
            cout << sum << "\n";
        }
        else if (a < 0 && b >= 0)
        {
            long long int sum = 0;
            if (ev <= od)
                sum = od * b;
            else
                sum = a + od * b;
            cout << sum << "\n";
        }
        else
        {
            if (a >= b && ev > 0)
                cout << a << "\n";
            else if (a >= b && ev == 0)
                cout << b << "\n";
            else if (b > a && od > 0)
                cout << b << "\n";
            else if (b > a && od == 0)
                cout << a << "\n";
        }
    }
    return 0;
}