#include <iostream>
#include <string>

using namespace std;

string IntToString(int x)
{
  bool check_if_negative; // create a variable to store the sign of the number. 
  if (x < 0) { check_if_negative = true; cout << check_if_negative << endl; } // check is the number is positive or negative
  
  string s = "aa"; // create variables to store the results and digit by digit slicing of the number
  
  do {
  
    s += '0' + abs(x % 10); // convert each digit in the number to a character
    x /= 10;
    cout << x << endl;
  } while (x); // keep looping until the division becomes zero
  
  return {s.rbegin(),s.rend()}; // revert string
}

int main()
{
  int test_num = 1234;
  cout << IntToString(test_num) << endl;
  cout << '0' + 2 << endl;

  return 0;
}
