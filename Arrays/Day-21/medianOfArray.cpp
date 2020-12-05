/*
C++ program to calculate the median of an array.

Given an array arr[] of N integers, calculate the median.

Example 1:

    Input: N = 5
    arr[] = 90 100 78 89 67
    Output: 89
    Explanation: After sorting the array middle element is the median 

Example 2:

    Input: N = 4
    arr[] = 56 67 30 79
    Output: 61
    Explanation: In case of even number of elemebts average of two middle elements is the median
*/

#include <iostream>
#include <algorithm>
using namespace std;

int getMedian(int array[], int size);

//Main function
int main()
{
    //Read the size of the array
    int size = 0;
    cout << "Enter the size of array:";
    cin >> size;

    //Create an array with given size
    int array[size];

    //Initialize the array elements
    cout << "Enter array elements\n";
    for (int index = 0; index < size; index++)
    {
        cin >> array[index];
    }

    //Function call
    cout << "Median = " << getMedian(array, size); 
}

//Function to find the getMedian of an array
int getMedian(int array[], int size)
{
    //sort the array
    sort(array, array + size);

    //find the middle element
    int mid = (size - 1) / 2;

    //if the array contains even number of elements, then return the average of 2 middle elements
    if (size % 2 == 0)
    {
        return (array[mid] + array[mid + 1]) / 2;
    }
    
    //if the array contains odd number of elements, then return the middle element
    return array[mid];
}