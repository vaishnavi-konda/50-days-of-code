/*
C++ program to find the row with maximum number of 1s.

Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.

Print the index of the row with maximum number of 1s. If there is no such row, print -1.

Example:
    Input matrix : rows = 4, columns = 4
    0 1 1 1
    0 0 1 1
    1 1 1 1  // this row has maximum 1s
    0 0 0 0

    Output: 2 (0 based indexing)

Algorithm :

1. Take 2 variables, row = 0, col = 0 to traverse through the matrix column wise.
2. Start from the first column, and traverse through all columns.
    For the first column, keep the row = 0 and vary col from 0 to columns, and check if any matrix[row][col] is 1.
3. If there is a 1 in any column, return the row number i.e 'row'.
    As the rows are sorted, the row in which 1 occurs in the starting columns, that row has max number of 1s. 
4. If there are no 1s in the matrix, return -1.

Another Approach : 

By counting the number of 1s in each row, and maximum of all the counts is returned.

Both the methods take O(rows*columns) time in worst case.

*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int rowWithMax1s(vector<vector<int>> matrix, int rows, int columns);

int main() 
{
    int rows, columns;
    
    cout << "Enter the number of rows and columns : ";
    cin >> rows >> columns;

    vector<vector<int>> matrix(rows, vector<int>(columns, 0));
    
    cout << "Enter matrix elements : \n";

    for(int i = 0 ; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << rowWithMax1s(matrix, rows, columns) << endl;
}


int rowWithMax1s(vector<vector<int>> matrix, int rows, int columns)
{
    for (int col = 0; col < columns; col++)
    {
        for (int row = 0; row < rows; row++)
        {
            if (matrix[row][col] == 1)
            {
                return row;
            }
        }
    }
    return -1;
}

/*

Another approach : By counting number of 1s in each row

int maxCount = INT_MIN, index = -1, rowCount = 0;

    for (int i = 0; i < rows; i++)
    {
        int rowCount = 0;
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] == 1)
            {
                rowCount++;
            }
        }
        
        if (rowCount > maxCount && rowCount > 0)
        {
            maxCount = rowCount;
            index = i;
        }
        
    }
    return index;
*/