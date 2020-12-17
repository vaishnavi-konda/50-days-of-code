# [***STRINGS***](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Strings)

## [Day-31](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Strings/Day-41) 
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