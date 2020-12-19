/*
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
*/
#include <iostream>
#include <string>
using namespace std;

bool isRotation(string str1 ,string str2);

int main()
{
    string str1, str2;

    cout << "Enter the strings : ";
    cin >> str1 >> str2;

    cout << isRotation(str1, str2);
    return 0;
}

//Function checks if passed strings (str1 and str2) are rotations of each other
bool isRotation(string str1 ,string str2)
{
    // Check if sizes of two strings are same
    if (str1.length() != str2.length()) 
    {
        return 0; 
    }

    string temp = str1.append(str1);

    return temp.find(str2);

}
