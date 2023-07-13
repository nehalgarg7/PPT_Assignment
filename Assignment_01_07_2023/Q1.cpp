/*A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:

- s[i] == 'I' if perm[i] < perm[i + 1], and
- s[i] == 'D' if perm[i] > perm[i + 1].

Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return **any of them**.

**Example 1:**

**Input:** s = "IDID"

**Output:**

[0,4,1,3,2]*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> diStringMatch(string s)
    {
        vector<int> ans;
        int min = 0;
        int max = s.length();

        for (const char c : s)
            ans.push_back(c == 'I' ? min++ : max--);
        ans.push_back(min);

        return ans;
    }
};

int main()
{

    return 0;
}