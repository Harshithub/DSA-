#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();

    Node *last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

Node *rotate(Node *head, int k)
{
    if (!head || !head->next || !k)
        return head;

    Node *lo = head, *hi = head, *curr = head;
    int temp = 0;
    while (curr != NULL)
    {
        temp++;
        curr = curr->next;
    }

    k = k % temp;
    if (k == 0)
        return head;

    for (int i = 1; i < temp - k; i++)
    {
        lo = lo->next;
        hi = hi->next;
    }

    while (lo->next != NULL)
        lo = lo->next;

    lo->next = head;
    head = hi->next;
    hi->next = NULL;

    return head;
}
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}
int main()
{
    Node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        append(&head, x);
    }
    int y;
    cin >> y;
    Node* temp = rotate(head, y);
    printList(temp);
    return 0;
}
