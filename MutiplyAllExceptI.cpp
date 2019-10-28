#include <iostream>


using namespace std;



int main()
{
int Array[5] =  {1,2,3,4,5}, ProductArray[5];
int product = 1;
for (int i = 0; i < sizeof(Array)/sizeof(Array[0]); i++)
{
  
  cout << Array[i] << endl;
  product *= Array[i];
  
  cout << product << endl;
}

for (int i = 0; i < sizeof(Array)/sizeof(Array[0]); i++)
{
  ProductArray[i] = product/Array[i];  
  cout << ProductArray[i] << endl;
}

for (int j = 1; j  < sizeof(Array)/sizeof(Array[0]) -1; j++)
{
  int temp = Array[0];
  Array[0] = Array[j]; 
  Array[j] = temp;
  for (int i = 1; i < sizeof(Array)/sizeof(Array[0]); i++)
  {
    product *=Array[i];
  }
  
  ProductArray[i] = product;  
  cout << ProductArray[i] << endl;
  sort(Array.begin(),Array.end();
}
  return 0;
}
