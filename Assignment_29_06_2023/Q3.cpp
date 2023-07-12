/*
Given a 2D integer array matrix, return *the **transpose** of* matrix.

The **transpose** of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

**Example 1:**

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]

Output: [[1,4,7],[2,5,8],[3,6,9]]
*/


#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>transposeMatrix;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<m; i++)
        {
            vector<int> v;
            for(int j=0; j<n; j++)
            {
               v.push_back(matrix[j][i]); 
            }
            transposeMatrix.push_back(v);
        }
        return transposeMatrix;
    }
};



int main()
{

return 0;
}