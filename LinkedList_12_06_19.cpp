#include <iostream>


using namespace std;

class Node
{
  public:
  int data;
  Node* next;
};

void push(Node** head_ref, int new_data)  
{  
    /* allocate node */
    Node* new_node = new Node(); 
  
    /* put in the data */
    new_node->data = new_data;  
  
    /* link the old list off the new node */
    new_node->next = (*head_ref);  
  
    /* move the head to point to the new node */
    (*head_ref) = new_node;  
}
void printList(Node *node)  
{  
    while (node!=NULL)  
    {  
        cout<<node->data<<" ";  
        node = node->next;  
    }  
} 
int main()
{
 Node* res = NULL;  
 Node* a = NULL;  
 Node* b = NULL; 
 push(&a, 15);  
 push(&a, 10);  
 push(&a, 5);  
  
 push(&b, 20);  
 push(&b, 3);  
 push(&b, 2); 
 
 printList(a);
 printList(b);
  
  return 0;
}
