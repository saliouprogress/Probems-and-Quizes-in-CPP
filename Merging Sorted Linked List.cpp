#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
  vector<int> A{1,2,3,4,5} , B{6,8,9,11,10}, C{5,9}, MergedList;
  
  vector<vector<int>> biglist{A,B, C};
  
  for (int i = 0; i <biglist.size(); i++) 
  {
    for (int j = 0; j < (biglist[i]).size(); j++)
    {
      int temp = (biglist[i])[j];
      MergedList.push_back(temp);
    }
  }
  sort(MergedList.begin(), MergedList.end());
  
  for (int i = 0; i < MergedList.size(); i++)
  {
    cout << MergedList[i] << endl;
  }


  return 0;
}
