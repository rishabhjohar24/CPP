#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i != i)
            {
                cout << i << " ";
            }
        }
    }
    for (int i = sqrt(n); i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << n / i << " ";
        }
    }
    cout << "\nPrime Factors : ";
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2)
        cout << n << " ";
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// void primeFactors(int n)
// {
//     while (n % 2 == 0)
//     {
//         cout << 2 << " ";
//         n = n / 2;
//     }
//     for (int i = 3; i <= sqrt(n); i = i + 2)
//     {
//         while (n % i == 0)
//         {
//             cout << i << " ";
//             n = n / i;
//         }
//     }
//     if (n > 2)
//         cout << n << " ";
// }