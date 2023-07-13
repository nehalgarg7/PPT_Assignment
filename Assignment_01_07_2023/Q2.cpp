/*You are given an m x n integer matrix matrix with the following two properties:

- Each row is sorted in non-decreasing order.
- The first integer of each row is greater than the last integer of the previous row.

Given an integer target, return true *if* target *is in* matrix *or* false *otherwise*.

You must write a solution in O(log(m * n)) time complexity.*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         // number of rows
        int m = matrix.size();
        // base case condition
        if(m == 0){
            return false;
        }

        // number of columns
        int n = matrix[0].size();

        // binary search algorithm
        int low = 0, high = m * n - 1;
        int midIdx, midElement, rowIdx, colIdx;
        while(low <= high){
            midIdx = low + (high - low)/2;

            rowIdx = midIdx / n;
            colIdx = midIdx % n;
            
            midElement = matrix[rowIdx][colIdx];

            // condition 1 - match
            if(target == midElement){
                return true;
            }

             
            else{
                if(target < midElement){
                    // condition 2 - left side
                    high = midIdx - 1;
                }
                else{
                    // condition 3 - right side
                    low = midIdx + 1;
                }
            }
        }

        return false;
    }
};

int main()
{

return 0;
}