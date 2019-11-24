#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int SpreadsheetColumn(int num)
{
  int base = 26; string NumToString[32];
  int i = 1, j = 0, k = 0;
  while (num > base)
  { 
    j = i/base;
    if (j > 26) { j = 0; k = 1; }
    num = num - base;
    ++i;
  }
  
  for ( int p = 0; p < k; p++) 
  {
    cout << (char)( k + 65);
  }
  
   for ( int p = 0; p < j; p++) 
  {
    cout << (char)(j + 65);
  }
  cout <<(char)(num + 64 ) << endl;
  return num;
}

int main()
{
  int num = 5000;
  
  cout << SpreadsheetColumn(num) << endl;

  return 0;
}
