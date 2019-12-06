#include <iostream>
#include <vector>
#include <algorithm>
#include <memory> 
using namespace std;

template < typename T>
struct ListNode
{
  T data;
  shared_ptr<ListNode<T>> next;
};

void AppendNode(shared_ptr<ListNode<int>> *node, shared_ptr<ListNode<int>> *tail)
{
 (*tail) -> next = *node;
  *tail = *node; 
  *node = (*node) -> next;
}

void push(shared_ptr<ListNode<int>> head_ref, int new_data) 
{ 
	/* allocate node */
	shared_ptr<ListNode<int>> new_node(new ListNode<int>); 

	/* put in the data */
	new_node->data = new_data; 

	/* link the old list off the new node */
	new_node->next = head_ref; 

	/* move the head to point to the new node */
	head_ref = new_node; //cout << head_ref -> data << " ";
} 

shared_ptr<ListNode<int>> MergetwoLists( shared_ptr<ListNode<int>> L1, shared_ptr<ListNode<int>> L2)
{
  shared_ptr<ListNode<int>> dummy_head(new ListNode<int>);
  auto tail = dummy_head;
  
  while (L1, L2)
  {
    AppendNode(L1 -> data <= L2 -> data ? &L1 : &L2, &tail);
  }
  tail -> next = L1 ? L1 : L2;
  return dummy_head -> next;
}

void display(shared_ptr<ListNode<int>> head)
  {
    shared_ptr<ListNode<int>> temp(new ListNode<int>);
    temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<"\t";
      temp=temp->next;
    }
  } 

int main()
{
  shared_ptr<ListNode<int>> res = NULL; 
  shared_ptr<ListNode<int>> a = NULL; 
  shared_ptr<ListNode<int>> b = NULL; 
  
  
  push(a, 15); 
  push(a, 10); 
  push(a, 5); 
  push(a, 1); 

  push(b, 20); 
  push(b, 3); 
  push(b, 2); 
  
  res = MergetwoLists(a, b); 

  cout << "Merged Linked List is: \n"; 
  display(res);
	//printList(res); 

  return 0;
}
