#include <iostream>
#include <string>
#include <vector>

using namespace std;

string Decode_Element(string MyString, string Code)
{
  for (int j = 0; j < Code.size(); j++)
  {
    MyString += Code[j];
  }
  return MyString;
}
string Move_To_Front(string MyString)
{
  char Point = '.', Coma = ',', Ques_Mark = '?', Exc_Point = '!';
  int i = 0, current = 0;
  while (MyString[i] != NULL)
  {
   if (MyString[i] != Coma && MyString[i] != Point && MyString[i] != Ques_Mark && MyString[i] != Exc_Point) 
   { MyString[current++] = MyString[i];}
   i++; 
  }
  return MyString;
}

string  ReplaceElement(string MyString, int count_char)
{ 
  string comma = "COMA", dot = "DOT", ques_mark =  "QUESTION MARK", exc_point = "EXCLAMATION POINT";
  char Point = '.', Coma = ',', Ques_Mark = '?', Exc_Point = '!';
  int i = MyString.size() -1 -count_char, next =  MyString.size() -1;
  while (i >= 0) 
  {
    if (MyString[i] != Coma && MyString[i] != Point && MyString[i] != Ques_Mark && MyString[i] != Exc_Point)
    { 
      MyString[next--] = MyString[i]; 
    }
    else if (MyString[i] == Coma)
    {
       for (int j = comma.size()-1; j >= 0 ; j--)
       {
         MyString[next--] = comma[j];
       }
    }
    else if (MyString[i] == Point)
    {
       for (int j = dot.size()-1; j >= 0 ; j--)
       {
         MyString[next--] = dot[j];
       }
    }
    else if (MyString[i] == Ques_Mark)
    {
       for (int j = ques_mark.size()-1; j >= 0 ; j--)
       {
         MyString[next--] = ques_mark[j];
       }
    }
    else if (MyString[i] == Exc_Point)
    {
       for (int j = exc_point.size()-1; j >= 0 ; j--)
       {
         MyString[next--] = exc_point[j];
       }
    }
    i--; 
  }
  return MyString; 
}

string Count_Punctuations(string MyString)
{
  int cm = 0, dt = 0, ep = 0, qm = 0;
  string comma = "COMA", dot = "DOT", ques_mark =  "QUESTION MARK", exc_point = "EXCLAMATION POINT";
  int i = 0, count_char = 0;
  while (MyString[i] != NULL)
  {
    if (MyString[i] == '.') {      dt++;  count_char += dot.size(); }
    else if (MyString[i] == ',') { cm++;  count_char += comma.size();}
    else if (MyString[i] == '?') { qm++;  count_char += ques_mark.size();}
    else if (MyString[i] == '!') { ep++;  count_char += exc_point.size();}
    i++;
  }
  int Num_Punc = cm + dt + ep + qm;
  // Extend length of the string to add more characters.
  for (int j= 0; j < count_char; j++)
  {
    MyString += '0';
  }
  
  MyString = ReplaceElement(MyString, count_char);
  cout << count_char << endl;
  //MyString = Move_To_Front(MyString);
  return MyString;
}

int main()
{
  string MyString = "Telex encoding? That, in itself is fun! ...Trust me. I am 31 years old.";
  cout << MyString << endl;
  cout << Count_Punctuations(MyString) << endl;
  return 0;
}
