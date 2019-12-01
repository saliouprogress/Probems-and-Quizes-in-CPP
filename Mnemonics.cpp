#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <array>

using namespace std;

const int NumBut = 10;

array<string, NumBut> L_But = { { "0", "1","ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"} };

string Mnemonics(string phone_number)
{
  string partial_mnemonic(phone_number.size(),0); 
  vector<string> mnemonics;
  
  for (int i = 0; i < phone_number.size(); i++)
  {
    int temp = phone_number[i] - '0';
    //cout << (L_But[temp])[0] << endl;
    for ( int j = 0; j < (L_But[temp]).size(); j++)
    {
      //cout << (L_But[temp])[j];
    }
  }
  for (char c: L_But[phone_number[6] - '0'])
  {
    //(*partial_mnemonic)[digit] = c;
    cout << c << endl;
    //PhoneMnemonicHelper(phone_number, digit + 1, partial_mnemonic, mnemonics);
  }
  return phone_number;
}
int main()
{
  string phone_number = "0234167";
  
  cout << Mnemonics(phone_number) << endl;
  //vector<string> temp = PhoneMnemonic(phone_number);
  
  return 0;
}
