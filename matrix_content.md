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

