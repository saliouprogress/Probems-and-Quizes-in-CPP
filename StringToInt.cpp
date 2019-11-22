#include <iostream>
#include <string>

using namespace std;

int StringToInt(string& str)
{
  int result = 0;
  for (int i = (str[0] == '-') ? 1 : 0; i < str.size(); i++)
  {
    const int digit = str[i] - '0';
    result = result * 10 + digit;
    cout << digit << " " << str[i] << endl;
  }
  return (str[0] == '-') ? -result : result;
}


int main()
{
  string mar = "123456";
  cout << "result " << StringToInt(mar) << endl;
  return 0;
}
