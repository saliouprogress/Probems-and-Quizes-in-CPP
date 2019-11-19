#include <iostream>
#include <vector>

using namespace std;

vector<int> clean_up(vector<int> temp)
{
  int current = 1, next = 1;
  for (int i = 1; i < temp.size(); ++i)
  {
    if (temp[current-1] != temp[i] ) { temp[current++] = temp[i];}
  }
  
  for (int i = current; i < temp.size(); ++i)
  {
    temp[i] = 0;
  }
  cout << "Minimum number of steps is " << current << endl;
  return temp;
}
bool CanReachEnd(const vector<int>& max_advance_steps)
{
  int furthest_reach_so_far = 0; // get first index
  int last_index = max_advance_steps.size() -1; // get last index
  vector<int> temp; temp.push_back(furthest_reach_so_far);
  for (int i = 0; i <= furthest_reach_so_far && furthest_reach_so_far < last_index; i++) // iterate from first to last index
  { 
    
    cout << max_advance_steps[i] + i << " furthest_reach_so_far " << furthest_reach_so_far << endl; // output current index
    furthest_reach_so_far = max(furthest_reach_so_far, max_advance_steps[i] +i); // 
    //cout << "furthest_reach_so_far " << furthest_reach_so_far << endl;
    temp.push_back(furthest_reach_so_far);
  }
  temp.push_back(furthest_reach_so_far);
  //cout << "furthest_reach_so_far " << furthest_reach_so_far << endl; // print last index reached
  for (int x:temp)
  { cout << temp[x] << " ";}
  
  cout << endl;
  vector<int> temp1 = clean_up(temp);
  for (int x = 0; x < temp1.size(); x++)
  { cout << temp1[x] << " ";}
  
  return furthest_reach_so_far >= last_index; // true if last index reahed is bigger or equal to last index in array
}

int main()
{
  vector<int> mar = {3,3,1,0,2,0,1}; // input data
  cout << CanReachEnd(mar) << endl; // 
  

  return 0;
}
