/*Question 5
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

Example 1:
Input: nums = [1,2,3]
Output: 6*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int maximum_product = 1, counter=0;
        for(int i=0;i<nums.size();i++)
        {
            if(counter==3) {break;}
            if(nums[i]!=0)
            {
                maximum_product *= nums[i];
                counter++;
            }
            else
            {

            }
        }
        int another_maximum_sum = nums[nums.size()-1]*nums[nums.size()-2]*nums[0];
        if(counter==3) {
            int maximum = max(maximum_product,another_maximum_sum);
            return maximum;
        }
        return 0;
    }
};

int main()
{

return 0;
}