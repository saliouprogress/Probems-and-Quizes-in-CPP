#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

void print(const std::string& infix, const std::string& comp)
{
  int count = 0;
  for (auto c = infix.begin(); c!=infix.end(); ++c)
  {
    if (*c == 'm') {count++; std::cout << (int)(*c) << std::endl;}
  }
  cout <<  "count: " << count << std::endl;
}

int main()

{
  string strf = "mamadou";
  string strl = "saliou";
  //int a = strf.length();
  //cout << a << endl;
  print(strf,strl);
  
 return 0;
}

/*
int i = 0; 
  while (strf[i] != '\0') 
  { 
    ++i; 
  } 
  cout << i << endl; 
  
    // 5. size of string object using for loop 
  for (i=0; strf[i]!='\0'; i++) 
  { 
  } 
  cout << i << endl; 
  
  std::cout << "Printable ASCII:\n";
  for (char i = 32; i < 127; ++i) 
  {
    std::cout << i << ' ';
    if (i % 16 == 15)
      std::cout << '\n';
  }
 int b = ' ', c = ' ';
 cout << b * c << endl;
 
 int var=65;
 cout<<(char)var<<endl;
 
*/
