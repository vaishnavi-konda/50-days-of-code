/*
Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. 
If array is already sorted then the inversion count is 0. 
If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 
Example 1:

    Input: N = 5, arr[] = {2, 4, 1, 3, 5}
    Output: 3
    Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).

Example 2:

    Input: N = 5, arr[] = {2, 3, 4, 5, 6}
    Output: 0
    Explanation: As the sequence is already sorted so there is no inversion count.

Example 3:

    Input: N = 3, arr[] = {10, 10, 10}
    Output: 0
    Explanation: As all the elements of array are same, so there is no inversion count.
*/

#include <iostream>
using namespace std;

int inversionCount(int *array, int size);

//Main function
int main()
{
    int size = 0;

    //Read the size of the array from the user
    cout << "Enter the size of array : ";
    cin >> size;
    
    //Declare an array of given size
    int array[size];

    //Initialize the array elements
    cout << "Enter array elements\n";
    for (int index = 0; index < size; index++)
    {
        cin >> array[index];
    }

    //Function call
    cout << "Inversion Count = " << inversionCount(array, size) << endl;

    return 0;
}

//Function to count the number of inversions in an array
int inversionCount(int *array, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                count++;
            }   
        }  
    }
    return count;
}
