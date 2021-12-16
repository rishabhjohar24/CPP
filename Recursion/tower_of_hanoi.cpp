#include <bits/stdc++.h>
using namespace std;
unsigned long long cnt = 0;
void hanoi(int n, char src, char dest, char help)
{
    if (n == 0)
    {
        return;
    }
    hanoi(n - 1, src, help, dest);
    cnt++;
    // cout << "Move from " << src << " to " << dest << "\n";
    hanoi(n - 1, help, dest, src);
}
int main()
{
    int n;
    cin >> n;
    hanoi(n, 'A', 'C', 'B');
    cout << cnt;
    return 0;
}