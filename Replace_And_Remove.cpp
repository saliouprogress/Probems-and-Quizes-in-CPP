#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>

using namespace std;

string  ReplaceElement(string num, char replace, char substitute, int cr, int current)
{ 
  int i = current + cr;
  while (num[i] != 0)
  {
    if ( num[i] == replace) { num[i] = substitute;}
    if (num[i] != replace)
    { 
      if (num[i] != remove) { num[current++] = num[i];}
    }
    cout << num[i] << " " ;
    i--;
  }
  
  //cout << (int x = 0; x < current; x++) { cout <<  num[x] <<  " ";}
  cout << endl;
  return num;
}

int RemoveElement(string num, char replace, char remove, char substitute)
{ 
  int i = 0, cr = 0, current = 0;
  while (num[i] != NULL) 
  {
    if ( num[i] == replace) { cr +=2; }
    if (num[i] != remove) { num[current++] = num[i];}
    i++; 
  }
  //num = ReplaceElement( num, replace, substitute, cr, current);
  for (int x = 0; x < current; x++) { cout <<  num[x] <<  " ";}
  cout << "cr " << cr << endl;
  return current;
}

int main()
{
  char replace = 'a', remove = 'b' , substitute = 'd'; string mystring = "aahhhbbcbbbbbbbaabbbbbbccbkdb";
  cout << RemoveElement(mystring, replace, remove, substitute) << endl;
  return 0;
}
