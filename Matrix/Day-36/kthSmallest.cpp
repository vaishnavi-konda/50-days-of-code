/*
C++ program to print the kth smallest element in the given matrix.

Given an R x C  matrix, and a positive integer k. 
Print the kth smallest element in the given matrix.

Example 1 :
    Input : R = 4, C = 4, k = 4
            matrix = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39 50}}
    Output : 27
    Explanation: 27 is the 3rd smallest element.

Example 2 :
    Input : R = 3, C = 3, k = 3
            matrix = {{1, 3, 4},
                    {2, 6, 7},
                    {5, 8, 9}}
    Output : 3

Algorithm :
1. Create a output array of size R x C.
2. Traverse the matrix from start to end and insert all the elements in output array.
3. Sort the output array.
4. Print the (k - 1)th element in the sorted output matrix. (0 based indexing)

Complexity Analysis :
1. Time Complexity : O(R*C log (R*C))).
2. Space Complexity : O(R*C), since the output array is of size R*C.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int printSortedMatrix(vector<vector<int>> matrix, int rows, int columns, int k);

int main() 
{
    int rows, columns, k;
    
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

    cout << "Enter k value : ";
    cin >> k;

    cout << printSortedMatrix(matrix, rows, columns, k);
}

int printSortedMatrix(vector<vector<int>> matrix, int rows, int columns, int k)
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

    //Sort the output vector 
    sort(output.begin(), output.end());
    
    return output[k - 1];
}

