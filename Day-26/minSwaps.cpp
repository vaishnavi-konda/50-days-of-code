/*
C++ program to find the Minimum swaps required to bring all elements less than or equal to k together.

Given an array of n positive integers and a number k. 
Find the minimum number of swaps required to bring all the numbers less than or equal to k together.

Example 1:
    Input:  arr[] = {2, 1, 5, 6, 3}, k = 3
    Output: 1

    Explanation: 
    To bring elements 2, 1, 3 together, swap element '5' with '3' such that final array will be - arr[] = {2, 1, 3, 6, 5}

Example 2:
    Input:  arr[] = {2, 7, 9, 5, 8, 7, 4}, k = 5
    Output: 2

Approach :

A simple approach is to use two pointer technique and sliding window.

1. Find count of all elements which are less than or equals to 'k'. Let’s say the count is 'count'.
2. Using two pointer technique for window of length 'count', each time keep track of how many elements in this range are greater than ‘k’. 
   Let’s say the total count is 'ans'.
3. Repeat step 2, for every window of length 'count' and take minimum of 'ans' among them. This will be the final answer.

*/
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int getMinSwaps (int array[], int size, int k);

int main() 
{
    int size, k;
    
    cout << "Enter the size of array:";
    cin >> size;
    int array[size];
    
    cout << "Enter array elements\n";
    for(int i = 0 ; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Enter k value :";
    cin >> k;
    
    cout << getMinSwaps(array, size, k)<<endl;
}

// Function to find minimum swaps required to club all elements less than or equals to k together 
int getMinSwaps (int array[], int size, int k)
{
    // Find count of elements which are less than equals to k 
    int count = 0;
    for(int i = 0 ; i < size; i++)
	{
       if (array[i] <= k)
       {
           count++;
       }
	}
	
    int ans = INT_MAX;

    // Traverse through all the windows of size 'count'
	for(int i = 0; i <= size - count; i++)
    {
        // For every window, count the number of elements greater than 'k' and store in 'temp' 
        int temp = 0;
        for(int j = i; j < i + count; j++)
        {
            if(array[j] > k)
            {
                temp++;
            }
        }

        // Update 'ans' if 'temp' is less in current window
        ans = min(ans, temp);
    }
    return ans;
}
