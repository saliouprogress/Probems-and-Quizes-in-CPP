#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
  vector<int> mar = {0,0,0,0,2,3,5,5,6};
  sort(mar.begin(), mar.end());
  
  cout << mar[mar.size()-1] << endl;
  
  int sum = 0; 
  
  for (int i = 0; i < mar.size()-2; i++)
  {
  sum += mar[mar.size()-2] - mar[i];
  
  }
  cout << sum << endl;

  return 0;
}
