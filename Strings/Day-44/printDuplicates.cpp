/*
C++ program to print all the duplicates and their counts in the input string .

Example 1:

    Input : str = "example"
    Output : e, count = 2

Example 2:

    Input : str = "helloworld"
    Output: l, count = 3
            o, count = 2

Algorithm :
1. Create a map freq<char, int> to store the frequency of each character in the given string.
2. Traverse through the string, start from index i = 0.
3. For each character, update freq[str[i]]++.
4. Next, traverse through the map, and if the value of any character is more than 1, print the corresponding key(character).
*/
#include <iostream>
#include <string>
#include <unordered_map> 
using namespace std;

void findDuplicates(string str);

int main()
{
    string str;
    cout << "Enter a string : ";
    cin >> str;

    findDuplicates(str);
    return 0;
}

//Function to find the duplicate characters in the input string
void findDuplicates(string str)
{
    unordered_map < char, int> freq;

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i]]++;
    }
    
    for (auto itr = freq.begin(); itr != freq.end(); itr++)
    {
        if (itr -> second > 1)
        {
            cout << itr -> first << ", count = " << itr -> second << endl;
        }
    }
    
    return;
}
