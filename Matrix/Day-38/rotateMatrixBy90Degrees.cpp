/*
C++ program to rotate a square matrix by 90 degrees in clockwise direction.

Example 1:
    Input:
    1  2  3
    4  5  6
    7  8  9

    Output:
    7  4  1
    8  5  2
    9  6  3
    Rotated the input matrix by 90 degrees in clockwise direction.

Example 2:
    Input:
    1  2  3  4 
    5  6  7  8 
    9  10 11 12 
    13 14 15 16 

    Output:
    13  9   5  1 
    14  10  6  2 
    15  11  7  3 
    16  12  8  4

Approach: 
The idea is to find the transpose of the matrix and then reverse the columns of the transposed matrix.
Here is an example to show how this works.

    1   2   3   4               1  5  9   13                  13  9   5  1
    5   6   7   8     ---->     2  6  10  14       ---->      14  10  6  2
    9   10  11  12              3  7  11  15                  15  11  7  3
    13  14  15  16              4  8  12  16                  16  12  8  4
    
    Original matrix             Transpose matrix          Columns reversed for the transpose matrix

Algorithm : 

1. To solve the given problem there are two tasks. First is finding the transpose and second is reversing the columns.
2. A transpose of a matrix is when the matrix is flipped over its diagonal, i.e the row index of an element becomes the column index and vice versa. 
    So to find the transpose interchange the elements at position (i, j) with (j, i). 
    Run two loops, the outer loop from 0 to row count and inner loop from 0 to index of the outer loop.
3. To reverse the column of the transposed matrix, run two nested loops.
    Take two variables in the outer loop, startCol = 0, endCol = columns - 1. Run the outer loop until the startCol and endCol become equal.
    Run inner loop for all rows starting from 0 to row count - 1.
    Swap element in each row for the first and last columns.

*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix, int rows, int columns);
void transpose(vector<vector<int>> &matrix, int rows, int columns);
void reverseColumns(vector<vector<int>> &matrix, int rows, int columns);
void printMatrix(vector<vector<int>> &matrix, int rows, int columns);

int main() 
{
    int rows, columns;
    
    cout << "Enter the number of rows and columns : ";
    cin >> rows >> columns;

    vector<vector<int>> matrix(rows, vector<int>(columns, 0));
    
    cout << "Enter matrix elements : \n";

    for(int r = 0 ; r < rows; r++)
    {
        for (int c = 0; c < columns; c++)
        {
            cin >> matrix[r][c];
        }
    }

    rotateMatrix(matrix, rows, columns);
}

void rotateMatrix (vector<vector<int>> &matrix, int rows, int columns)
{

    transpose(matrix, rows, columns);

    reverseColumns(matrix, rows, columns);

    printMatrix(matrix, rows, columns);
}

void transpose(vector<vector<int>> &matrix, int rows, int columns)
{
    for (int r = 0; r < rows; r++)
    {
       for (int c = 0; c < r; c++)
        {
            swap(matrix[r][c], matrix[c][r]);
        }  
    }
}

void reverseColumns(vector<vector<int>> &matrix, int rows, int columns)
{
    for (int startCol = 0, endCol = columns - 1; startCol < endCol; startCol++, endCol--)
    {
        for (int r = 0; r < rows; r++)
        {
            swap(matrix[r][startCol], matrix[r][endCol]);            
        }
    }
}
void printMatrix(vector<vector<int>> &matrix, int rows, int columns)
{
    for(int r = 0 ; r < rows; r++)
    {
        for (int c = 0; c < columns; c++)
        {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
}

