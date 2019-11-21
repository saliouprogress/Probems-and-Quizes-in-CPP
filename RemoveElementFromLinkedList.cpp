#include <iostream>
#include <vector>

using namespace std;

void RemovePositionK(vector<int> mar, int k)
{
    cout << mar[k] << endl;
    int current = k, next = k+1;
    for (int i = k; i <mar.size(); i++)
    {
      mar[k] = mar[k+1];

    }
    cout << mar[k] << endl;
}

int main()
{
  vector<int> mar = {3,2,1,0,0,2,0,1}; int k = 6;
  
  RemovePositionK(mar,k);

  return 0;
}
