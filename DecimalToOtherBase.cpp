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
    NumToString[i] = + (n % base + '0');
    n = n / base; 
    i++;             
  }
  
  for (int j = i - 1; j >= 0; j--) 
    cout << j << " " << NumToString[j] << endl;
 	cout << endl;
  return n; // == (is_negative ? -n : n);
}


int main()
{
  int num = 200, base = 2; string mynumber = "-123456";
  cout << DecimalToOtherBase(mynumber, num, base) << endl;
  
  return 0;
}
