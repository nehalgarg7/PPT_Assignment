/*Given a binary array nums, return *the maximum length of a contiguous subarray with an equal number of* 0 *and* 1.

**Example 1:**

**Input:** nums = [0,1]

**Output:** 2

**Explanation:**

[0, 1] is the longest contiguous subarray with an equal number of 0 and 1.*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int max_length = 0;
        for(int i=0;i<nums.size();i++)
        {
            int zeros = 0, ones = 0;
            for(int j=i; j<nums.size(); j++)
            {
                if(nums[j]==0)
                {
                    zeros++;
                }
                else
                {
                    ones++;
                }

                if(zeros==ones)
                {
                    max_length = max(max_length, j-i+1);
                }
            }
        }
        return max_length;
    }
};

int main()
{

return 0;
}