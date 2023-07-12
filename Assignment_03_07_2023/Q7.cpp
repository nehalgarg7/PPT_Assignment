/*Given two strings s and t, return true *if they are equal when both are typed into empty text editors*. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

**Example 1:**

**Input:** s = "ab#c", t = "ad#c"

**Output:** true

**Explanation:**

Both s and t become "ac"*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
         afterremovingbackspace(s);
        afterremovingbackspace(t);
        if(s == t)
        {
            return true;
        }
        return false;
    }

    void afterremovingbackspace(string& s1) {
        int size = s1.length();
        for(int i=0; i<size; i++){
            if(s1[i]=='#')
            {
                if(i==0)
                {
                s1.erase(i,1); 
                size--; 
                i--;
                }
                else
                {
                s1.erase(i-1,2); 
                size=size-2; 
                i=i-2;
                }
            }
        }
    }
};

int main()
{

    return 0;
}