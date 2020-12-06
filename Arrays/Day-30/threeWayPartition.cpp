/*
C++ program to partition the array according the given range.

Given an array of size N and a range [lowerLimit, upperLimit]. 
The task is to partition the array around the range such that array is divided into three parts.
1) All elements smaller than 'lowerLimit' come first.
2) All elements in range 'lowerLimit' to 'upperLimit' come next.
3) All elements greater than 'upperLimit' appear in the end.

Print the modified array.

Note : The individual elements of three sets can appear in any order. 

Example 1:
    Input: arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32}  
            lowerLimit = 14, upperLimit = 20
    Output: arr[] = {1, 5, 4, 2, 1, 3, 14, 20, 20, 98, 87, 32, 54}

Example 2:
    Input: arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32}  
        lowerLimit = 20, upperLimit = 20       
    Output: arr[] = {1, 14, 5, 4, 2, 1, 3, 20, 20, 98, 87, 32, 54} 

Algorithm : 

Brute Force solution : 
A simple solution is to sort the array. 
This solution does a lot of extra rearrangements and requires O(n Log n) time.

Efficient solution : 
Requires O(n) time.
An efficient solution is based on Dutch National Flag Algorithm.

1. Keep 3 indices low = 0, high = N - 1.
2. Let loop counter be i. Traverse through the array until i less than high. 
3. If array[i] is less than lowerLimit, swap it with array[low]. Update low = low + 1, i = i + 1. 
    (Moving the element to the beginning of array)
4. If array[i] is greater than upperLimit, swap it with array[high]. Update high = high + 1.
    (Moving the element to the end of array).
    Here we don't update i because the swapped element is not processed.
5. If array[i] is neither less than 'lowerLimit' nor greater than 'upperLimit', then update i = i + 1.
    It means array[i] lies in between 'lowerLimit' and 'upperLimit'.

*/

#include <iostream>
#include <vector>
using namespace std;

void threeWayPartition(vector<int> array, int lowerLimit, int upperLimit);

int main() 
{
    int size, lowerLimit, upperLimit;
    
    cout << "Enter the size of array : ";
    cin >> size;
    vector<int> array;
    
    cout << "Enter array elements : ";
    for(int i = 0 ; i < size; i++)
    {
        int x;
        cin >> x; 
        array.push_back(x);
    }

    cout << "Enter lower and upper limits : ";
    cin >> lowerLimit >> upperLimit;

    threeWayPartition(array, lowerLimit, upperLimit);
}


void threeWayPartition(vector<int> array, int lowerLimit, int upperLimit)
{
    int low = 0, high = array.size() - 1;

    for (int i = 0; i <= high;)
    {
        if (array[i] < lowerLimit)
        {
            swap(array[i], array[low]);
            low++;
            i++;
        }
        else if(array[i] > upperLimit)
        {
            swap(array[i], array[high]);
            high--;
        }
        else
        {
            i++;
        }
        
    }
    
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << "   ";
    }
    cout << endl;
}
