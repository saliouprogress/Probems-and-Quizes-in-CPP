#include <iostream>
#include <string>

using namespace std;

string Reverse_Words(string sen)
{
  int i = 0, j = sen.size() -1;
  
  while (i < j)
  {
    swap(sen[i],sen[j]);
    i++; j--;
  }
  
  int current = sen.size()-1, previous = sen.size()-1;
  for (int k = sen.size()-1; k >= 0; k--)
  {
    if (sen[k] == ' ') 
    {
      current = k + 1;
      while (current < previous)
      {
        swap(sen[current],sen[previous]);
        current++; previous--;
      }
      current = k-1, previous = k -1;
    }
    else if (k == 0) 
    {
      current = k;
      while (current < previous)
      {
        swap(sen[current],sen[previous]);
        current++; previous--;
      }
    } 
  }
  
  return sen;
}

int main()
{
  string sen = "Bob likes Alice and Nadine likes Mamadou";
  cout << Reverse_Words(sen) << endl;
  return 0;
}
