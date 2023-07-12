/*
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

**Example 1:**

**Input:** s = "Let's take LeetCode contest"

**Output:** "s'teL ekat edoCteeL tsetnoc"*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        s = trim(s);
        vector<string> words;
        string temp_word = "";
        string result="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                words.push_back(temp_word);
                temp_word="";
            }
            else
            {
                temp_word += s[i];
            }
        }

        words.push_back(temp_word);
        for(int i=0;i<words.size();i++)
        {
            reverse(words[i].begin(),words[i].end());
            result+=words[i];
            result+=' ';
        }
        result.erase(result.length()-1,1);
        return result;
    }

    string trim(string s)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                s.erase(i,1);
            }
            else
            {
                break;
            }
        }

        for(int i=s.length()-1;i>=0;i++)
        {
            if(s[i]==' ')
            {
                s.erase(i,1);
            }
            else
            {
                break;
            }
        }
        return s;
    }
};

int main()
{

return 0;
}