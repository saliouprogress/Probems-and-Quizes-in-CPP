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
    else if (num[i] == remove) { num[i] == num[i + ++countRemove]; i--;
                               }
    //else { num[i] == num[i + countRemove]; }
    
    cout << num[i] << " " << countReplace << " " << countRemove << endl ;
    next++;
    i++;             
  }
  
  cout << endl;
  return replace;
}


int main()
{
  char replace = 'a', remove = 'b' , substitute = 'd'; string mystring = "acdbbbca";
  cout << DecimalToOtherBase(mystring, replace, remove, substitute) << endl;
  
  return 0;
}
