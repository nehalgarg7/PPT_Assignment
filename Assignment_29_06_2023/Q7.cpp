/*
You are given an m x n matrix M initialized with all 0's and an array of operations ops, where ops[i] = [ai, bi] means M[x][y] should be incremented by one for all 0 <= x < ai and 0 <= y < bi.

Count and return *the number of maximum integers in the matrix after performing all the operations*
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        vector<vector<int>> ans( m , vector<int> (n, 0));
        int totalops = ops.size();
        int temp = 0;
        while(temp!=totalops)
        {
            for(int i=0;i<ops[temp][0];i++)
            {
                for(int j=0; j<ops[temp][1];j++)
                {
                    ans[i][j]++;
                }
            }
            temp++;
        }
        int count = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0; j<n;j++)
            {
               if(ans[i][j]==ans[0][0])
               {
                   count++;
               }
            }
        }
        return count;
    }
};

int main()
{

    return 0;
}