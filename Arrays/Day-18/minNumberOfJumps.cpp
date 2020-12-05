/*
C++ program to find minimum number of jumps required to reach the end of array.

Given an array of integers where each element represents the number of steps that can be made forward from that element. 
Write a function to return the minimum number of jumps to reach the end of the array (starting from the first element).
If an element is 0, then cannot move through that element.

Example 1:

    Input  : array[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
    Output : 3 
    Explanation: (1 -> 3 -> 9 -> 9)

Example-2:
    Input   : array[] = {1, 4, 3, 2, 6, 7}
    Output  : 2
*/

#include <iostream>
using namespace std;

int getMinJumps(int *array, int size);

//Main function
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

    //Function call
    cout << "Minimum number of jumps = " << getMinJumps(array, size);
}

//Function to find the minimum number of jumps to reach the end of the array
int getMinJumps(int *array, int size)
{
    int jump = 0;

    //Base case : If the source and destination are the same
    if (size == 1)
    {
        return 1;
    }
    
    for (int i = 0; i < size - 1; i += array[i])
    {
        jump++;
    }
    
    return jump;
}
