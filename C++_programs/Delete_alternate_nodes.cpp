/* This function deletes alternate nodes from a linked list */

void deleteAlt(struct Node *head){
    // Code here
    
    struct Node* curr=head;
    struct Node* prev=head;

    
    while(curr!=nullptr && curr->next!=nullptr)
    {
        curr=curr->next;
        prev->next=curr->next;
        free(curr);
        
        prev=prev->next;
        curr=prev;
    }
    
    
    
}
