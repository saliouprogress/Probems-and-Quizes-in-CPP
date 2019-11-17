
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int DeleteDuplicates(vector<int> A_ptr, int m, int x)
{
  int The_min = min(2,m);
  vector<int> A = A_ptr; // Assign input to a temporary vector
  if (A.empty()) // check if vector is empry then return 0, otherwise move to next step.
  { 
    return 0;
  }
  int count = 0;
  int write_index = 1; // create index counter to check if elements are not duplicates
  for (int i = 1; i < A.size(); ++i) // loop through array from beginning one element at a time
  {
      if (A[i] != x)
      { 
        cout << i << ", " << write_index-1 << endl;
        A[write_index++] = A[i];
      }
    else
    {
      count++;
      if ( count <= The_min)
        
    
    //write_index++;
  }
  //cout << The_min << endl;
  for (int i = 0; i < A.size(); ++i)
  {
    if (i >= write_index) { A[i] = 0;}
    cout << "Array " << A[i] << endl;
  }
  return write_index;
}

int main()
{
  vector<int> mar = {2,3,5,5,7,11,11,11,13};   
  //std::vector<int>* mar = new std::vector<int>();
  /*
  mar->push_back(0);
  mar->push_back(12);
  mar->push_back(1);
  mar->push_back(4);
  */
  cout << DeleteDuplicates(mar, 3,11);

  return 0;
}
