#include <iostream>
#include <unordered_map>
#include <array>


using namespace std;

int return_non_duplicate(array mar)
{
  unordered_map<int,int> T; int num;
  
  for (int i = 0; i < mar.size(); i++)
  {
    T[mar[i]]++; //cout << T[mar[i]] << endl;
  }
  
  for (int i = 0; i < mar.size(); i++)
  {
    if ( T[mar[i]] <= 1) { num = mar[i]; }
  }
  
  return num;
}

int main()
{
  array<int, 11>  mar{9,9,3,4,5,3,3,9,9,5,5};
  
  cout << return_non_duplicate(mar) << endl;
  
  //cout << sizeof(mar)/sizeof(mar[0]) << endl;
  return 0;
}
