/*Given a sorted array of distinct integers and a target value, return the index if the
target is found. If not, return the index where it would be if it were inserted in
order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0 , high =nums.size()-1;
        int k = -1;
        int key = target;
        while(low<=high)
        {
            int mid= (low+high)/2;
            if(nums[mid]==key)
            {
                k = mid;
                return k;
            }
            else if (nums[mid]>key)
            {
                high=mid-1;
            }
            else
            {
                low =mid+1;  
            }
        }
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        k=-1;low=0;high=nums.size()-1;
        while(low<=high)
        {
            int mid= (low+high)/2;
            if(nums[mid]==key)
            {
                k = mid;
                return k;
            }
            else if (nums[mid]>key)
            {
                high=mid-1;
            }
            else
            {
                low =mid+1;  
            }
        }
        return 0;
    }
};

int main()
{

return 0;
}