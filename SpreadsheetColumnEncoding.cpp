#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int SpreadsheetColumn(int num)
{
  int base = 26; string NumToString[32];
  int i = 1, j = 1;
  while (num > base)
  { 
    cout << i << " " << num << " " << num % base << endl;
    if (i > base) { j++;}
    num = num - base;
    ++i;
  }
  
  cout << i << " " << j << " " << num << endl;
  cout << (char)(j + 64 ) << (char)(num + 64 ) << endl;
  return num;
}

int main()
{
  int num = 10300000;
  
  cout << SpreadsheetColumn(num) << endl;

  return 0;
}
