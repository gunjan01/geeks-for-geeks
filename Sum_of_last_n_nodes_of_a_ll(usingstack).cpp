/*

COmplexity O(n)
Approach 1 : Use system or user stack
Approach 2: Reverse list nad traverse n nodes
Approach 3: Use length of linked list
Approach 4: Use two pointers

*/


int sumOfLastN_Nodes(struct Node* head, int n)
{
      
      
      int a[1000],top=-1,sum=0;
      struct Node* temp=head;
      
      while(temp!=nullptr)
      {
          a[++top]=temp->data;
          temp=temp->next;
      }
      
      while(n!=0)
      {
          sum=sum+a[top];
          top=top-1;
          n--;
      }
      
      return sum;
      
}
