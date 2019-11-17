#include <iostream>   // Problem 6.6 Buy and Sell Stock
#include <vector>
#include <algorithm>

using namespace std;

void FindMaxProfit(vector<int> prices)
{
  int bayPrice, sellPrice, diff; vector<int> temp;
  
  for (int i = 0; i < prices.size(); i++)
  {
     for (int j = i+1; j < prices.size(); j++)
     {
        bayPrice = prices[i]; 
        sellPrice = prices[j];
        diff = sellPrice - bayPrice;
        if (i != j && diff >= 0)
        {
          temp.push_back(diff);
          cout << diff << endl;
        }
     }
  }
  int _max = *max_element(temp.begin(),temp.end());
  cout << " max is: " << _max << endl;
}

int main()
{

vector<int> stockprices = {310,315,275,295,260,270,290,230,250};
FindMaxProfit(stockprices);

return 0;
}
