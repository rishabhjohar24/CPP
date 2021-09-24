#include <iostream>
#define max 100000
using namespace std;
//--------THIS FUNCTION IS USED TO CALCULATE DIGITS IN N!-----------
// int digit(int n){
//     double x = 0;
//     if(n < 0){
//         return 0;
//     }
//     if(n <= 1){
//         return 1;
//     }
//     for(int i = 2; i < n; i++){
//         x = x + log10(i);
//     }
//     return floor(x) + 1;
// }
#include <iostream>
#define max 100000
using namespace std;
int multiply(int x, int arr[], int size)
{
    int carry = 0, p;
    for (int i = 0; i < size; i++)
    {
        p = arr[i] * x + carry;
        carry = p / 10;
        arr[i] = p % 10;
    }
    while (carry)
    {
        arr[size] = carry % 10;
        carry = carry / 10;
        size++;
    }
    return size;
}
int main()
{
    int n;
    cin >> n;
    int arr[max];
    int size = 1;
    arr[0] = 1;
    for (int i = 2; i <= n; i++)
    {
        size = multiply(i, arr, size);
    }
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    return 0;
}