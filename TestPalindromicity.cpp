#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool Test_Palindromicity(string pal, int current)
{
  if ((current % 2) == 0) 
  { 
    int middle = (current-2) / 2; 
    int forward = middle +1; int backward = middle;
    while (backward >= 0)
    {
      cout << pal[forward] << " " << pal[backward] << endl;
      if (tolower(pal[forward++]) != tolower(pal[backward--])) { cout << "No Palindromicity." << endl; return false;  }
      middle--;
    }
  }
  else 
  { 
    int middle = current / 2; 
    int forward = middle + 1; int backward = middle -1;
    while (backward >= 0)
    {
      if (tolower(pal[forward++]) != tolower(pal[backward--])) { cout << "No Palindromicity." << endl; return false; }
      middle--;
    }
  }
  cout << "Palindromicity Exist!" << endl;
  return true;
}
string Remove_Non_Letter(string pal)
{
  int i = 0, current = 0;
  
  while (pal[i] != NULL)
  {
    if ( pal[i] != ',' && pal[i] != '.' && pal[i] != ' ' && pal[i] != '?' && pal[i] != ';' &&
        pal[i] != '!' && pal[i] != ':')
    { pal[current++] = pal[i];}
    i++;
  }
 
  cout << Test_Palindromicity(pal, current) << endl;
  return pal;
}

int main()
{
  string pal = "A man, a plan, a canal, Panama.";
  //string pal = "Able was I, ere I saw Elba!";
  //string pal = "Ray a Ray";
  
  cout << Remove_Non_Letter(pal) << endl;

  return 0;
}
