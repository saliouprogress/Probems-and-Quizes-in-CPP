#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int numVLA, numQueries; // get number of arrays and number of queries
    cin >> numVLA, cin >> numQueries;
    vector<vector<int>> bigMatrix; // create martix to store all data

    for (int i  = 0; i < numVLA; i++) // loop through each index and insert an array
    {
        vector<int> tempMatrix; // create temporary matrix to store temporary data
        int lengthArrayI; cin>> lengthArrayI;  // get size of array to insert
        for (int I = 0; I < lengthArrayI; I++) // create loop to ask for data and insert 
        {
            int elementJ; cin >> elementJ; // insert data one by one
            tempMatrix.push_back(elementJ); // store data in temporary array
        }
        bigMatrix.push_back(tempMatrix); // store temporary array in big array.
    }
    
    // time  for out putting
    vector<pair<int,int>> tempout;
    for (int i = 1; i <= numQueries; i++)
    {
        int getRaw, getColumn;
        cin >> getRaw,  cin >> getColumn;
        pair<int,int> tempPair;
        tempPair.first = getRaw; tempPair.second = getColumn;
        tempout.push_back(tempPair);
    }
    
    for (int i = 0; i < numQueries; i++)
    {   
        int getRaw = (tempout[i]).first, getColumn = (tempout[i]).second;
        cout << bigMatrix[getRaw][getColumn] << endl;
    }
    return 0;
}

