/*
Given an array of positive integers.
Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, 
the consecutive numbers can be in any order.

Example 1:

    Input:
        size = 7
        array[] = {2,6,1,9,4,5,3}
    Output: 6
    Explanation: The consecutive numbers here are 1, 2, 3, 4, 5, 6. 
    These 6 numbers form the longest consecutive subsquence.

Example 2:

    Input:
        size = 7
        array[] = {1,9,3,10,4,20,2}
    Output: 4
    Explanation: 1, 2, 3, 4 is the longest consecutive subsequence.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findLongestConseqSubseq(int array[], int size);

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
        cout << "Element " << index + 1 << ": ";
        cin >> array[index];

    }

    //Function call
    cout << findLongestConseqSubseq(array, size) << endl;
        
    return 0;
}


//Function to return the length of the longest subsequene of consecutive integers
int findLongestConseqSubseq(int array[], int size)
{
  int ans = 0, count = 0; 
  
    // sort the array 
    sort(array, array + size); 
  
    vector<int> v; 
    v.push_back(array[0]); 
  
    // insert repeated elements only once in the vector 
    for (int i = 1; i < size; i++)  
    { 
        if (array[i] != array[i - 1]) 
            v.push_back(array[i]); 
    } 

    // find the maximum length by traversing the array 
    for (int i = 0; i < v.size(); i++)  
    { 
          
        // Check if the current element is equal to previous element +1 
        if (i > 0 && v[i] == v[i - 1] + 1)
        {
            count++; 
        }
        
        // reset the count 
        else
        {
            count = 1; 
        }
  
        // update the maximum 
        ans = max(ans, count); 
    } 
    return ans; 
}