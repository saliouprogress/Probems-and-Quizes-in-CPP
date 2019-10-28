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

  return 0;
}
