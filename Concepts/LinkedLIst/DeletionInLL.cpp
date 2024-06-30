#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data,
        this->next = NULL;
    }
};

Node *convertArrtoLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node *deleteHeadOfLL(Node *head)
{
    // Edge case
    if (head == NULL)
        return head;

    Node *temp = head;
    head = head->next;
    delete temp;

    return head;
}

Node *deleteTailOfLL(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}


// Node *deleteNodeBasedOnPosition(Node *head){
//     if()
// }



int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertArrtoLL(arr);
    // cout << deleteHeadOfLL(head)->data;
    deleteTailOfLL(head);
    return 0;
}