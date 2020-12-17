/*
C++ program to reverse a string.

The input string is given as an array of characters char[].
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
You may assume all the characters consist of printable ascii characters.

Example 1:

    Input: ["h","e","l","l","o"]
    Output: ["o","l","l","e","h"]

Example 2:

    Input: ["H","a","n","n","a","h"]
    Output: ["h","a","n","n","a","H"]

Algorithm :
1. Create two index variables, say start = 0 and end = size(input_string) - 1.
2. Traverse the string from both ends until start <= end.
2. Swap the element at indices start and end, and update start = start + 1, end = end - 1.
*/

#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<char> &str);

int main()
{
    int size;
    cout << "Enter number of characters :";
    cin >> size;

    vector<char> str;

    for (int index = 0; index < size; index++)
    {
        cin >> str[index];
    }

    reverse(str);

    for (int index = 0; index < size; index++)
    {
        cout << str.at(index) << " ";
    }

}

void reverse(vector<char> &str)
{
    //Start from the both ends of array
    //Swap the first and last elements until all the elements are swapped
    for (int start = 0, end = str.size() - 1; start < end; start++, end--)
    {
        swap(str[start], str[end]);
    }
}