/*

Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.

If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.

**Example 1:**

**Input:** s = "abcdefg", k = 2

**Output:**

"bacdfeg"*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        string finalresult = "";
        if(s.length()<k)
        {
            reverse(s.begin(),s.end());
            return s;
        }
        else
        { 
        for(int i=0; i<s.length(); i=i+(2*k))
        {
            if(s.length()-i<k)
            {
                string half = s.substr(i,k);
                reverse(half.begin(),half.end());
                finalresult += half;
            }
            else if(s.length()-i>=k)
            {
                string half = s.substr(i,k);
                string remain = s.substr(k+i,k);
                reverse(half.begin(),half.end());
                string result = half + remain;
                finalresult += result;
            }
        }
        return finalresult;
        }
    }
};

int main()
{

return 0;
}