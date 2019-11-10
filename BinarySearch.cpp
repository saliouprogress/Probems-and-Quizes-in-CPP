#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int devideConquer(vector<int> tempVec, int lowIndex, int highIndex, int num)
{ 
  int index ;
  index = (highIndex + lowIndex)/2;
  
  if (tempVec[index] == num ) 
  { 
    cout << "Element is present at index: " << index << endl;
    return tempVec[index];
  }
  
  else if ((highIndex - lowIndex <= 1 ) && (tempVec[highIndex] != num) && (tempVec[lowIndex] != num)) 
  { 
    cout << num << " Element is not present In This Array." << endl; 
    return false;
  }
   
  else if ((tempVec[index] != num) && (num > tempVec[index] )) 
  {
    lowIndex = index;
    return devideConquer(tempVec, lowIndex, highIndex, num );
  }
  
  else if ((tempVec[index] != num) && (num < tempVec[index])) 
  { 
    highIndex = index;
    return devideConquer(tempVec, lowIndex, highIndex, num );
  }
 
}

int main()
{
  vector<int> tempVec = {3,3,3,3,3,3,3, -2, 4}; int num = -2;
  int lowIndex = 0, highIndex = tempVec.size(), tempIndex;
  sort(tempVec.begin(),tempVec.end());
  tempIndex = devideConquer(tempVec, lowIndex, highIndex, num );
  return 0;
}
