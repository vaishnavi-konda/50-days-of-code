/*
C++ program to traverse the matrix in spiral form.

Example 1:

    Input: rows = 4, columns = 4
    matrix[][] = {{1, 2, 3, 4},
                  {5, 6, 7, 8},
                  {9, 10, 11, 12},
                  {13, 14, 15,16}}
    Output: 
    1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

Example 2:

Input: rows = 3, columns = 4
    matrix[][] = {{1, 2, 3, 4},
                  {5, 6, 7, 8},
                  {9, 10, 11, 12}}
    Output: 
    1 2 3 4 8 12 11 10 9 5 6 7

Algorithm :

1. Create 4 variables, rowStart = 0, rowEnd = rows - 1, columnStart = 0, columnEnd = columns - 1.

2.  First, we have to traverse through first row. 
    Keep the row index constant i.e, rowStart and vary the column index.
    Start from matrix[rowStart][columnStart] to matrix[rowStart][columnEnd].
    As first row is traversed, update rowStart = rowStart + 1.

3.  Next, we have to traverse through last column. 
    Keep the column index constant i.e columnEnd, and vary the row index
    For that, start from matrix[rowStart][columnEnd] to matrix[rowEnd][columnEnd].
    As last column is traversed, update columnEnd = columnEnd - 1.

4.  Next, we have to traverse through last row. 
    Keep the row index constant i.e rowEnd, and vary the column index.
    For that, start from matrix[rowEnd][columnStart] to matrix[rowEnd][columnEnd].
    As last row is traversed, update rowEnd = rowEnd - 1.

5.  Next, we have to traverse through first column. 
    Keep the column index constant i.e columnStart, and vary the row index.
    For that, start from matrix[rowStart][columnStart] to matrix[rowEnd][columnStart].
    As first column is traversed, update columnStart = columnStart + 1.

6.  Repeat step 2 to step 5 until rowStart <= rowEnd and columnStart <= columnEnd.
    This is the case where number of rows and columns are equal.

7.  There is a case where the number of rows and columns are unequal.
    For that, check if rowStart > rowEnd after every updation of rowStart, 
    And check if columStart > columnEnd after every updation of columnEnd.
    If any of the condition occurs then stop traversal, because the condition arises when all the elements are traversed in the matrix.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrderTraversal(vector<vector<int> > matrix, int rows, int columns);

int main() 
{
    int rows, columns;
    
    cout << "Enter the number of rows and columns : ";
    cin >> rows >> columns;

    vector<vector<int>> matrix(rows, vector<int>(columns, 0));
    
    cout << "Enter array elements : ";

    for(int i = 0 ; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }

    vector<int> spiralMatrix = spiralOrderTraversal(matrix, rows, columns);

    for (int i = 0; i < spiralMatrix.size(); i++)
    {
        cout << spiralMatrix[i] << " ";
    }
    
}

vector<int> spiralOrderTraversal(vector<vector<int> > matrix, int rows, int columns)
{
    //Vector to store the spiral order traversal
    vector<int> spiralMatrix;

    int rowStart = 0, rowEnd = rows - 1, columnStart = 0, columnEnd = columns - 1;

    while (columnStart <= columnEnd && rowStart <= rowEnd)
    {
        //For the first row
        for (int i = columnStart; i <= columnEnd; i++)
        {
            spiralMatrix.push_back(matrix[rowStart][i]);
        }
        
        rowStart++;

        //When the number of columns are more than rows
        if (rowStart > rowEnd)
        {
            break;
        }

        //For the last column
        for (int i = rowStart; i <= rowEnd; i++)
        {
            spiralMatrix.push_back(matrix[i][columnEnd]);
        }
        
        columnEnd--;

        //When the number of rows are more than columns
        if (columnStart > columnEnd)
        {
            break;
        }

        //For the last row
        for (int i = columnEnd; i >= columnStart; i--)
        {
            spiralMatrix.push_back(matrix[rowEnd][i]);
        }
        
        rowEnd--;

        //For the first column
        for (int i = rowEnd; i >= rowStart; i--)
        {
            spiralMatrix.push_back(matrix[i][columnStart]);
        }

        columnStart++;
    }

    return spiralMatrix;
}
