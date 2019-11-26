#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>

using namespace std;

string RemoveElement( int i, string num)
{
  while (num[i] != NULL) 
  {
     num[i] = num[i +1];
     i++; 
  }
  for (int x = i; x >=0; --x) { cout <<  num[x] <<  " ";}
  cout << endl;
  return num;
}

int DecimalToOtherBase(string num, char replace, char remove, char substitute)
{ 
  string tempVec[32];
  int i = 0, countReplace = 0, current = 0, next = current + 1;
  while (num[i] != NULL) 
  {
    if (num[i] == remove) 
    { 
      num = RemoveElement( i, num);
      i = i-1;
    }
    i++; 
  }
  //tempVec[i] = num[i];
  for (int x = 0; x < i; x++) { cout <<  num[x] <<  " ";}
  cout << endl;
  return current;
}


int main()
{
  char replace = 'a', remove = 'b' , substitute = 'd'; string mystring = "bbbbbbbbaahhhbbcccbkdb";
  cout << DecimalToOtherBase(mystring, replace, remove, substitute) << endl;
  return 0;
}
