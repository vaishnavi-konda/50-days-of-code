/*
C++ program to Split the binary string into substrings with equal number of 0s and 1s
Given a binary string str of length N, the task is to find the maximum count of substrings str can be divided into such that all the substrings are balanced i.e. 
they have equal number of 0s and 1s. 
If it is not possible to split str satisfying the conditions then print -1.

Example 1:
    Input: str = “0100110101”
    Output: 4
    The required substrings are “01”, “0011”, “01” and “01”.

Example 2:
    Input: str = “0111100010”
    Output: 3

Approach: 
1. Initialize max_count = 0 and traverse the string character by character and keep track of the number of 0s and 1s so far, whenever the count of 0s and 1s become equal increment the max_count. 
2. If the count of 0s and 1s in the original string is not equal then print -1 else print the value of count after the traversal of the complete string.

Time complexity : O(N) where N is the length of string
*/

#include <iostream>
#include <string>
using namespace std;

int maxSubStr(string str, int str_length);

int main() 
{ 
    string str;

    cout << "Enter a binary string : ";
    cin >> str;

    int str_length = str.length(); 
  
    cout << maxSubStr(str, str_length); 
  
    return 0; 
} 

// Function to return the count of maximum substrings str can be divided into 
int maxSubStr(string str, int str_length) 
{
    // To store the count of 0s and 1s 
    int count0 = 0, count1 = 0; 
  
    // To store the count of maximum substrings str can be divided into 
    int max_count = 0; 

    for (int i = 0; i < str_length; i++)
    { 
        if (str[i] == '0') 
        { 
            count0++; 
        } 
        else 
        { 
            count1++; 
        } 

        if (count0 == count1) 
        { 
            max_count++; 
        } 
    } 
  
    // If not possible to split the string 
    if (count0 != count1) 
    { 
        return -1; 
    } 
  
    return max_count; 
} 
  
