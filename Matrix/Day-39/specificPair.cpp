/* 
    Given an n x n matrix mat[n][n] of integers, find the maximum value of mat(c, d) – mat(a, b) over all choices of indexes such that both c > a and d > b.
    Example:
    Input:
    mat[N][N] = {{ 1, 2, -1, -4, -20 },
                { -8, -3, 4, 2, 1 }, 
                { 3, 8, 6, 1, 3 },
                { -4, -1, 1, 7, -6 },
                { 0, -4, 10, -5, 1 }};
    Output: 18
    Explanation: The maximum value is 18 as mat[4][2] - mat[1][0] = 18 has maximum difference.
    Algorithm:
    1. Find max value of matrix and store in maxVal variable and keep track of its location with maxRow and maxCol variables
    2. Then find min value in matrix[maxRow][maxCol] and store in minVal variable
    3. return maxVal - minVal
*/
#include <iostream>
#include <climits>
#define SIZE 5
using namespace std;

int specificPair(int array[SIZE][SIZE]);

int main(void) {
    int array[SIZE][SIZE];
    cout << "Enter " << SIZE*SIZE << " matrix elements: ";
    for (int r = 0; r < SIZE; r++)
        for (int c = 0; c < SIZE; c++)
            cin >> array[r][c];

    if(specificPair(array) == -1) {
        cout << "specific pair not fount" << endl;
    } else {
        cout << specificPair(array) << endl;
    }

}

int specificPair(int array[SIZE][SIZE]) {

    int maxRow = INT_MIN, maxCol = INT_MIN, maxVal = INT_MIN, minVal = INT_MAX;
    
    for (int r = 0; r < SIZE; r++) {
        for (int c = 0; c < SIZE; c++) {
            if (array[r][c] > maxVal) {
                maxVal = array[r][c];
                maxRow = r;
                maxCol = c;
            }
        }
    }
    
    if(maxRow == 0 && maxCol == 0)
        return -1;

    for (int r = 0; r < maxRow; r++)
        for (int c = 0; c < maxCol; c++)
            if(array[r][c] < minVal)
                minVal = array[r][c];

    return maxVal - minVal;
}
