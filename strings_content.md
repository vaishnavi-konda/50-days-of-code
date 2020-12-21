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

## [Day-43](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Strings/Day-43) 
## Rotations of Strings

C++ program to check if two given strings are rotations of  each other.

Given a string str1 and a string str2.
Print 1 if the str2 is the rotation of str1, print 0 if it is not the rotation.

Algorithm : 
Create a temp string and store concatenation of str1 to str2 in temp.
If str2 is a substring of temp then str1 and str2 are rotations of each other.

Example:                 
    Input : str1 = "ABACD", str2 = "CDABA"
    Output : 1
    Explanation : 
    temp = str1 + str2 = "ABACDABACD"
    Since str2 is a substring of temp, str1 and str2 are rotations of each other.

Algorithm :
1. Create a temp string which stores the concatenation of given 2 strings.
2. Check if the str2 is subset of temp string or not.
3. If str2 is subset of temp, then str2 is the rotation of str1.

## [Day-44](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Strings/Day-44) 
## Duplicate characters in a String

C++ program to print all the duplicates and their counts in the input string .

Example 1:

    Input : str = "example"
    Output : e, count = 2

Example 2:

    Input : str = "helloworld"
    Output: l, count = 3
            o, count = 2

Algorithm :
1. Create a map freq< char, int > to store the frequency of each character in the given string.
2. Traverse through the string, start from index i = 0.
3. For each character, update freq[ str[ i ]]++.
4. Next, traverse through the map, and if the value of any character is more than 1, print the corresponding key(character).

## [Day-45](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Strings/Day-45) 
## Count And Say Sequence

Given a positive integer n, return the nth term of the count-and-say sequence.

The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character. 
Then for each group, say the number of characters, then say the character. 
To convert the saying into a digit string, replace the counts with a number and concatenate every saying.

Example 1:

    Input: n = 1
    Output: "1"
    Explanation: This is the base case.

Example 2:

    Input: n = 4
    Output: "1211"
    Explanation:
    countAndSay(1) = "1"
    countAndSay(2) = say "1" = one 1 = "11"
    countAndSay(3) = say "11" = two 1's = "21"
    countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211" 