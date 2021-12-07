#include <iostream>
using namespace std;
int main()
{
    int A, zero = 0;
    cin >> A;
    while (A > 0)
    {
        A = A / 5;
        zero = zero + A;
    }
    cout << zero;
    return 0;
}