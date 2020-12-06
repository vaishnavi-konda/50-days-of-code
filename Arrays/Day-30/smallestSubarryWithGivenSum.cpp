/*
C++ program to find the smallest subarray with sum greater than given value.

Given an array of integers arr[] and a number x, find the smallest subarray with sum greater than the given value.

Note: There is at least one subarray with sum greater than x.

Example 1:
    Input : arr[] = {1, 4, 45, 6, 0, 19}, x  =  51
    Output: 3
    Explanation : Minimum length subarray is {4, 45, 6}

Example 2:
    Input : arr[] = {1, 10, 5, 2, 7}, x  = 9
    Output: 1
    Explanation : Minimum length subarray is {10}

Example 3:
    Input : arr[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250}, x = 280
    Output: 4
    Explanation : Minimum length subarray is {100, 1, 0, 200}

Example 4:
    Input : arr[] = {1, 2, 4}, x = 8
    Output : 0 (Not Possible)
    Explanation : Whole array sum is smaller than 8.

Algorithm : 

Idea is to use a similar approach to a sliding window. 
Start with an empty subarray, add elements to the subarray until the sum is less than x. 
If the sum is greater than x, remove elements from the start of the current subarray.

1. Create variables, i = 0, start = 0, currSum = 0, minLen = 0.
2. Traverse the array from start to end.
3. Update the variable currSum by adding current element, currSum = currSum + array[i]. Update i as, i++.
    Repeat step 3 until currSum is less than x.
4. If the currSum is greater than the given sum, update the variable currSum as currSum = currSum – array[start]. Update start = start + 1.
    If (i - start) < minLen, update minLen as minLen = (i - start).
    Repeat step 4 until currSum > sum.
*/
#include <iostream>
#include <climits>
using namespace std;

int getSmallestSubarrayLength(int array[], int size, int sum);

int main() 
{
    int size, sum;
    
    cout << "Enter the size of array : ";
    cin >> size;
    int array[size];
    
    cout << "Enter array elements : ";
    for(int i = 0 ; i < size; i++)
    {
        cin >> array[i];
    }
    
    cout << "Enter sum value :";
    cin >> sum;

    cout << getSmallestSubarrayLength(array, size, sum);
    return 0;
}

int getSmallestSubarrayLength(int array[], int size, int sum)
{
    int minLen = 0, currSum = 0;
    int start = 0, i = 0;

    while (i < size)
    {
        if (array[i] > sum)
        {
            return 1;
        }
        
        while (currSum <= sum && i < size) 
        {
            currSum += array[i];
            i++;
        }
        
        while (currSum > sum && start < size)
        {
            if (i - start < minLen)
            {
                minLen = i - start;
            }
            currSum -= array[start];
            start++;
        }        
    }    
    return minLen;
}