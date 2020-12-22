/*
C++ Program to Check if a string is a valid shuffle of two distinct strings.

Example 1:

    Input : string1 = "XY", string2 = "12",
            result = "1X2Y" or result = "X12Y" or result = "12XY" or result = "XY12"
    Output : 1 

Example 2:

    Input : string1 = "XY",string2 = "12"
            result = "Y12X"
    Output : 0
    This is because Y12X has altered the order of string XY. Here, Y is used before X. 
    Hence, to be a valid shuffle, the order of string should be maintained.

*/
#include <iostream>
#include <string.h>
using namespace std;

bool isValidShuffle(string string1, string string2, string result);

int main()
{
    string string1, string2, result;
    cin >> string1 >> string2 >> result;

    cout << isValidShuffle(string1, string2, result);
}

// Function to check if result string is valid shuffle of string1, string2
bool isValidShuffle(string string1, string string2, string result)
{
    // check length of result is same as sum of result of string1 and string2
    if (string1.length() + string1.length() != result.length())
    {
        return false;
    }

    // variables to track each character of 3 strings
    int i = 0, j = 0, k = 0;
    int lenOfResult = result.length();

    // iterate through all characters of result
    while (k < lenOfResult)
    {
        // check if first character of result matches with first character of string1
        if (string1[i] == result[k])
        {
            i++;
        }

        // check if first character of result matches the first character of second string
        else if (string2[j] == result[k])
        {
            j++;
        }

        // if the character doesn't match
        else
        {
            return false;
        }
        k++;
    }

    // after accessing all characters of result
    // if either string1 or string2 has some characters left
    if (i < string1.length() || j < string2.length())
    {
        return false;
    }
    return true;
}
