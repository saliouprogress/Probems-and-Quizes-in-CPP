#include <iostream>


using namespace std;

struct Node
{
  //public:
  int data;
  Node* next;
};

void push(Node** head_ref, int new_data)  
{  
    /* allocate node */
    Node* new_node = new Node(); 
  
    /* put in the data */
    new_node -> data = new_data;  
  
    /* link the old list off the new node */
    new_node -> next = *head_ref;  
  
    /* move the head to point to the new node */
    *head_ref = new_node;  
}

Node* MergeLists(Node* ref1, Node* ref2)  
{  
    Node* res = NULL; 
    
    while (!(ref1 == NULL && ref2 == NULL))  
    {  
        if ( ref1 != NULL && ref2 != NULL)
        {
          if ( (ref1 -> data) <= (ref2 -> data))
          {
            push(&res, ref1 -> data);  
            ref1 = ref1 -> next; 
          }
          else
          {
            push(&res, ref2 -> data);  
            ref2 = ref2 -> next; 
          }
        }
        else if ( ref1 != NULL && ref2 == NULL)
        {
          push(&res, ref1 -> data);  
          ref1 = ref1 -> next; 
        }
        else if ( ref1 == NULL && ref2 != NULL)
        {
          push(&res, ref2 -> data);  
          ref2 = ref2 -> next; 
        }
    }
    return res;
}
void printList(Node *node)  
{  
    while (node != NULL)  
    {  
        cout << node -> data << " ";  
        node = node-> next; 
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
   
   push(&b, 50); 
   push(&b, 20);  
   push(&b, 3);  
   push(&b, 2); 
   push(&b, -2); 
   

   printList(a);
   cout << endl;
   printList(b);

   Node* M = NULL;
   cout << endl;
   M = MergeLists(a,b); 
   printList(M);
  
   return 0;
}
