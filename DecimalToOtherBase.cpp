#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>

using namespace std;


int DecimalToOtherBase(int n, int base)
{ 
  //int dividend = num;
  int tempVec[32];
  int i = 0;
  while (n  > 0) 
  { 
    tempVec[i] = n % base;
    n = n / base; 
    i++;             
  }

  for (int j = i - 1; j >= 0; j--) 
    cout << j << " " << tempVec[j] << endl;
 	cout << endl;
  return n;
}


int main()
{
  int num = 256, base = 3;
  cout << DecimalToOtherBase(num, base) << endl;
  
  return 0;
}
