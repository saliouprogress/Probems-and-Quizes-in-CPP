#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>

using namespace std;


int DecimalToOtherBase(const string & num, int n, int base)
{ 
  bool is_negative = (num[0] == '-' ? 1: 0);
  int StringToNum = 0, digit; string NumToString[32];
  for (int i = is_negative; i < num.size(); i++)
  {
    digit = num[i] - '0';
    StringToNum = StringToNum *10 +  digit;
  }
  cout << "StringToNum " << StringToNum << endl; 
  n = StringToNum;
  int tempVec[32];
  int i = 0;
  while (n  > 0) 
  { 
    tempVec[i] = n % base;
    if (n % base == 0) { NumToString[i] = + (char)('Z'); n = n-1; }
    else{ NumToString[i] = + (char)(n % base + 'A'-1); }
    cout << i << " " << n % base << " " << (char)(n % base + 'A'-1) << endl;
    n = n /base; 
    i++;             
  }
  
  for (int j = i - 1; j >= 0; j--) 
    cout << NumToString[j] << " " << tempVec[j] << endl;
    
 	cout << endl;
  return n; // == (is_negative ? -n : n);
}


int main()
{
  int num = 702, base = 26; string mynumber = "702";
  cout << DecimalToOtherBase(mynumber, num, base) << endl;
  
  return 0;
}
