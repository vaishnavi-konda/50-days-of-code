# [***STRINGS***](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Strings)

## [Day-41](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Strings/Day-41) 
## Reverse a String

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

## [Day-42](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Strings/Day-42) 
## Check if a String is a Palindrome or not

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