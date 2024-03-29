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
    compr[bigarray[i]]++; //cout << compr[bigarray[i]] << endl;
    count = 0;
  }
  
  for(int j = 0; j < subarray.size(); j++)
  {
     if ((compr[subarray[j]] > 0 )) 
     {count++; //cout << "subarray[j]: " << compr[subarray[j]] << endl; 
     }
  }
  
  if (count >= subarray.size()) 
  { 
    cout << "Sub is a subset of Big: " << count << endl;
    return true;
  }
  
  else
  {
    cout << "Sub is not a subset of Big: " << count << endl;
  	return false;
  }
  
}
int main() 
{ 

  vector<int>  big = {10, 5, 2, 23, 19}, sub = {19, 5, 3};
  
  cout << FindSubset(big,sub) ;

  return 0;
}
