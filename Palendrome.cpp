#include <iostream>
#include <string>

using namespace std;

bool PalindromeVerify(string& mar)
{
  for (int i = 0, j = mar.size()-1; i < j; ++i, --j)
  {
    if (mar[i] != mar[j])
      return false; 
  }
  return true;
}

int main()
{ 
  string mar = "panaanap";
  cout << PalindromeVerify(mar) << endl;
  return 0;
}
