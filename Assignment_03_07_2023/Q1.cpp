/*
Given two strings s and t, *determine if they are isomorphic*.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

**Example 1:**

**Input:** s = "egg", t = "add"

**Output:** true
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s1, string s2) {
        if(s1.size()!=s2.size())
    {
        return false;
    }
    else
    {
        vector<int> freq1(150,-1),freq2(150,-1);

        for(int i=0;i<s1.size();i++)
        {
            if(freq1[int(s1[i])]==freq2[int(s2[i])])
            {
                freq1[int(s1[i])]=i;
                freq2[int(s2[i])]=i;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    }
};


int main()
{

return 0;
}