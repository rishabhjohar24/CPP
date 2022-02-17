#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
vector<int> in;
void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}
void InOrder(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    InOrder(head->left);
    in.push_back(head->data);
    InOrder(head->right);
}
int search(int inOrder[], int start, int end, int curr)
{
    int i;
    for (i = start; i <= end; i++)
    {
        if (inOrder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
// Construction of tree Using preOrder and inOrder

Node *builTree(int preOrder[], int inOrder[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }
    int curr = preOrder[idx];
    idx++;
    Node *node = new Node(curr);
    if (start == end)
    {
        return node;
    }
    int pos = search(inOrder, start, end, curr);
    node->left = builTree(preOrder, inOrder, start, pos - 1);
    node->right = builTree(preOrder, inOrder, pos + 1, end);
    return node;
}

// Construction of tree Using postOrder and inOrder

Node *buildTree1(int postOrder[], int inOrder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    // idx = n - 1;
    static int idx = 4;
    int curr = postOrder[idx];
    idx--;
    Node *node = new Node(curr);
    if (start == end)
    {
        return node;
    }
    int pos = search(inOrder, start, end, curr);
    node->right = buildTree1(postOrder, inOrder, pos + 1, end);
    node->left = buildTree1(postOrder, inOrder, start, pos - 1);
    return node;
}

int main()
{
    int preOrder[] = {1, 2, 3};
    int inOrder[] = {2, 1, 3};
    // int postOrder[] = {4, 2, 5, 3, 1};
    Node *head = builTree(preOrder, inOrder, 0, 2);
    InOrder(head);
    print(in);
    // in.clear();
    // Node* head1 = buildTree1(postOrder, inOrder, 0, 4);
    // InOrder(head1);
    // print(in);
    return 0;
}