/*
C++ program to print the elements of a matrix in sorted rder.

Given an rows x columns  matrix, where every row and column is sorted in non-decreasing order. 
Print all elements of matrix in sorted order.

Example 1 :
Input : rows = 4, columns = 4
        matrix = {{10, 20, 30, 40},
                  {15, 25, 35, 45},
                  {27, 29, 37, 48},
                  {32, 33, 39 50}}
Output : 10 15 20 25 27 29 30 32 33 35 37 39 40 45 48 50

Example 2 :
Input : rows = 3, columns = 3
        matrix = {{1, 3, 4},
                  {2, 6, 7},
                  {5, 8, 9}}
Output : 1 2 3 4 5 6 7 8 9 

Algorithm :
1. Create a output array of size rows x columns.
2. Traverse the matrix from start to end and insert all the elements in output array.
3. Sort and print the output array.

Complexity Analysis :
1. Time Complexity : O(R*C log (R*C))).
2. Space Complexity : O(R*C), since the output array is of size R*C.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printSortedMatrix(vector<vector<int>> matrix, int rows, int columns);

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

    printSortedMatrix(matrix, rows, columns);
}

void printSortedMatrix(vector<vector<int>> matrix, int rows, int columns)
{
    // Vector to store the elements in sorted order
    vector<int> output;
    
    // Traverse through the matrix, and insert each element into the output vector
    for(int r = 0; r < rows; r++)
    {
        for(int c = 0; c < columns; c++)
        {
            output.push_back(matrix[r][c]); 
        }
    }

    //Sort and print the output vector 
    sort(output.begin(), output.end());
    
    for(int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
}

