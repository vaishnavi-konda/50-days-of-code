/* 
C++ program to find longest palindrome substring in a string

Given a string S, find the longest palindromic substring in S. 
Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). 
Palindrome string: A string which reads the same backwards. 
More formally, S is palindrome if reverse(S) = S. 
Incase any palindromic substring does not exist, return the substring which occurs first ( with the least starting index ).

NOTE: Required Time Complexity O(n2).

Example:
    Input : aaaabbaa
    Output : aabbaa
    Explanation : The longest palindrome string present in the given string is "aabbaa".
*/
#include <iostream>
#include <string.h>
using namespace std;

void longestPalindromeSubString(string str);

int main() 
{
    string str;
    cin >> str;

    longestPalindromeSubString(str);
    return 0;
}

// Function to find longest palindrome substring in a string
void longestPalindromeSubString(string str) 
{
    int strLen = str.length(); // specifying string length

    // specifying a boolean table to keep track of equal elements
    bool table[strLen][strLen];

    // this function initialises every element of table with 0
    memset(table, 0, sizeof(table));

    int maxLength = 1;

    // Converting diagonal elements of table to true
    for (int i = 0; i < strLen; ++i) 
    {
        table[i][i] = true;
    }

    // check for sub-string of length 2. 
    int start = 0; 
    for (int i = 0; i < strLen - 1; ++i) 
    { 
        if (str[i] == str[i + 1]) 
        { 
            table[i][i + 1] = true; 
            start = i; 
            maxLength = 2; 
        } 
    }
    
    // Check for lengths greater than 2. k is length of substring
    for (int k = 3; k <= strLen; ++k) 
    {
        // Fix the starting index
        for (int i = 0; i < strLen - k + 1; ++i)
        {
            // Get the ending index of substring from starting index i and length k
            int j = i + k - 1;
 
            // checking for sub-string from ith index to jth index iff str[i+1] to str[j-1] is a palindrome
            if (table[i + 1][j - 1] && str[i] == str[j])
            {
                table[i][j] = true;
 
                if (k > maxLength) 
                {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
 
    cout << "Longest palindrome substring is: ";
    for (int i = start; i < start + maxLength; i++)
    {
        cout << str[i];
    }
}