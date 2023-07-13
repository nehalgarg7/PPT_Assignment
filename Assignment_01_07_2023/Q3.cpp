/*Given an array of integers arr, return *true if and only if it is a valid mountain array*.

Recall that arr is a mountain array if and only if:

- arr.length >= 3
- There exists some i with 0 < i < arr.length - 1 such that:
    - arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
    - arr[i] > arr[i + 1] > ... > arr[arr.length - 1]*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int size = arr.size(), largest_num = INT_MIN, index = -1;
        if (size < 3)
        {
            return false;
        }
        else
        {
            sort(arr.begin(), arr.end());
            largest_num = arr[size - 1];
            for (int i = 0; i < size; i++)
            {
                if (arr[i] == largest_num)
                {
                    index = i;
                }
            }
            for (int i = 0; i < index; i++)
            {
                if (arr[i] < arr[i + 1])
                {
                }
                else
                {
                    return false;
                }
            }
            for (int i = index; i < index; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                }
                else
                {
                    return false;
                }
            }
            return true;
        }
    }
};

int main()
{

    return 0;
}