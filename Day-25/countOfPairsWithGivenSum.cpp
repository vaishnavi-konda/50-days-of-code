/*
C++ program to find the number of pairs in an array with given sum.

Given an array of integers, and a number ‘sum’.
Find the number of pairs of integers in the array whose sum is equal to ‘sum’.

Example 1:
    Input  :  arr[] = {1, 5, 7, -1}, sum = 6
    Output :  2
    Pairs with sum 6 are (1, 5) and (7, -1)

Example 2:
    Input  :  arr[] = {1, 5, 7, -1, 5}, sum = 6
    Output :  3
    Pairs with sum 6 are (1, 5), (7, -1) & (1, 5)         

Example 3:
    Input  :  arr[] = {1, 1, 1, 1}, sum = 2
    Output :  6
    There are 3! pairs with sum 2.

Example 4:
    Input  :  arr[] = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1}, sum = 11
    Output :  9

Algorithm :
A simple solution is be traverse each element and check if there’s another number in the array which can be added to it to give sum.
But the time complexity is O(n^2).

Another efficient approach :
1. Create a map to store frequency of each number in the array. (Single traversal is required)
2. In the next traversal, for every element check if it can be combined with any other element (other than itself!) to give the desired sum. 
    Increment the counter accordingly.
3. After completion of second traversal, we’d have twice the required value stored in counter because every pair is counted two times. 
    Hence divide twice_count by 2 and return.

Here time complexity is O(n).
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int getPairsCount(int array[], int size);

int main()
{
    int size = 0, sum = 0;

    cout << "Enter the size of array:";
    cin >> size;

    int array[size];

    cout << "Enter array elements\n";
    for (int index = 0; index < size; index++)
    {
        cin >> array[index];
    }

    cout << "Enter sum value : ";
    cin >> sum;

    cout << getPairsCount(array, size, sum);
}

// Function returns number of pairs in array with sum equal to 'sum'
int getPairsCount(int array[], int size, int sum)
{
    unordered_map<int, int> freq;

    int twice_count = 0;

    // Store counts of all elements in map 'freq' 
    for (int i = 0; i < size; i++)
    {
        freq[array[i]]++;
    }

    // iterate through each element and increment the twice_count (Notice that every pair is counted twice)
    for (int i = 0; i < size; i++)
    {
        twice_count += freq[sum - array[i]];
        
        /* if (arr[i], arr[i]) pair satisfies the condition, then we need to ensure that the twice_count is 
        decreased by one such that the (arr[i], arr[i]) pair is not considered */
        if (sum - array[i] == array[i])
        {
            twice_count--;
        }
        
    }

    // return the half of twice_count 
    return twice_count / 2;
}
