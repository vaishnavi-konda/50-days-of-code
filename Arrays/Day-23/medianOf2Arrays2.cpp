/*
C++ program to calculate the median of two sorted arrays of different sizes.

Example 1:

    Input: ar1[] = {-5, 3, 6, 12, 15}
            ar2[] = {-12, -10, -6, -3, 4, 10}
    Output : The median is 3.
    Explanation : The merged array is : ar3[] = {-12, -10, -6, -5 , -3, 3, 4, 6, 10, 12, 15},
                    So the median of the merged array is 3.

Example 2:

    Input: ar1[] = {2, 3, 5, 8}
            ar2[] = {10, 12, 14, 16, 18, 20}
    Output : The median is 11.
    Explanation : The merged array is : ar3[] = {2, 3, 5, 8, 10, 12, 14, 16, 18, 20}
            if the number of the elements are even, so there are two middle elements, take the average between the two : 
            (10 + 12) / 2 = 11.      

Algorithm : 
1. Create an array "arr3[]" of length (size1 + size2), if size1 and size2 are the lengths of given input arrays, say "arr1[]" and "arr2[]".
2. Simultaneously traverse through array1[] and array2[].
  Pick smaller of current elements in arr1[] and arr2[], copy this smaller element to next position in arr3[] and move ahead in arr3[] and the array whose element is picked.
3. If there are remaining elements in arr1[] or arr2[], copy them also in arr3[].
4. Find the middle index of arr3[], say "mid". mid = (len(arr3) - 1 / 2)
5. If there are odd number of elements in arr3[], then print the value of "arr3[mid]".
    If there are even number of elements in arr3[], then median is the average of two middle elements, i.e, (arr3[mid] + arr3[mid + 1]) / 2.
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void getInput(int *array, int size);
int getMedian(int array1[], int size1, int array2[], int size2);
vector<int> mergeArrays(int array1[], int size1, int array2[], int size2);


//Main function
int main()
{
    //Read the size of the array
    int size1 = 0, size2 = 0;
    cout << "Enter the sizes of 2 array:";
    cin >> size1 >> size2;

    //Create 2 arrays with given size
    int array1[size1];
    int array2[size2];

    //Initialize the array1 elements
    cout << "Enter the elements of first array\n";
    getInput(array1, size1);

    //Initialize the array2 elements
    cout << "Enter the elements of second array\n";
    getInput(array2, size2);
    
    //Function call
    cout << "Median = " << getMedian(array1, size1, array2, size2); 
}

//Function to read the array elements
void getInput(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >>  array[i];
    }
}

//Function to find the median of given 2 arrays.
int getMedian(int array1[], int size1, int array2[], int size2)
{
    //Merge the given two arrays and store it in array3
    vector<int> array3 = mergeArrays(array1, size1, array2, size2);

    int s = array3.size();

    //find the middle index of merged array
    int mid = (s) / 2;

    //return the average of 2 middle elements if the merged array has even number of elements
    if ((size1 + size2) % 2 == 0)
    {
        return (array3[mid] + array3[mid - 1]) / 2;
    }  

    //return the middle element if the merged array has odd number of elements
    return array3[mid];
}

//Function to merge the given 2 sorted arrays
vector<int> mergeArrays(int array1[], int size1, int array2[], int size2)
{
    vector<int> array3;

    int i = 0, j = 0;

    while(i < size1 && j < size2)
    {
        if (array1[i] == array2[j])
        {
            array3.push_back(array1[i]);
            i++;
            j++;
        }
        else if (array1[i] < array2[j])
        {
            array3.push_back(array1[i]);
            i++;
        }
        else
        {
            array3.push_back(array2[j]);
            j++;
        }
    }

    while (i < size1)
    {
        array3.push_back(array1[i]);
        i++;
    }
    while (j < size2)
    {
        array3.push_back(array2[j]);
        j++;
    }

    return array3;
}
