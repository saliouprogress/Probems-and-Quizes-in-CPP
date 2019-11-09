#include <iostream> 
#include <unordered_map> 
#include <time.h> 
#include <vector>
using namespace std; 

bool FindSubset(vector<int> bigarray, vector<int> subarray)
{
  unordered_map<int, int> compr; int count = 0;
  
  for(int i = 0; i < bigarray.size(); i++)
  {
    compr[bigarray[i]]++; cout << compr[bigarray[i]] << endl;
    
    for(int j = 0; j < subarray.size(); j++)
    {
      if (compr[bigarray[i]] == subarray[j]) {count++; cout << "subarray[j]: " << subarray[j] << endl; }
    }
  }
  
  if (count >= subarray.size()) 
  { 
    cout << "count: " << count << endl;
    return true;
  }
  return false;
  
}
int main() 
{ 

  vector<int>  a1 = {11, 1, 13, 21, 3, 7}, a2 = {11, 3, 7, 1};
  
  cout << FindSubset(a1,a2) ;

  return 0;
}
