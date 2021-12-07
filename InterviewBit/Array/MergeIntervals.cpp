#include <bits/stdc++.h>
using namespace std;
struct Interval
{
  int start;
  int end;
  Interval() : start(0), end(0) {}
  Interval(int s, int e) : start(s), end(e) {}
};
vector<Interval> solution(vector<Interval> &intervals, Interval newInterval)
{
  int n = intervals.size();
  int a = newInterval.start;
  int b = newInterval.end;
  vector<Interval> ans;
  if (a > b)
  {
    swap(a, b);
  }
  if (!n)
  {
    ans.push_back({a, b});
    return ans;
  }
  for (int i = 0; i < n; i++)
  {
    int curra = intervals[i].start;
    int currb = intervals[i].end;
    if (max(a, curra) > min(b, currb))
    {
      if (b < curra)
      {
        if (ans.size() == 0)
        {
          ans.push_back(Interval(a, b));
        }
        else if (ans.back().end < a)
        {
          ans.push_back(Interval(a, b));
        }
      }
      ans.push_back(Interval(curra, currb));
    }
    else
    {
      Interval x = Interval(min(a, curra), max(b, currb));
      if (ans.size() > 0 && x.start >= ans.back().start && x.end >= ans.back().end && max(ans.back().start, x.start) < min(ans.back().end, x.end))
      {
        ans.back().end = x.end;
        continue;
      }
      ans.push_back(x);
    }
  }
  if (ans.size() != 0 && ans.back().end < a)
  {
    ans.push_back(Interval(a, b));
  }
  return ans;
}
int main()
{
  int n;
  cin >> n;
  Interval newInterval;
  vector<Interval> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].start >> arr[i].end;
  }
  cin >> newInterval.start >> newInterval.end;
  vector<Interval> ans = solution(arr, newInterval);
  for (int i = 0; i < ans.size(); i++)
  {
    int a = ans[i].start, b = ans[i].end;
    if (i == 0)
    {
      cout << "[(" << a << ", " << b << ") ";
    }
    else if (i > 0 && i < n - 1)
    {
      cout << "(" << a << ", " << b << ") ";
    }
    else
    {
      cout << "(" << a << ", " << b << ")]";
    }
  }
  return 0;
}