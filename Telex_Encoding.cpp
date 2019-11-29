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
/*
string Replace_Elements(string MyString, int cm, int dt, int ep, int qm)
{
  string comma = "COMA", dot = "DOT", ques_mark =  "QUESTION MARK", exc_point = "EXCLAMATION POINT";
  
  int Num_Punc = cm + dt + ep + qm;
  
  int i = MyString.size() - Num_Punc;
  while (MyString[i] != NULL) 
  {
    MyString[i] = '0';
    i++; 
  }
  
  MyString = Decode_Element(MyString, comma);
  MyString = Decode_Element(MyString, dot);
  MyString = Decode_Element(MyString, ques_mark);
  MyString = Decode_Element(MyString, exc_point);
  
  return MyString;
}

string Remove_Single_Element(string num, char remove)
{ 
  int i = 0, cr = 0, current = 0;
  while (num[i] != NULL) 
  {
    //if ( num[i] == replace) { cr++;} //cout << current << "   ";
    if (num[i] != remove) { num[current++] = num[i];}
    i++; 
  }
  return num;
}*/
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
  //MyString = Remove_Single_Element(MyString,Point); 
  
  return MyString;
}
string Count_Punctuations(string MyString)
{
  int cm = 0, dt = 0, ep = 0, qm = 0;
  string comma = "COMA", dot = "DOT", ques_mark =  "QUESTION MARK", exc_point = "EXCLAMATION POINT";
  int i = 0;
  while (MyString[i] != NULL)
  {
    if (MyString[i] == '.') {      dt++; MyString = Decode_Element(MyString, dot); }
    else if (MyString[i] == ',') { cm++;  MyString = Decode_Element(MyString, comma); }
    else if (MyString[i] == '?') { qm++;  MyString = Decode_Element(MyString, ques_mark); }
    else if (MyString[i] == '!') { ep++;  MyString = Decode_Element(MyString, exc_point); }
    i++;
  }
  int Num_Punc = cm + dt + ep + qm;
  
  MyString = Move_To_Front(MyString);
  return MyString;
}

int main()
{
  string MyString = "Telex encoding? That, in itself is fun! Trust me. I am 31 years old.";
  cout << MyString << endl;
  cout << Count_Punctuations(MyString) << endl;
  return 0;
}
