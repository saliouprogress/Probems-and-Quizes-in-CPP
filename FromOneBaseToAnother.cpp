#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

string ConstructFromBase(int NumAsInt, int base)
{
  return NumAsInt == 0 ? "" : ConstructFromBase(NumAsInt / base,base) + 
    (char)(NumAsInt % base >= 10 ? 'A' + NumAsInt % base - 10 : '0' + NumAsInt % base);
}

string ConvertBase(const string& NumAsString, int b1, int b2) // create function to take input string, 
                                                             //  base of input string, and base that you want to convert it to.
{
  bool is_negative = NumAsString.front() == '-'; // check if number is negative of positive
  int NumAsInt = 0; // create variable to store number converted from string to int.
  for (size_t i = (is_negative == true? 1 : 0); i < NumAsString.size(); i++) // creat loop to get all of the char in the string converted
                                                                             // into digits then the number reconstructed together into a number
  {
    NumAsInt *= b1; // multiply each digit by it's base to get the full number
    NumAsInt += isdigit(NumAsString[i]) ? NumAsString[i] - '0' : NumAsString[i] - 'A' + 10; 
  }
  return (is_negative ? "-" : "") + (NumAsInt == 0 ? "0" : ConstructFromBase(NumAsInt,b2)); // convert to intended base if not 0;
}

int main()
{
  string NumAsString = "5856"; int b1 = 10, b2 = 10;
  cout << ConvertBase(NumAsString, b1, b2) << endl;
  char A = '22';
  cout << isdigit(A) << endl;
  char str[]="1976ad";
  int year;
  if (isdigit(str[0]))
  {
    year = atoi (str);
    printf ("The year that followed %d was %d.\n",year,year+1);
  }
  return 0;
}
