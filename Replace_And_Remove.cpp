#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>

using namespace std;

string  ReplaceElement(string num, char replace, char substitute, int cr, int current)
{ 
  int i = current -1 + cr; int next =  i; cout << current -1 + cr << endl; vector<char> temp;
  int k = i;
  while (i >= 0) 
  {
    if (num[i-cr] != replace) 
    { 
      num[next--] = num[i - cr]; 
      temp.push_back(num[i -cr]);
    }
    else  
    { 
      num[next--] = substitute;
      temp.push_back(substitute); temp.push_back(substitute);
      num[next--] = substitute;
    }
    i--; 
  }
  
  //cout << next << " " << i << endl;
  for (int x = 0 ; x <= k ; x++) { cout <<  num[x] <<  " ";}
  //cout << temp.size() << endl;
  return num; 
}

int RemoveElement(string num, char replace, char remove, char substitute)
{ 
  int i = 0, cr = 0, current = 0;
  while (num[i] != NULL) 
  {
    if ( num[i] == replace) { cr++;} //cout << current << "   ";
    if (num[i] != remove) { num[current++] = num[i];}
    i++; 
  }
  for (int x = 0; x < current; x++) { cout <<  num[x] <<  " ";}
  cout << endl;
  num = ReplaceElement( num, replace, substitute, cr, current);
  //for (int x = 0; x < current; x++) { cout <<  num[x] <<  " ";}
  //cout << "cr " << cr << endl;
  return current;
}

int main()
{
  char replace = 'a', remove = 'b' , substitute = 'd'; string mystring = "aahhhbbbbbbbbbcaacckq";
  cout << RemoveElement(mystring, replace, remove, substitute) << endl;
  return 0;
}
