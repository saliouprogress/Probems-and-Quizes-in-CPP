#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>

using namespace std;

string RemoveElement( int i, int remove, string num)
{
   int current = 0;
  while (num[i] != NULL) 
  {
     if (num[i] == remove) 
     {num[i] = num[i + ++current];}
     else { num[i] = num[i + current];}
     i++; 
  }
  //for (int x = i; x >=0; --x) { cout <<  num[x] <<  " " << x << endl;}
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
      num = RemoveElement( i, remove, num); ++current;
      //cout << num[i] <<  " " << i << endl;
    }
    else{ num[i] = num[ i + current];}
    i++; 
    
  }
  //tempVec[i] = num[i];
  for (int x = i; x >=0; --x) { cout <<  num[x] <<  " " << x << endl;}
  return current;
}


int main()
{
  char replace = 'a', remove = 'b' , substitute = 'd'; string mystring = "ahbcbdd";
  cout << DecimalToOtherBase(mystring, replace, remove, substitute) << endl;
  return 0;
}
