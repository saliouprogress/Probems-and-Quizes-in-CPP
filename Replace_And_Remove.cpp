#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>

using namespace std;


char DecimalToOtherBase(const string & num, char replace, char remove, char substitute)
{ 
  int tempVec[32];
  int i = 0, countReplace = 0, countRemove = 0, current = 0, next = current + 1;
  while (num[i] != '\0') 
  { 
    if (num[i] == replace) { countReplace += 2; }
    if (num[i] == remove) { countRemove++;  current = i; next = current +1; num[current] = num[next]; 
                           //next++;
                          }
    
    cout << num[i] << " " << countReplace << " " << countRemove << endl ;
    next++;
    i++;             
  }
  
  cout << endl;
  return replace;
}


int main()
{
  char replace = 'a', remove = 'b' , substitute = 'd'; string mystring = "acdbbca";
  cout << DecimalToOtherBase(mystring, replace, remove, substitute) << endl;
  
  return 0;
}
