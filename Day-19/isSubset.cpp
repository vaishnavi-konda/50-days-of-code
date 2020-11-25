/*
C++ program to find whether an array is subset of another array.

Given two arrays: arr1[0..m-1] of size m and arr2[0..n-1] of size n. 
Task is to check whether arr2[] is a subset of arr1[] or not. 
Both the arrays can be both unsorted or sorted. 
It may be assumed that elements in both array are distinct.

Print "Yes"(without quotes) if arr2 is subset of arr1.
Print "No"(without quotes) if arr2 is not subset of arr1.

Example 1: 

    Input : arr1[] = {11, 1, 13, 21, 3, 7}
            arr2[] = {11, 3, 7, 1} 
    Output: Yes

Example 2:

    Input : arr1[] = {1, 2, 3, 4, 5, 6}
            arr2[] = {1, 2, 4} 
    Output: Yes

Example 3:

    Input : arr1[] = {10, 5, 2, 23, 19}
            arr2[] = {19, 5, 3} 
    Output: No
*/

#include <iostream>
#include <algorithm>
using namespace std;

void getInput(int *array, int size);
bool isSubset(int array1[], int size1, int array2[], int size2);

//Main function
int main()
{
    int size1 = 0, size2 = 0;

    //Read the size of the first array
    cout << "Enter the sizes of 2 arrays:";
    cin >> size1 >> size2;

    //Create 2 arrays with given sizes
    int array1[size1];
    int array2[size2];

    //Initialize the array1 elements
    cout << "Enter the elements of first array\n";
    getInput(array1, size1);

    //Initialize the array2 elements
    cout << "Enter the elements of second array\n";
    getInput(array2, size2);
    
    //Function call
    if (isSubset(array1, size1, array2, size2))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}

//Function to read the array elements
void getInput(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >>  array[i];
    }
    return;
}

//Return 1 if arr2[] is a subset of arr1[]
bool isSubset(int array1[], int size1, int array2[], int size2)
{
    // Sort both the arrays
    sort(array1, array1 + size1);
    sort(array2, array2 + size2);
    
    int i = 0, j = 0;

    // Iterate till they donot exceed their size
    while(i < size1 && j < size2)
    {
        // If both are equal, then move both of them forward 
        if (array1[i] == array2[j])
        {
            i++;
            j++;  
        }

        // If the element is smaller then, move aheaad in the first array 
        else if (array1[i] < array2[j])
        {
            i++;
        }

        // If we donot have a element smaller or equal to the second array then break
        else if (array1[i] > array2[j])
        {
            return 0;
        }
    }

    //if second array end is reached, then it is the subset of first array
    return (j == size2);
}