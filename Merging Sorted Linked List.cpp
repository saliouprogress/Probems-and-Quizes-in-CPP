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



int main()
{
 

  return 0;
}
