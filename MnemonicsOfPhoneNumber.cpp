#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <array>

using namespace std;

const int kNumTelDigits = 10;

const array<string, kNumTelDigits> kMapping = {{"0", "1", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"}};

void PhoneMnemonicHelper( const string& phone_number, int digit, string* partial_mnemonic, vector<string>* mnemonics)
{
  if (digit == phone_number.size())
  {
    mnemonics -> emplace_back(*partial_mnemonic);
  }
  else
  {
    for (char c: kMapping[phone_number[digit] - '0'])
    {
      (*partial_mnemonic)[digit] = c;
      PhoneMnemonicHelper(phone_number, digit + 1, partial_mnemonic, mnemonics);
    }
   }
 }
 
 vector<string> PhoneMnemonic(const string& phone_number)
{
  string partial_mnemonic(phone_number.size(),0);
  cout << "partial_mnemonic " << partial_mnemonic << endl;
  vector<string> mnemonics;
  PhoneMnemonicHelper(phone_number, 0, &partial_mnemonic, &mnemonics);
  return mnemonics;
}

int main()
{
  string phone_number = "234";
  vector<string> temp = PhoneMnemonic(phone_number);
  for (int i = 0; i < temp.size(); i++)
  {
    cout << temp[i] << endl;
  }
  return 0;
}


/*
string Mnemonics(string m)
{
  int comb = 1; map<char,string> SO;
  for (int i = m.size() -1; i >= 0; i--)
  {
    if (m[i] == '2') { string two = "ABC"; cout << two << endl;  comb *= 3; SO['2'] = two;}
    else if (m[i] == '3') { string three = "DEF"; cout << three << endl; comb *= 3; SO['3'] = three;}
    else if (m[i] == '4') { string four = "GHI"; cout << four << endl; comb *= 3; SO['4'] = four;  }
    else if (m[i] == '5') { string five = "JKL"; cout << five << endl; comb *= 3; SO['5'] = five;  }
    else if (m[i] == '6') { string six = "MNO"; cout << six << endl; comb *= 3; SO['6'] = six;  }
    else if (m[i] == '7') { string seven = "PQRS"; cout << seven << endl; comb *= 4; SO['7'] = seven; }
    else if (m[i] == '8') { string eight = "TUV"; cout << eight << endl; comb *= 3; SO['8'] = eight;  }
    else if (m[i] == '9') { string nine = "WXYZ"; cout << nine << endl; comb *= 4; SO['9'] = nine; }
    //else { string temp = m[i]; SO[m[i]] = temp;}
    cout << SO[m[i]] << endl;
  }
  cout << comb << endl;
  return m;
}
*/
