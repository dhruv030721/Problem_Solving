void addNode(Node *head, int pos, int data)
{
   Node* temp = head;
   Node* newNode= new Node(data);
   
    int count = 0;
    
    while(temp != NULL){
        if(count==pos) break;
        count++;
        temp= temp->next;
    }
    
    Node*front = temp->next;
    
    if(front == NULL){
        newNode->next = NULL;
        newNode->prev = temp;
        temp->next = newNode;
    } else {
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        front->prev = newNode;
    }
    
    
   
}