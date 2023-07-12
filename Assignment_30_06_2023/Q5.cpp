/*
Given two integer arrays arr1 and arr2, and the integer d, *return the distance value between the two arrays*.

The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.

**Example 1:**

**Input:** arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2

**Output:** 2*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1 = arr1.size(), n2 = arr2.size(),result=0;
        for(int i=0;i<n1;i++)
        {
            int count = 0;
            for(int j=0;j<n2;j++)
            {
                int total = arr1[i]-arr2[j];
                if(total<=0) {total = -total;}
                if(total>d) {count++;}
            }
            if(count==n2) {result++;}
        }
        return result;
    }
};

int main()
{

return 0;
}