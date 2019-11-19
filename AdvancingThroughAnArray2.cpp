#include <iostream>
#include <vector>


using namespace std;


int main()
{
  vector<int>temp,  arr = {3,3,1,0,2,0,1};
  int nextStep = 0, current = 0, next;
  for(int i = 0; i < arr.size(); i++ )
  {
  
    int largestStep = arr[i] + i; // find largest jump
    
    current = i; next = i+1;
    while (next <= largestStep) // set the range of movement
    { 
      cout << next << " " << current << endl;
      if (arr[current] <= arr[next]) // increase on index and compare to the other. 
      {current = next; temp.push_back(next-1);} // if condition is met then update slower index
      //cout << next << " " << current-1 << endl;
      next++; 
    }
    //cout << current << endl;
    i = current;
  }
  
  for (int x:temp)
    cout<< temp[x] << endl;
  return 0;
}
