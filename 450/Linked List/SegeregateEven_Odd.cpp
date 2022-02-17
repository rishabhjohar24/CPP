#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *make_ll(int n)
{
    Node *head = new Node();
    Node *y = head;
    srand(time(0));
    int x = rand() % 100 + 1;
    for (int i = 0; i < n; i++)
    {
        y->data = rand() % x;
        y->next = (i < n - 1) ? new Node() : NULL;
        y = y->next;
    }
    return head;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}
void segregate(Node *head)
{
    Node *ptr1 = head, *ptr2, *perv;
    int temp;
    print(head);
    while (ptr1->data % 2 == 0)
    {
        perv = ptr1;
        ptr1 = ptr1->next;
    }
    ptr2 = ptr1->next;
    while (ptr2 != NULL)
    {
        if (ptr2->data % 2 == 0)
        {
            swap(ptr1->data, ptr2->data);
            ptr1 = ptr1->next;
        }
        ptr2 = ptr2->next;
    }
    print(head);
}
int main()
{
    srand(time(0));
    int n = rand() % 21;
    Node *head = make_ll(n);
    segregate(head);
    return 0;
}