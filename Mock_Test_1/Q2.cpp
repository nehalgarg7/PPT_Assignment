/*
First Unique Character in a String

Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:
Input: s = "leetcode"
Output: 0

Example 2:
Input: s = "loveleetcode"
Output: 2

Example 3:
Input: s = "aabb"
Output: -1

Constraints:
a. 1 <= s.length <= 10^5
b. s consists of only lowercase English letters.
*/

#include <iostream>
#include <string.h>
using namespace std;

int nonRepeatingCharacter(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        int step_count = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if(i!=j && s[i]==s[j])
            {
                step_count++;
            }
        }
        if(step_count==0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string s;
    cout << "Enter the string\n";
    cin >> s;

    cout << nonRepeatingCharacter(s);
    return 0;
}