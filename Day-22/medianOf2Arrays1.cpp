/*
C++ program to calculate the median of two sorted arrays of same size.

There are 2 sorted arrays A and B of size n each. 
Write an algorithm to find the median of the array obtained after merging the above 2 arrays(i.e. array of length 2n).

Example 1: 

    Input :
        ar1[] = {1, 12, 15, 26, 38}
        ar2[] = {2, 13, 17, 30, 45}
    Output : 16
    Explanation : Both arrays after merging  {1, 2, 12, 13, 15, 17, 26, 30, 38, 45}
                  The median is (15+17)/2 = 16

Example 2:

    Input :
        ar1[] = {1, 2, 3, 6}
        ar2[] = {4, 6, 8, 10}
    Output : 5
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void getInput(int *array, int size);
int getMedian1(int array1[], int array2[], int size);
vector<int> mergeArrays(int array1[], int array2[], int size);
int getMedian2(int array1[], int array2[], int size);

//Main function
int main()
{
    //Read the size of the array
    int size = 0;
    cout << "Enter the size of array:";
    cin >> size;

    //Create 2 arrays with given size
    int array1[size];
    int array2[size];

    //Initialize the array1 elements
    cout << "Enter the elements of first array\n";
    getInput(array1, size);

    //Initialize the array2 elements
    cout << "Enter the elements of second array\n";
    getInput(array2, size);
    
    //Function call
    cout << "Median = " << getMedian1(array1, array2, size); 
    cout << "Median = " << getMedian2(array1, array2, size); 
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

//Method 1
//Time complexity is O(n)
//Space complexity is O(n)
int getMedian1(int array1[], int array2[], int size)
{
    //Merge the given two arrays and store it in array3
    vector<int> array3 = mergeArrays(array1, array2, size);

    int s = array3.size();

    //find the middle index of merged array
    int mid = (s - 1) / 2;

    //return the average of 2 middle elements
    return (array3[mid] + array3[mid + 1]) / 2;
}

//Function to merge the given 2 sorted arrays
vector<int> mergeArrays(int array1[], int array2[], int size)
{
    vector<int> array3;

    int i = 0, j = 0;

    while(i < size && j < size)
    {
        if (array1[i] == array2[j])
        {
            array3.push_back(array1[i]);
            array3.push_back(array2[j]);
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

    while (i < size)
    {
        array3.push_back(array1[i]);
        i++;
    }
    while (j < size)
    {
        array3.push_back(array2[j]);
        j++;
    }
    return array3;
}

//Method 2 (Same as method 1 but instead of storing the merged array, we can keep track of middle element using count)
//Time complexity is O(n)
//Space complexity is O(1)
int getMedian2(int array1[], int array2[], int size)
{
    int m1 = -1, m2 = -1;
    
    int i = 0, j = 0, count = 0;
    while (count <= size)
    {
        if (i == size)
        {
            m1 = m2;
            m2 = array2[0];
            break;
        }
        
        else if (j == size)
        {
            m1 = m2;
            m2 = array1[0];
            break;
        }
        
        if (array1[i] <= array2[j])
        {
            m1 = m2;
            m2 = array1[i];
            i++;
        }
        else
        {
            m1 = m2;
            m2 = array2[j];
            j++;
        }
        count++;
    }
    return (m1 + m2) / 2;
}
