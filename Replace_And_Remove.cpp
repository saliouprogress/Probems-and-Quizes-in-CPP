#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>

using namespace std;


char DecimalToOtherBase(string num, char replace, char remove, char substitute)
{ 
  string tempVec[32];
  int i = 0, countReplace = 0, countRemove = 0, current = 0, next = current + 1;
  while (num[i] != '\0') 
  { 
    
    if (num[i] == replace) { countReplace += 2; }
    if (num[i] == remove) { num[i] = num[i + ++countRemove]; i = i-1;}
    else { num[i] = num[i + countRemove];}
    tempVec[i] = num[i];
    i++;             
  }
  tempVec[i] = num[i];
  for (int x = i-1; x >=0; --x) { cout << tempVec[x] <<  " " <<  x <<  endl;}
  cout << countRemove << endl;
  return replace;
}


int main()
{
  char replace = 'a', remove = 'b' , substitute = 'd'; string mystring = "acdca";
  cout << DecimalToOtherBase(mystring, replace, remove, substitute) << endl;
  
  return 0;
}
