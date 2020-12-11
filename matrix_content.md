# [***MATRIX or 2 DIMENSIONAL ARRAYS***](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix)

### [Day-31](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-31) 
### Search for an element in a Matrix

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

### [Day-32](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-32) 
### Spirally Traversing a Matrix

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

### [Day-33](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-33) 
### Row with Maximum number of 1s in a Boolean Matrix.

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

### [Day-34](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Matrix/Day-34) 
### Print the matrix elements in Sorted Order

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

