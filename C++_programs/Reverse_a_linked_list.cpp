struct node *reverse (struct node *head, int k)
{ 
  // Complete this method
  
  struct node* curr=head;
  struct node* next;
  struct node* prev=NULL;
  
  while(curr!=nullptr)
  {
      next=curr->next;
      curr->next=prev;
      prev=curr;
      curr=next;
      
  }
  
  head=prev;
  return head;
}
