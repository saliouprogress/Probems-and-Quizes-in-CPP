#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the matrixRotation function below.
void matrixRotation(vector<vector<int>> matrix, int r) 
{
  int raw = matrix.size(), column = (matrix[0]).size(), moveAlongRaw = 0, moveAlongColumn = 0;
  vector<vector<int>> rotated; int indexI = 1, indexJ = 1; 
  
  cout << "before rotation " << matrix[indexI][indexJ] << endl;
  for (int i = 0; i < matrix.size(); i++)
  {
    
     for (int j = 0; j < (matrix[0]).size(); j++)
     { 
        cout << matrix[i][j] << " ";
        if (j == (matrix[0]).size()-1)  
        { 
        moveAlongRaw = raw - 2*indexI-1; cout << "   " << moveAlongRaw;
        //r += (-1 * moveAlongRaw);
        cout << endl; 
        } 
     }
  }
  
  
  r += (-1 * moveAlongRaw);
  indexI += moveAlongRaw;
  cout << "r " << r << endl;
  moveAlongColumn = column - 2*indexJ -1;
  if ( r > 0 && r < moveAlongColumn ) 
  { 
    r = moveAlongColumn;
    //indexJ += moveAlongColumn;
  }
  else
  { 
    r += -moveAlongColumn;
    //indexJ += moveAlongColumn;
  }
  
  cout << "r " << r;
  
  cout << "after rotation " << matrix[indexI][indexJ] << endl;
  
}

int main()
{
   vector<vector<int>> matrix; int raw, column, r, input;

    
    cin >> raw >> column >> r; 
    for (int i = 0; i < raw; i++)
    {
        vector<int> temp;
        for (int j = 0; j < column; j++) 
        {
            cin >> input;
            temp.push_back(input);
        }
        matrix.push_back(temp);
    }

    matrixRotation(matrix, r);

    return 0;
}
