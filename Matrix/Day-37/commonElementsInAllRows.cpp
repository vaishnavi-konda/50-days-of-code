/*
C++ program to find the common elements in all the rows of a matrix.

Given an R * C matrix, find all common elements present in all rows.

Example : 
Input : R = 4, C = 5
    matrix = {{1, 2, 1, 4, 8},
              {3, 7, 8, 5, 1},
              {8, 7, 7, 3, 1},
              {8, 1, 2, 7, 9}}

Output : 1 8 or 1 8
Explanation : 8 and 1 are present in all rows.

Algorithm :

1. Insert all elements of the first row in an map. 
2. For every other element in remaining rows, we check if it is present in the map. 
3. If it is present in the map and is not duplicated in current row, we increment count of the element in map by 1, else we ignore the element. 
4. If an element appears number of times equal to number of rows, we print the element.

Complexity Analysis :
1. The time complexity of this solution is O(R * C) as we are doing only one traversal of the matrix.
2. Space complexity is O(C) as a map is used to store one row elements.
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void printCommonElements (vector<vector<int>> matrix, int rows, int columns);

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

    printCommonElements(matrix, rows, columns);
}

void printCommonElements (vector<vector<int>> matrix, int rows, int columns)
{
    unordered_map<int, int> frequency;   

    for (int col = 0; col < columns; col++)
    {
        frequency[matrix[0][col]] = 1;
    }
    
    for (int r = 1; r < rows; r++)
    {
        for (int c = 0; c < columns; c++)
        {
            // If the element occurs more than once in the same row, then it is counted only once
            if (frequency[matrix[r][c]] == r)
            {
                frequency[matrix[r][c]]++;
            }   

            // Print if an element's count is equal to number of rows, i.e it is present in all the rows
            if (frequency[matrix[r][c]] == rows)
            {
                cout << matrix[r][c] << " ";
            }           
        }
    }   
}
