/*
C++ program to find all elements in an array that appear more than n/k times.

Given an array of size n, find all elements in array that appear more than n/k times. 

Example:
Input : array = {3, 1, 2, 2, 1, 2, 3, 3} and k = 4
Output : 2, 3
Explanation : The size of array is 8 (or n = 8), so we need to find all elements that appear more than 2 (or 8/4) times. 
There are two elements that appear more than two times, 2 and 3. 

Approach :
1. Sort the array.
2. Iterate through array. 
3. Keep track of count of each element and print the element if it occurs more than n/k times.
*/

#include <iostream>
#include <algorithm>
using namespace std;

void moreThanNByK (int array[], int n, int k);

int main() 
{
    int n, k;
    
    cout << "Enter the size of array:";
    cin >> n;
    int array[n];
    
    cout << "Enter array elements\n";
    for(int i = 0 ; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Enter k value :";
    cin >> k;
    
    moreThanNByK(array, n, k);
}

void moreThanNByK (int array[], int n, int k)
{
    sort(array, array + n);

    int count = 1;
    for (int i = 0; i < n - 1; i++, count = 1)
    {
        while (array[i] == array[i + 1])
        {
            count++;
            i++;
        }
         
        if (count > n / k)
        {
            cout << array[i] << endl;
        }        
    }
    
}
