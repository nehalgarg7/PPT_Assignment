/*
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase **may be** incomplete.

Given the integer n, return *the number of **complete rows** of the staircase you will build*.*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        if(n==0)
        {
            return 0;
        }
        else
        {
            int rows = 0;
            while(n>0)
            {
                rows++;
                n = n - rows;
            }
            if(n<0)
            {
                return rows-1;
            }
            else
            {
                return rows;
            }
        }
    }
};

int main()
{

return 0;
}