/*
    Max rectangle 
    Given a binary matrix. Find the maximum area of a rectangle formed only of 1s in the given matrix.
    Example 1:
        Input: n = 4, m = 4
                M[][] = {{0 1 1 0},
                        {1 1 1 1},
                        {1 1 1 1},
                        {1 1 0 0}}
        Output: 8
        Explanation: For the above test case the matrix will look like
                    0 1 1 0
                    1 1 1 1
                    1 1 1 1
                    1 1 0 0
                    the max size rectangle is 
                    1 1 1 1
                    1 1 1 1
                    and area is 4 *2 = 8.
    Algorithm:
    1. Run a loop to traverse through the rows.
    2. Now If the current row is not the first row then update the row as next point...
    3. If matrix[i][j] is not zero then matrix[i][j] = matrix[i-1][j] + matrix[i][j].
    4. Find the maximum rectangular area under the histogram, consider the ith row as heights of bars of a histogram.
    5. This can be calculated as given in this article Largest Rectangular Area in a Histogram
    4. Do the previous two steps for all rows and print the maximum area of all the rows.
*/
#include <iostream>
#include <stack>
#include <climits>
using namespace std;
#define R 4
#define C 4

int maxHistogram(int row[]);
int maxRectangle(int A[][C]);

int main()
{
    int A[][C] = {
        { 0, 1, 1, 0 },
        { 1, 1, 1, 1 },
        { 1, 1, 1, 1 },
        { 1, 1, 0, 0 },
    };
 
    cout << "Area of maximum rectangle is " << maxRectangle(A);
 
    return 0;
}
 
int maxHistogram(int row[]) {
    stack<int> result;
    int top_val, max_area = 0, area = 0, i = 0;

    while (i < C) {
        if (result.empty() || row[result.top()] <= row[i])
            result.push(i++);
 
        else {
            top_val = row[result.top()];
            result.pop();
            area = top_val * i;
 
            if (!result.empty())
                area = top_val * (i - result.top() - 1);
            max_area = max(area, max_area);
        }
    }

    while (!result.empty()) {
        top_val = row[result.top()];
        result.pop();
        area = top_val * i;
        if (!result.empty())
            area = top_val * (i - result.top() - 1);
 
        max_area = max(area, max_area);
    }
    return max_area;
}
 
// Returns area of the largest rectangle with all 1s in
int maxRectangle(int A[][C]) {

    int result = maxHistogram(A[0]);
    for (int i = 1; i < R; i++) {
        for (int j = 0; j < C; j++)
            if (A[i][j])
                A[i][j] += A[i - 1][j];

        result = max(result, maxHistogram(A[i]));
    }
 
    return result;
}
