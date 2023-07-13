/*Question 6
Given an array of integers nums which is sorted in ascending order, and an integer target,
write a function to search target in nums. If target exists, then return its index. Otherwise,
return -1.

You must write an algorithm with O(log n) runtime complexity.

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4

Explanation: 9 exists in nums and its index is 4*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low<=high)
        {
            int mid= (low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if (nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low =mid+1;  
            }
        }
        return -1;
    }
};

int main()
{

    return 0;
}