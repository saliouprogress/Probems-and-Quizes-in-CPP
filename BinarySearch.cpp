#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int devideConquer(vector<int> tempVec, int lowIndex, int highIndex, int num)
{ 
  int index = (highIndex - lowIndex)/2;
  if (tempVec[index] == num ) { return true;}
  else if ((tempVec[index] != num) && (num > tempVec[index] )) 
  {
    cout << "Bigger" << endl; 
    lowIndex = index; 
    return = devideConquer(tempVec, lowIndex, highIndex, num);
  }
  else if ((tempVec[index] != num) && (num < tempVec[index])) 
  { 
    cout << "Smaller" << endl; 
    highIndex = index;
    return = devideConquer(tempVec, index, num );
  } 
  else if ((highIndex == lowIndex) && (tempVec[index] != num)) { cout << "Not Included" << endl;}
  
  return index;
}
int Binary(vector<int> vec, int num)
{ 
  int lowIndex = 0, highIndex = vec.size(), tempIndex; vector<int> tempVec = vec;
  sort(tempVec.begin(),tempVec.end());
  tempIndex = devideConquer(tempVec, lowIndex, highIndex, num );
  return tempIndex;
}
int main()
{
  vector<int> tempVec = {5,6 ,8 ,1 ,-2 ,3 ,-4}; int num = 1;    
  cout << Binary(tempVec, num);
  return 0;
}
