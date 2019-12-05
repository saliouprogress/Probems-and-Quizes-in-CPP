#include <iostream>


using namespace std;

struct Node
{
  int data;
  Node* next;
};

Node* head = NULL;
Node* tail = NULL;

void insert_node( int new_data)
{
   Node* new_node = (Node*)(malloc(sizeof(struct Node))); // create a memory for this node. 
   new_node -> data = new_data; // assign data to node.
   new_node -> next = NULL; // make the next poiter NULL
   //head = new_node; // 
   if (head == NULL) 
   {
     head = new_node;
     tail = new_node;
   }
   else
   {
     tail -> next = new_node;
     tail = new_node;
   }
}


void insert_start( int new_data)
{
   Node* new_node = (Node*)(malloc(sizeof(struct Node))); // create a memory for this node. 
   new_node -> data = new_data; // assign data to node.
   new_node -> next = head; // make the next poiter NULL
   head = new_node;
}

void insert_position(int pos, int value)
{
  Node* prev = new Node;
  Node* current = new Node;
  Node* post = new Node;
  current = head;
  for (int i = 1; i < pos; i++)
  {
     prev = current; 
     current = current -> next;
  }
  prev -> next = post;
  post -> data = value;
	
  post -> next = current;
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
  insert_node(5);
  insert_node(6);
  insert_node(7);
  insert_node(8);
  insert_node(9);
  insert_node(10);
  insert_start( 11);
  //insert_node(10);
  insert_position(3, 3);
  Display();

  return 0;
}

/*

#include <iostream>

using namespace std;

struct Node { 
	int data; 
	struct Node* next; // Pointer to next node in SLL 

};


int main()
{
  Node* head = NULL;
  Node* first = NULL;
  Node* second = NULL;
  Node* third = NULL;
  
  
  head = new Node(); 
  first = new Node();
  second = new Node();
  third = new Node();
  
  
  
  head -> data = 1;
  head -> next = first;
  
  first -> data = 2;
  first -> next = second;
  
  second -> data = 3;
  second -> next = third;
  
  third -> data = 4;
  third -> next = NULL;
  
  Node* ptr;
  
  ptr = head;
  
  while (ptr != NULL)
  {
    cout << ptr -> data << " ";
    
    ptr = ptr -> next;
    
  }
  
  return 0; 
}

*/
