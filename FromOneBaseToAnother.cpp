#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

string ConstructFromBase(int NumAsInt, int base)
{
  return NumAsInt == 0 ? "" : ConstructFromBase(NumAsInt / base,base) + (char)(NumAsInt % base >= 10 ? 'A' + NumAsInt % base - 10 : '0' + NumAsInt % base);
}

string ConvertBase(const string& NumAsString, int b1, int b2)
{
  bool is_negative = NumAsString.front() == '-';
  int NumAsInt = 0;
  for (size_t i = (is_negative == true? 1 : 0); i < NumAsString.size(); i++)
  {
    NumAsInt *= b1;
    NumAsInt += isdigit(NumAsString[i]) ? NumAsString[i] - '0' : NumAsString[i] - 'A' + 10;
  }
  return (is_negative ? "-" : "") + (NumAsInt == 0 ? "0" : ConstructFromBase(NumAsInt,b2));
}




int main()
{


  return 0;
}
