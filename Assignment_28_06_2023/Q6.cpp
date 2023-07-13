/*Question 6
Given a non-empty array of integers nums, every element appears twice except
for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only
constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int,int> count ;
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        for(auto it: count)
        {
            if(it.second == 1)
            {
                return it.first;
            }
        }
        return -1;
    }
};


int main()
{

    return 0;
}