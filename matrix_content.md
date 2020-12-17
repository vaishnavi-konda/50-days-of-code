# [***MATRIX or 2 DIMENSIONAL ARRAYS***](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix)

## [Day-31](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-31) 
## Search for an element in a Matrix

C++ program to search for an element in a 2D Matrix.

Given a matrix of size m x n matrix and a target element.

The matrix has the following properties:

1. Integers in each row are sorted from left to right.
2. The first integer of each row is greater than the last integer of the previous row.

Print 1 if the target element is found in the matrix, otherwise print 0.

Example 1:

    Input : m = 3 , n = 4
        matrix = {
                  {1, 3, 5, 7},
                  {10, 11, 16, 20},
                  {23, 30, 34, 60},
                 }
        target = 3
    Output : 1

Example 2:

    Input : m = 3 , n = 4
        matrix = {
                  {1, 3, 5, 7}, 
                  {10, 11, 16, 20}, 
                  {23, 30, 34, 60},
                 }
        target = 70
    Output : 0

Example 3:

    Input : m = 0, n = 0
        matrix = {}
        target = 10
    Output : 0

Algorithm :

    Method 1 : (Linear search)

    Search for the element by traversing linearly in the matrix.
    1. Traverse through each row, compare the target with every element in each row.
    2. If target is found anywhere, return 1 and stop traversal.
    This method takes O(m*n) time.

<br />

    Method 2 : (Binary search)

    As each row is sorted, we can use binary search for individual rows.

    1. Iterate through each row of matrix.
    2. In every row, use binary search to check if the target is present in that row.
    This method takes O(m log n) time.

<br />

    Method 3 :

    1. Start from the top right corner of the matrix.(From the last element in first row)
        For that, create two variables to store the indices, 'currentRow' = 0, 'currentCol' = matrix[0].size() - 1.
    2. If matrix[currentRow][currentCol] is less than target, update currentRow = currentRow + 1.
        We are moving to the next row, because all the elements in any row are less than the next row.
    3. If matrix[currentRow][currentCol] is greater than target, update currentCol = currentCol - 1.
        We are moving column backward in the same row, as the elements are sorted.
    4. Compare that element with target, if matrix[currentRow][currentCol] is equal to target, print 1 and stop execution.
    5. Repeat step 2, 3, 4 until the currentRow, currentCol are in valid range i.e, until (currentCol >= 0 && currentRow < matrix.size())

    This method takes O(m+n) time.

The code here is written for Method 3.

## [Day-32](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-32) 
## Spirally Traversing a Matrix

C++ program to traverse the matrix in spiral form.

Example 1:

    Input: rows = 4, columns = 4
    matrix[][] = {{1, 2, 3, 4},
                  {5, 6, 7, 8},
                  {9, 10, 11, 12},
                  {13, 14, 15,16}}
    Output: 
    1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

![spirallyTraverseImage](https://user-images.githubusercontent.com/74097479/101493841-94d31c00-398c-11eb-9340-548cc0daed7e.PNG)

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

## [Day-33](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-33) 
## Row with Maximum number of 1s in a Boolean Matrix.

C++ program to find the row with maximum number of 1s.

Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.

Print the index of the row with maximum number of 1s. If there is no such row, print -1.

Example:

    Input : rows = 4, columns = 4
    matrix : 0 1 1 1
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

## [Day-34](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-34) 
## Print the matrix elements in Sorted Order

C++ program to print the elements of a matrix in sorted order.

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
1. Time Complexity : O(R * C log (R*C))).
2. Space Complexity : O(R * C), since the output array is of size R*C.

## [Day-35](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-35) 
## Median of Matrix

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

## [Day-36](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-36) 
## Kth Smallest Element in a Matrix

C++ program to print the kth smallest element in the given matrix.

Given an R * C  matrix, and a positive integer k. 
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

1. Create a output array of size R * C.
2. Traverse the matrix from start to end and insert all the elements in output array.
3. Sort the output array.
4. Print the (k - 1)th element in the sorted output matrix. (0 based indexing)

Complexity Analysis :

1. Time Complexity : O(R * C log (R*C))).
2. Space Complexity : O(R * C), since the output array is of size R*C.

## [Day-37](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-37) 
## Common Elements in all the rows of a Matrix

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

## [Day-38](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-38) 
## Rotate a square matrix by 90 degrees in clockwise direction 

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

## [Day-39](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-39) 
## Find a specific pair in Matrix

Given an n x n matrix mat[n][n] of integers, find the maximum value of mat(c, d) – mat(a, b) over all choices of indexes such that both c > a and d > b.

```
Example:
    Input:
            mat[N][N] = {{ 1, 2, -1, -4, -20 },
                        { -8, -3, 4, 2, 1 }, 
                        { 3, 8, 6, 1, 3 },
                        { -4, -1, 1, 7, -6 },
                        { 0, -4, 10, -5, 1 }};
    Output: 18
    Explanation: The maximum value is 18 as mat[4][2] - mat[1][0] = 18 has maximum difference.
```
Algorithm : 

1. Find max value of matrix and store in maxVal variable and keep track of its location with maxRow and maxCol variables
2. Then find min value in matrix[maxRow][maxCol] and store in minVal variable
3. return maxVal - minVal

## [Day-40](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-40) 
## Max rectangle

Given a binary matrix. Find the maximum area of a rectangle formed only of 1s in the given matrix.

```
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
```
Algorithm : 

1. Run a loop to traverse through the rows.
2. Now If the current row is not the first row then update the row as next point...
3. If matrix[i][j] is not zero then matrix[i][j] = matrix[i-1][j] + matrix[i][j].
4. Find the maximum rectangular area under the histogram, consider the ith row as heights of bars of a histogram.
5. This can be calculated as given in this article Largest Rectangular Area in a Histogram
4. Do the previous two steps for all rows and print the maximum area of all the rows.
