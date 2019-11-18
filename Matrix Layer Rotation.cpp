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
  vector<vector<int>> rotated; int indexI = 0, indexJ = 0; 
  
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
    indexJ += moveAlongColumn;
  }
  
  cout << "r " << r;
  
  cout << "after rotation " << matrix[indexI][indexJ] << endl;
  
  cout << "raw: " << moveAlongRaw << ", Column " << moveAlongColumn << endl;
  
  int Corner1I, Corner1J, Corner2I, Corner2J, Corner3I, Corner3J, Corner4I, Corner4J;
  
  if ( 2*indexI < raw) {Corner1I = indexI; cout << Corner1I << endl;}
  else { cout << "Bottom" << endl;}
  if ( 2*indexJ < column) {Corner1J = indexJ; cout << Corner1J << endl;}
  else { cout << "Right" << endl;}
  
  
  
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
