/*
C++ program to find the median of a matrix.

Given an unsorted matrix of size R x C. Find the median of the matrix.

Example 1 :
    Input : R = 3, C = 3
            matrix = {{1, 3, 5}, 
                     {2, 6, 9}, 
                     {3, 6, 9}}
    Output: 5
    Explanation : Sorting matrix elements gives us {1,2,3,3,5,6,6,9,9}. Hence, 5 is median.

Example 2 :
    Input:
    R = 3, C = 1
    matrix = {{1}, {2}, {3}}
    Output: 2

Example 3 :
    Input : R = 2, C = 2
            matrix = {{6, 5}, 
                     {1, 3}}
    Output : 4

Algorithm :
1. Create a vector 'mergedMatrix' of size R x C.
2. Traverse through the given matrix and add all elements to the vector 'mergedMatrix'.
3. Sort the 'mergedMatrix' vector.
4. If the vector has odd number of elements, then median is the middle element.
   If the vector has even number of elements, then median is the average of middle 2 elements.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMedian(vector<vector<int>> matrix, int rows, int columns);

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

    cout << getMedian(matrix, rows, columns) << endl;
}

int getMedian(vector<vector<int>> matrix, int rows, int columns)
{
    vector <int> mergedMatrix;

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < columns; c++)
        {
            mergedMatrix.push_back(matrix[r][c]);
        }
    }
    
    sort(mergedMatrix.begin(), mergedMatrix.end());

    int mid = mergedMatrix.size() / 2;

    if (mergedMatrix.size() % 2 == 0)
    {
        return (mergedMatrix[mid] + mergedMatrix[mid - 1]) / 2;
    }
    
    return mergedMatrix[mid];
}