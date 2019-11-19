#include <iostream>      // Find how many times the most repeated number appears
#include <unordered_map>
#include <vector>

using namespace std;

int FindLength(vector<int>& arr)
{ 
  int freq = 1; unordered_map<int, int> storefreq;

  for(int index = 0; index < arr.size(); index++)
  {
    storefreq[arr[index]]++;
    freq = max(freq, storefreq[arr[index]]);
    cout << index << " " << storefreq[arr[index]] << endl;
  }
  return freq;
}

int main()
{
  vector<int> mar = {1,3,4,6,2,2,5,0};
  cout << " max " << FindLength(mar) << endl;

  return 0;
}
