#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target);

int main() 
{
    int rows, cols, target;
    
    cout << "Enter the number of rows and columns : ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols, 0));
    
    cout << "Enter array elements : ";

    for(int i = 0 ; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
        
    }

    cout << "Enter the target element : ";
    cin >> target;

    cout << searchMatrix(matrix, target);
}

bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    if (matrix.empty() || matrix[0].empty())
    {
        return false;
    }
    
    int currentRow = 0, currentCol = matrix[0].size() - 1;

    while(currentCol >= 0 && currentRow < matrix.size())
    {    
        if (matrix[currentRow][currentCol] == target)
        {
            return true;
        }

        if (matrix[currentRow][currentCol] > target)
        {
            currentCol--;
        }

        else
        {
            currentRow++;
        }   
    }
    return false;
}

