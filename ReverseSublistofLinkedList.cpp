#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void insert_node(Node** head, Node** tail, int new_data)
{
    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node-> next = NULL;
    
    if (*head == NULL)
    {
        (*head) = new_node;
        (*tail) = new_node;
        new_node = NULL;
    }
    else
    {
        (*tail) -> next = new_node;
        (*tail) = new_node;
    }
   
}

void display(Node* head)
{
    Node* ptr;
    ptr = head;
    while (ptr != NULL)
    {
      cout << ptr -> data << endl;
      ptr = ptr -> next;
    }
}

int main() 
{
    Node* head = NULL;
    Node* tail = NULL;
    
    insert_node(&head, &tail, 6);
    insert_node(&head, &tail, 5);
    insert_node(&head, &tail, 4);
    insert_node(&head, &tail, 3);
    
    display(head);
    
	return 0;
}
