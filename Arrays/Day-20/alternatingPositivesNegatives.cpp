/*
C++ program to rearrange an array in alternating positive and negative items with O(1) extra space.

Given an array of positive and negative numbers, arrange them in an alternate fashion such that every positive number is followed by negative and vice-versa.
Number of positive and negative numbers need not be equal. 
If there are more positive numbers they appear at the end of the array. 
If there are more negative numbers, they too appear in the end of the array.

Example 1 :

    Input:  arr[] = {1, 2, 3, -4, -1, 4}
    Output: arr[] = {-4, 1, -1, 2, 3, 4}

Example 2 :

    Input:  arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
    output: arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0} 

*/
#include <iostream>
using namespace std;

void rearrange(int array[], int size);
int nextNegative(int array[], int size, int index);
int nextPositive(int array[], int size, int index);
void swap(int *a, int *b);
void printArray(int *array, int size);

int main()
{
    int size = 0;

    //Read the size of the array from the user
    cout << "Enter the size of array:";
    cin >> size;
    
    //Declare an array of given size
    int array[size];

    //Initialize the array elements
    cout << "Enter array elements\n";
    for (int index = 0; index < size; index++)
    {
        cin >> array[index];
    }

    cout << "Given array is \n"; 
    printArray(array, size);

    //Function call
    rearrange(array, size);

    cout << "Rearranged array is \n"; 
    printArray(array, size);
    return 0;
}

//Function to rearrange array in alternaton positives and negatives.
void rearrange(int array[], int size)
{
    //Traverse through array
    for (int i = 0; i < size; i++)
    {
        //If a positive element is present in an even position, the find the index of next occuring negative element and swap them.
        //If there are no more negative elements in the array, then return 
        if (i % 2 == 0 && array[i] >= 0)
        {
            int x = nextNegative(array, size, i + 1);
            if (x == -1)
            {
                return;
            }
            swap(&array[i], &array[x]);
        }

        //If a negative element is present in an odd position, the find the index of next occuring positive element and swap them.
        //If there are no more positive elements in the array, then return 
        else if(i % 2 != 0 && array[i] < 0)
        {
            int x = nextPositive(array, size, i + 1);
            if (x == -1)
            {
                return;
            }
            swap(&array[i], &array[x]);
        }
        
    }
    return;
}

//Function to find the index of next occuring negative element
int nextNegative(int array[], int size, int start)
{
    for (int i = start; i < size; i++)
    {
        if (array[i] < 0)
        {
            return i;
        }
        
    }
    return -1;
}

//Function to find the index of next occuring positive element
int nextPositive(int array[], int size, int start)
{
    for (int i = start; i < size; i++)
    {
        if (array[i] > 0)
        {
            return i;
        }
        
    }
    return -1;
}

//Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Function to print the array
void printArray(int *array, int size)
{
    cout << "Array elements are: ";
    for (int index = 0; index < size; index++)
    {
        cout << array[index] << "\t";
    }
    cout << endl;
    return;
}