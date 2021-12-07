#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int data) : next(NULL), val(data){};
};
void print(ListNode *head)
{
  while (head)
  {
    cout << head->val << " ";
    head = head->next;
  }
  cout << "\n";
  return;
}
ListNode *buildList(int n)
{
  ListNode *head = new ListNode(0);
  ListNode *y = head;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    y->val = x;
    y->next = (i < n - 1) ? new ListNode(0) : NULL;
    y = y->next;
  }
  return head;
}
ListNode *removeDupe(ListNode *A)
{
  ListNode *temp = A;
  while (temp)
  {
    int flag = 0;
    ListNode *store = temp;
    while (temp->next && temp->next->val == temp->val)
    {
      temp = temp->next;
      flag = 1;
    }
    if (flag)
    {
      store->next = temp->next;
    }
    temp = temp->next;
  }
  return A;
}
int main()
{
  int n;
  cin >> n;
  ListNode *head = buildList(n);
  print(head);
  print(removeDupe(head));
  return 0;
}