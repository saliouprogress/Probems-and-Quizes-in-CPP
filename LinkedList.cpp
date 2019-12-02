#include <iostream>


using namespace std;

struct Node
{
  int data;
  Node* next;
};

struct Node* head = NULL;

void insert_node( int new_data)
{
   Node* new_node = (Node*)(malloc(sizeof(struct Node))); // create a memory for this node. 
   new_node -> data = new_data; // assign data to node.
   new_node -> next = head; // make the next poiter NULL
   head = new_node; //  
}

void Display()
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
  insert_node(7);
  insert_node(8);
  insert_node(5);
  insert_node(3);
  Display();

  return 0;
}
