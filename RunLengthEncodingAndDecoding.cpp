#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string ExpendString(const string& expd)
{
  int count = 1, temp; vector<char> countVec; 
  for (int i = 0; i < expd.size(); i = i + 2)
  {
    for ( int j = 0; j < expd[i] -'0'; j++)
    {
      countVec.push_back(expd[i+1]);
    }
  }
  string mar1 = new char[countVec.size()+1]; 
  for (int x = 0; x < countVec.size(); x++)
  { 
    mar1[x] = countVec[x];
    cout << "mar1[" << x << "] " << " "  << mar1[x] << endl;
  }
  return mar1;
}

string CompressString(const string& mar)
{
  int count = 1, temp; vector<char> countVec; 
  string mar1 = new char[mar.size()+1]; 
  //char mar1[10];
  for (int i = 1; i < mar.size(); ++i)
  {
    if(mar[i-1] == mar[i]) 
    { 
      ++count; temp = count; 
      //cout << mar[i] <<" " << count << endl;
    }
    else 
    { 
      temp = count; countVec.push_back(temp + '0'); countVec.push_back(mar[i-1]); count = 1; //cout << mar[i] <<" " << count << endl;
      //cout << mar[i-1] <<" temp " << temp << endl;
    }
  }
  countVec.push_back(temp + '0');
  countVec.push_back(mar[mar.size()-1]);
  cout << "countVec.size() " << countVec.size() << endl;
  for (int x = 0; x < countVec.size(); x++)
  { 
    mar1[x] = countVec[x];
    cout << "mar1[" << x << "] " << " "  << mar1[x] << endl;
  }
  cout << ExpendString(mar1);
  return mar1;
}


int main()
{
  
  string mar = "AAAABBBCCDA"; string mar2 = "4A3B2C1D2A";
  string mar1 = CompressString(mar);
  //cout << CompressString(mar) << endl;
  
  cout << mar1 << endl;
  
  cout << ExpendString(mar2);
  return 0;
}
