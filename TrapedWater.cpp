#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
  vector<int> mar = {0,0,0,0,2,3,5,5,6};
  sort(mar.begin(), mar.end());
  
  //cout << mar[mar.size()-1] << endl;
  
  int sum = 0; 
 
  for (int i = 0; i < mar.size()-2; i++)
  {
  sum += mar[mar.size()-2] - mar[i];
  
  }
  //cout << sum << endl;
  
  
  vector<int> mar1 = {0, 0, 0, 0, 0, 5};
  int first_max = 0, second_max = 0, index = 0;
  
  for (int i = 0; i < mar1.size(); i++)
  {
    first_max = max(mar1[i], first_max);
    
    if (first_max == mar1[i]) { index = i;}
    
    //cout << first_max << " " << second_max << " " << i <<  endl;

  }
  
  cout << endl;
  for (int i = 0; i < mar1.size(); i++)
  {
    if (i != index) {second_max = max(mar1[i], second_max);} 
    else{ i++;}
    
    //cout << first_max << " " << second_max << " " << i <<  " " << index << endl;

  }
  
  cout << endl;
  int sum1 = 0;
  for (int i= 0; i < mar1.size(); i++)
  {
   if (mar1[i] != first_max) { sum1 += second_max-mar1[i];} 
    //cout << sum1 << endl;
  }
  
  cout << sum1 << endl;
 
  
  return 0;
}
