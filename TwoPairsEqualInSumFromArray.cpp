#include <iostream> 
#include <unordered_map> 
#include <time.h> 
#include <vector>

using namespace std; 

bool FindPair(vector<int> vec, int num, int index1, int index2)
{
  unordered_map<int, int> compr;
  
  for(int i = 0; i < vec.size(); i++)
  {
   	compr[num - vec[i]]++; 
    if ((i != index1) && (i != index2))
    {
      if ((compr[vec[i]] > 0 )) 
       {
         cout << num - vec[i] << ", " << vec[i] << ",|" << i << "|, ";
         return true;
       }
    }
  }
   //cout << "No match" << endl;
  return false; 
}


bool FindTwoPairs(vector<int> pairvec)
{
  int num = 0; int test = 0;
  for(int i = 0; i < pairvec.size(); i++)
  {
    for(int j = 0 ; j < pairvec.size(); j++)
  	{
      if ((i != j ) ) 
      {
        num = pairvec[i] + pairvec[j];
      	test = FindPair(pairvec, num, i, j);
        if (test != 0)
        {
          cout <<  pairvec[i] << ", " << pairvec[j] << endl;
          //cout << ", i|" << i << "|" << ", j|" << j << "|," << endl;
          return true;
        }
      }
   	
    }
  }
  cout << "No match" << endl;
  return false;
}
  
int main() 
{ 

  vector<int>  vec1 = {1, 4, 5, 6, 10, -8, 3};
  vector<int>  vec2 = {3, 4, 7, 1, 2, 9, 8};
  
  
  //cout << FindPair(vec,num) ;
  
  cout << FindTwoPairs(vec2) << endl;

  return 0;
}
