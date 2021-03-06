#include <iostream>
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
    Node *curr = head;
    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        curr->data = val;
        curr->next = (i < (n - 1)) ? new Node() : NULL;
        curr = curr->next;
    }
    return head;
}
void print_ll(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void remove_Dupes(Node *head)
{
    set<int> seen;
    Node *curr = head;
    Node *perv = NULL;
    while (curr != NULL)
    {
        if (seen.find(curr->data) != seen.end())
        {
            perv->next = curr->next;
            delete (curr);
        }
        else
        {
            seen.insert(curr->data);
            perv = curr;
        }
        curr = perv->next;
    }
    cout << "After : ";
    print_ll(head);
}
// insertion order is not maintained
void remove_dupes(Node *head)
{
    Node *curr = head, *prev;
    unordered_map<int, int> has;
    while (curr != NULL)
    {
        has[curr->data]++;
        curr = curr->next;
    }
    Node *new_list = new Node();
    curr = head;
    for (auto i : has)
    {
        curr->data = i.first;
        prev = curr;
        curr = curr->next;
    }
    prev->next = nullptr;
    prev = curr;
    while (curr->next)
    {
        prev = curr;
        curr = curr->next;
        free(prev);
    }
    cout << "After : ";
    print_ll(new_list);
}
int main()
{
    int n;
    cin >> n;
    Node *head = make_ll(n);
    cout << "Before : ";
    print_ll(head);
    // remove_dupes(head);
    remove_Dupes(head);
    return 0;
}