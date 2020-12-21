/*
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

*/
#include <iostream>
#include <string>
using namespace std;

string countAndSay(int n);

int main()
{
    int n;
    cin >> n;

    cout << countAndSay(n);
}

string countAndSay(int n)
{
    // Base case
    if(n == 1)
    {
        return "1";
    }

    string ans = "1$";

    for (int i = 1; i < n; i++)
    {
        string temp= "";
        int count = 1;

        for (int j = 0; j < ans.length() - 1; j++)
        {
            if (ans[j] == ans[j+1])
            {
                count++;
            }
            else
            {
                temp = temp + to_string(count) + ans[j]; 
                count = 1;
            }
        }
        ans = temp + "$";
    }
    ans.pop_back();
    return ans;
}