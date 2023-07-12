/*
Given a string num which represents an integer, return true *if* num *is a **strobogrammatic number***.

A **strobogrammatic number** is a number that looks the same when rotated 180 degrees (looked at upside down).

**Example 1:**

**Input:** num = "69"

**Output:**

true
*/

#include <bits/stdc++.h>
using namespace std;

void strobogrammatic(string s)
{
    int counter = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0' || s[i]=='1' || s[i]=='6' || s[i]=='8' || s[i]=='9')
        {
            counter++;
        }
    }

    if(counter == s.length()) { cout << "true";}
    else {cout << "false";}
}

int main()
{
    string s;
    cin >> s;

    strobogrammatic(s);
    return 0;
}   