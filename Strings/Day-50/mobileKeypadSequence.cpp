/*
C++ program to convert a sentence into its equivalent mobile numeric keypad sequence.

Given a sentence in the form of a string, convert it into its equivalent mobile numeric keypad sequence.

                    | ABC | DEF
                 1  |  2  |  3
               _____|_____|____
                    |     |
                GHI | JKL | MNO
                 4  |  5  |  6
               _____|_____|____
                    |     |
               PQRS | TUV | WXYZ
                 7  |  8  |  9
               _____|_____|____
                    |     |    
                 *  |  0  |  #
                    |     |         

For obtaining a number, we need to press a number corresponding to that character for number of times equal to position of the character. 
For example, for character C, we press number 2 three times and accordingly.

Example 1:
    Input : GEEKSFORGEEKS
    Output : 4333355777733366677743333557777

Example 2:
    Input : HELLO WORLD
    Output : 4433555555666096667775553
*/

#include <iostream>
#include <string>
using namespace std;

string findSequence(string str);

int main() 
{ 
    string str;

    cout << "Enter a string : ";
    cin >> str;
  
    cout << findSequence(str); 
  
    return 0; 
}

string findSequence(string str)
{

    // Array to store the sequence for each character
    string keypadSeq[] = {"2","22","222", 
                        "3","33","333", 
                        "4","44","444", 
                        "5","55","555", 
                        "6","66","666", 
                        "7","77","777","7777", 
                        "8","88","888", 
                        "9","99","999","9999"
                    }; 

    string output;

    int strLength = str.length(); 
    int position;

    for (int i = 0; i < strLength; i++) 
    { 
        // Checking for space 
        if (str[i] == ' ') 
        {
            output = output + "0"; 
        }
  
        else
        { 
            // Calculating index for each character 
            position = str[i] - 'A'; 
            output = output + keypadSeq[position]; 
        } 
    } 
    
    return output;
}

