/*Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> >matrix (n,vector<int>(n,0));
        int row = n-1;
        int col = n-1;
        int cur = 1;
        for(int i = 0;i<(n+1)/2;++i)
        {
            for(int j = i;j<=col-i;++j)  matrix[i][j] = cur++;
            for(int j = i+1;j<=row-i ;++j)  matrix[j][col-i] = cur++;
            for(int j = col-i-1;j>=i && row-i>i;--j)  matrix[row-i][j] = cur++;
            for(int j = row-i-1;j>i && col-i>i ;--j)  matrix[j][i] = cur++;
        }
        return matrix;
    }
};

int main()
{

    return 0;
}