#include <iostream>
#include <string>
#include <vector>

using namespace std;

string Replace_Elements(string MyString, int cm, int dt, int ep, int qm)
{
  string comma = "COMA", dot = "DOT", ques_mark =  "QUESTION MARK", exc_point = "EXCLAMATION POINT";
  return MyString;
}
string Remove_Elements(string MyString)
{
  int cm = 0, dt = 0, ep = 0, qm = 0;
  int i = 0;
  while (MyString[i] != NULL)
  {
    if (MyString[i] == '.') { dt++;}
    else if (MyString[i] == ',') { cm++;}
    else if (MyString[i] == '?') { qm++;}
    else if (MyString[i] == '!') { ep++;}
    i++;
  }
  cout << "cm " << cm << " dt " << dt << " ep " << ep << " qm " << qm << endl;
  return MyString;
}
int main()
{
 string MyString = "Telex encoding? That, in it's itself is fun! Trust me.";
 
 cout << Remove_Elements(MyString) << endl;

  return 0;
}
