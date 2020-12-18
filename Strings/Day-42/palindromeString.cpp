/*
C++ program to check whether a string is a palindrome or not.

Given a string S, print 1 if the given string is palindrome, otherwise print 0.

Example 1:

    Input: S = "abba"
    Output: 1
    Explanation: S is a palindrome

Example 2:

    Input: S = "abc" 
    Output: 0
    Explanation: S is not a palindrome

Algorithm - 1:
1. Traverse from beginning to half of the string using variable i = 0.
2. Check if first ith character and last ith character are same or not.
3. If any 2 characters are not same, return false.

Algorithm - 2:
1. First, find the reverse of the given string using two pointer technique.
2. Check if the original string and reversed string are same or not.
*/

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome1(string str);
bool isPalindrome2(string str);
string reverseString(string str);

int main()
{
    string str;
    cout << "Enter a string : ";
    cin >> str;

    cout << isPalindrome1(str) << endl;
    cout << isPalindrome2(str) << endl;
}

bool isPalindrome1(string str)
{   
    //check if first ith and last ith characters are same or not
    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[str.size()- i - 1])
        {
            return false;
        }    
    }
    return true;  
}

bool isPalindrome2(string str)
{
    string rev = reverseString(str);
    return (rev == str);
}

string reverseString(string str)
{
    //Start from the both ends of array
    //Swap the first and last elements until all the elements are swapped
    for (int start = 0, end = str.size() - 1; start < end; start++, end--)
    {
        swap(str[start], str[end]);
    }

    return str;
}