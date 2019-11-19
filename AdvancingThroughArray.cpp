#include <iostream>
#include <vector>

using namespace std;

bool CanReachEnd(const vector<int>& max_advance_steps)
{
  int furthest_reach_so_far = 0; // get first index
  int last_index = max_advance_steps.size() -1; // get last index
  for (int i = 0; i <= furthest_reach_so_far && furthest_reach_so_far < last_index; i++) // iterate from first to last index
  { 
    cout << "furthest_reach_so_far " << furthest_reach_so_far << endl; // output current index
    furthest_reach_so_far = max(furthest_reach_so_far, max_advance_steps[i] +i);
    //cout << "furthest_reach_so_far " << furthest_reach_so_far << endl;
  }
  cout << "furthest_reach_so_far " << furthest_reach_so_far << endl;
  return furthest_reach_so_far >= last_index;
 }

int main()
{
  vector<int> mar = {3,3,1,0,2,0,1};
  cout << CanReachEnd(mar) << endl;

  return 0;
}
