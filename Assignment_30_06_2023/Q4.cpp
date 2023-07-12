/*
Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*

- answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
- answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

**Note** that the integers in the lists may be returned in **any** order.

**Example 1:**

**Input:** nums1 = [1,2,3], nums2 = [2,4,6]

**Output:** [[1,3],[4,6]]

**Explanation:**

For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].

For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    vector<vector<int>> result;
      vector<int> temp;
      for(int i=0; i<nums1.size(); i++)
      {
          int check = 0;
          for(int j=0; j<nums2.size(); j++)
          {
            if(nums1[i]==nums2[j])
            {
              check++;
              break;
            }
          }
          if(check==0)
          {
          temp.push_back(nums1[i]);
          }
      }

      if(temp.size()>1)
      {
        for(int i=0; i<temp.size()-1;i++)
      {
        if(temp[i]==temp[i+1])
        {
          temp.erase(temp.begin()+i);
        }
      }
      }
      result.push_back(temp);

      vector<int> temp1;
      for(int i=0; i<nums2.size(); i++)
      {
          int check = 0;
          for(int j=0; j<nums1.size(); j++)
          {
            if(nums2[i]==nums1[j])
            {
              check++;
              break;
            }
          }
          if(check==0)
          {
          temp1.push_back(nums2[i]);
          }
      }
      if(temp1.size()>1)
      {
        for(int i=0; i<temp1.size()-1;i++)
      {
        if(temp1[i]==temp1[i+1])
        {
          temp1.erase(temp1.begin()+i);
        }
      }
      }
      result.push_back(temp1);

      return result;
    }
};

int main()
{

return 0;
}