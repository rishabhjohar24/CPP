#include <bits/stdc++.h>
using namespace std;
bool iFind(vector<string> &dict, string &word)
{
  for (int i = 0; i < dict.size(); i++)
  {
    if (!dict[i].compare(word))
    {
      return true;
    }
  }
  return false;
}
void word(string str, int n, string result, vector<string> &dict, vector<string> &ans)
{
  for (int i = 1; i <= n; i++)
  {
    string prefix = str.substr(0, i);
    if (iFind(dict, prefix))
    {
      if (i == n)
      {
        result += prefix;
        ans.push_back(result);
        return;
      }
      word(str.substr(i, n - i), n - i, result + prefix + " ", dict, ans);
    }
  }
  return;
}
vector<string> wordBreak(string s, vector<string> &dict)
{
  vector<string> ans;
  word(s, s.size(), "", dict, ans);
  return ans;
}
int main()
{
  string s;
  int n;
  cin >> s >> n;
  vector<string> arr(n, ""), ans;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  ans = wordBreak(s, arr);
  for (auto i : ans)
  {
    cout << i << "\n";
  }
  return 0;
}
