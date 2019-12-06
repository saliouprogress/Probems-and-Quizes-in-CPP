#include <iostream>
#include <string>

using namespace std;

struct Node
{
  int data;
  Node* next;
};

Node* add_node(Node* l1head, Node* l1tail, int val)
{   
    Node* temp = new Node;
    //Node* l1tail = new Node;
    temp -> data = val; 
    temp -> next = NULL;
    
    if (l1head == NULL)
    {
      l1head = temp;
      l1tail = temp; cout << l1tail -> data << " ";
      temp = NULL;
    }
    else
    {
      l1tail -> next = temp;
      l1tail = temp; cout << l1tail -> data << " ";
    }
    return l1head;
}

void print_list(Node* lis)
{
  Node* temp = new Node;
  
  temp = lis;
  cout << temp -> data << "aa" << endl;
  /*
  while (temp != NULL)
  {
    cout << temp -> data << " ";
    temp = temp -> next;
  }*/

}

int main()
{ Node* L1head = NULL; Node* L1tail = NULL;
  Node* L2 = NULL;
  Node* M = new Node();
  
  L1head = add_node(L1head, L1tail, 5);
  L1head = add_node(L1head, L1tail, 6);
  /*
  add_node(L1, 7);
  add_node(L1, 8);
  
  add_node(L2, 9);
  add_node(L2, 10);
  add_node(L2, 11);
  add_node(L2, 12);*/
  /*
  Node *temp = new Node;
  temp = L1head;
  while(temp != NULL)
  {
    cout<< 55 << "\t";
    temp= temp -> next;
  }*/
  //print_list(L1);
  
  //print_list(L2);

  return 0;
}
