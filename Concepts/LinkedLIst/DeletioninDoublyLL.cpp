class Solution
{
public:
    Node *deleteNode(Node *head, int x)
    {

        int count = 0;

        // Edge case : if LL is empty
        if (head == NULL || x <= 0)
            return head;

        Node *temp = head;

        while (temp != NULL)
        {
            count++;
            if (count == x)
                break;
            temp = temp->next;
        }

        Node *back = temp->prev;
        Node *front = temp->next;

        // Edge case : if deletion node is head
        if (back == NULL)
        {
            temp = temp->next;
            temp->prev = NULL;
            delete head;
            return temp;
            // Edge case : if deletion node is tail
        }
        else if (front == NULL)
        {
            temp->next = NULL;
            temp->prev = NULL;
            back->next = NULL;
            delete temp;
            return head;
            // Main case : Delete node on kth position
        }
        else
        {
            back->next = front;
            front->prev = back;
            temp->next = NULL;
            temp->prev = NULL;
            delete temp;
            return head;
        }
    }
};