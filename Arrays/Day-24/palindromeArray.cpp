/*
C++ program to check if all the elements in an array are palindromes.

Given a Integer array A[] of n elements.
Print 1  if all the elements of the Array are palindrome otherwise print 0.

Example 1:

    Input : arr[] = {111, 222, 333, 444, 555}
    Output : 1

Example 2:

    Input : arr[] = {121, 30, 434}
    Output : 0

Algorithm :
1. Iterate through the given array. 
2. For each element, check if it is palindrome or not.
3. If all elements are palindrome, then print 1.
   If any of the element is not palindrome, then print 0 and stop iteration.
*/

#include <iostream>
using namespace std;

int PalinArray(int array[], int size);
int isPalin(int num);

int main()
{
    int size = 0;
    cout << "Enter the size of array:";
    cin >> size;

    int array[size];

    //Initialize the array elements
    cout << "Enter array elements\n";
    for (int index = 0; index < size; index++)
    {
        cin >> array[index];
    }

    //Function call
    cout << PalinArray(array, size);
}

//Function returns 1 if all the array elements are palindrome, otherwise return 0
int PalinArray(int array[], int size)
{  
    for (int i = 0; i < size; i++)
    {
        if (isPalin(array[i]) == 0)
        {
            return 0;
        }
    }
    return 1;
}

//Function to check whether a number is palindrome or not
int isPalin(int num)
{
    int temp = num, reverse = 0;

    while(temp > 0)
    {
        int remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    
    return (num == reverse);
}