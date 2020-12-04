/*
C++ program to to find a triplet in an array that sum to a given value.

Given an array A[] of N numbers and another number 'sum'.
Print the three elements in A[] whose sum is exactly x.

Example 1:
Input : array[] = {1, 4, 45, 6, 10, 8}, sum = 13
Output : The Triplet is 1, 4, 8

Example 2:
Input : array[] = {1, 2, 4, 3, 6}, sum = 10
Output : The Triplet is 1, 3, 6

*/
#include <iostream>
#include <algorithm>
using namespace std;

void findTriplet(int array[], int size, int sum);

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

    findTriplet(array, size, sum);
    return 0;
}

void findTriplet(int array[], int size, int sum)
{
    sort(array, array + size);

    for (int i = 0; i < size; i++)
    {
        int left = i, right = size - 1;

        while (left < right)
        {
            if (array[i] + array[left] + array[right] == sum)
            {
                cout << "The triplet is " << array[i] << ", " << array[left] << ", " << array[right];
                return;
            }

            else if (array[i] + array[left] + array[right] < sum)
            {
                left++;
            }
            
            else
            {
                right--;
            }
        }
    }
    cout << "There is no triplet of sum " << sum;
}