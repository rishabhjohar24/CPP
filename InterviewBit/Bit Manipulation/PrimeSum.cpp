#include <bits/stdc++.h>
using namespace std;
vector<bool> Sieve(int A)
{
  vector<bool> prime(A + 1, true);
  prime[0] = prime[1] = false;
  for (int i = 2; i <= A; i++)
  {
    if (prime[i])
    {
      for (int p = i * i; p <= A; p += i)
      {
        prime[p] = false;
      }
    }
  }
  return prime;
}
vector<int> primeSum(int A)
{
  vector<int> p;
  vector<bool> prime = Sieve(A);
  for (int i = 0; i <= A; i++)
  {
    if (prime[i] && prime[A - i])
    {
      p.push_back(i);
      p.push_back(A - i);
    }
  }
  return p;
}
int main()
{
  int A;
  cin >> A;
  vector<int> Arr = primeSum(A);
  cout << Arr[0] << " " << Arr[1];
  return 0;
}