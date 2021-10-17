#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

Node *makeLL(int n)
{
    Node *head = new Node();
    Node *curr = head;
    for (int i = 0; i < n; i++)
    {
        int var;
        cin >> var;
        curr->data = var;
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
}
void reverse(Node **rhead, int x)
{
    Node *curr = new Node();
    curr->data = x;
    curr->next = *rhead;
    *rhead = curr;
}
Node *rev(Node *head)
{
    Node *prev = NULL, *next = NULL, *curr = head;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int main()
{
    int n;
    cin >> n;
    Node *head = makeLL(n);
    cout << "Before : ";
    print_ll(head);
    cout << endl;
    Node *temp_head = head;
    Node *rhead = rev(temp_head);
    // for (int i = 0; i < n; i++)
    // {
    //     reverse(&rhead, temp_head->data);
    //     temp_head = temp_head->next;
    // }
    cout << "After : ";
    print_ll(rhead);
    cout << endl;
    return 0;
}