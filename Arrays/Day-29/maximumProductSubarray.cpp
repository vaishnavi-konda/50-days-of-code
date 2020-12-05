/*
C++ program to find the product of the subarray with maximum product.  

Given an array Arr that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.

Example 1:
    Input : N = 5, arr[] = { 6, -3, -10, 0, 2 }
    Output: 180
    Explanation: Subarray with maximum product is  6, -3, -10 which gives product as 180.

Example 2:
    Input : N = 6, arr[] = { 2, 3, 4, 5, -1, 0 }
    Output: 120
    Explanation: Subarray with maximum product is 2, 3, 4, 5 which gives product as 120.

Example 3:
    Input: N = 5, arr[] = { -2, -3, 0, -2, -40 }
    Output: 80 
    Explanation : Subarray with maximum product is -2, -40 which gives product as 80.

Algorithm :
1. Traverse array from left to right keeping two variables minVal and maxVal which represents the minimum and maximum product value till the ith index of the array.
2. If the ith element of the array is negative that means now the values of minVal and maxVal will be swapped. 
    As the value of maxVal will become minimum by multiplying it with a negative number.
3. Create a variable maxProduct which stores the maximum of maxVal.
4. Update maxProduct for every iteration.
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int getMaxProduct (int array[], int n);

int main() 
{
    int n, k;
    
    cout << "Enter the size of array : ";
    cin >> n;
    int array[n];
    
    cout << "Enter array elements : ";
    for(int i = 0 ; i < n; i++)
    {
        cin >> array[i];
    }
    
    cout << getMaxProduct(array, n);
}

int getMaxProduct (int array[], int n)
{
    int maxVal = array[0], minVal = array[0];
    int maxProduct = array[0];

    for (int i = 1; i < n; i++)
    {
        if (array[i] < 0)
        {
            swap(maxVal, minVal);
        }
        
        maxVal = max(array[i], maxVal * array[i]);
        minVal = min(array[i], minVal * array[i]);

        maxProduct = max(maxProduct, maxVal);
    }
    
    return maxProduct;
}