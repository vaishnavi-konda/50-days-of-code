/*
C++ program to solve chocolate distribution problem.

Given an array A of positive integers of size N, where each value represents number of chocolates in a packet. 
Each packet can have variable number of chocolates. 
There are M students, the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students having packet with maximum chocolates and student having packet with minimum chocolates is minimum.

Example 1:
 
    Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
    Output: Minimum Difference is 2 
    Explanation:
    We have seven packets of chocolates and we need to pick three packets for 3 students 
    If we pick 2, 3 and 4, we get the minimum difference between maximum and minimum packet sizes.

Example 2:

    Input : arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5 
    Output: Minimum Difference is 6 
    Explanation:
    The set goes like 3,4,7,9,9 and the output is 9-3 = 6

Example 3:

    Input : arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50} , m = 7 
    Output: Minimum Difference is 10 
    Explanation:
    We need to pick 7 packets. 
    We pick 40, 41, 42, 44, 48, 43 and 50 to minimize difference between maximum and minimum. 


    Approach : 
    We first sort the array arr[0..n-1], then find the subarray of size m with the minimum difference between the last and first elements.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int getMinDiff(int *array, int size, int students);

//Main function
int main()
{
    int size = 0, students = 0;

    //Read the number of array from the user
    cout << "Enter the number of array:";
    cin >> size;
    
    //Declare an array of given size
    int array[size];

    //Initialize the array elements
    cout << "Enter array elements\n";
    for (int index = 0; index < size; index++)
    {
        cin >> array[index];
    }

    //Number of students
    cout << "Enter the number of students : ";
    cin >> students;

    //Function call
    cout << "Minimum difference = " << getMinDiff(array, size, students);
}

//Function to get the minimum difference between maximum and minimum values of distribution
int getMinDiff(int *array, int size, int students)
{
    //Return if there are no chocolates or no students 
    if (size == 0 || students == 0)
    {
        return 0;
    }

    // Number of students cannot be more than number of array
    if (students < size)
    {
       return -1;
    }

    //sort the given array
    sort(array, array + size);

    // Largest number of chocolates
    int min_diff = INT_MAX;

    // Find the subarray of size 'students' such that difference between last (maximum in case of sorted) 
    // and first (minimum in case of sorted) elements of subarray is minimum.
    for (int i = 0; i + students - 1 < size; i++)
    {
        int curr_diff = array[i + students - 1] - array[i];
        min_diff = min(min_diff, curr_diff);
    }

    return min_diff;
}
