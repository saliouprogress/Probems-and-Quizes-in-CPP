#include <iostream> 
#include <unordered_map> 
#include <time.h> 
#include <vector>
using namespace std; 

bool FindSubset(vector<int> vec, int num)
{
  unordered_map<int, int> compr;
  
  for(int i = 0; i < vec.size(); i++)
  {
    compr[num - vec[i]]++; cout << num - vec[i] << endl;
    if ((compr[vec[i]] > 0 )) 
     {
       cout << num - vec[i] << ", " << vec[i] << endl;
       return true;
     }
  }
  
  cout << "No match" << endl;
  return false;
  
}
int main() 
{ 

  vector<int>  vec = {1, 4, 45, 6, 10, -8}; int num = 16;
  
  cout << FindSubset(vec,num) ;

  return 0;
}
