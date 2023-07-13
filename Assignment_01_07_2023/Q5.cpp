/*The **product sum** of two equal-length arrays a and b is equal to the sum of a[i] * b[i] for all 0 <= i < a.length (**0-indexed**).

- For example, if a = [1,2,3,4] and b = [5,2,3,1], the **product sum** would be 1*5 + 2*2 + 3*3 + 4*1 = 22.

Given two arrays nums1 and nums2 of length n, return *the **minimum product sum** if you are allowed to **rearrange** the **order** of the elements in* nums1.

**Example 1:**

**Input:** nums1 = [5,3,4,2], nums2 = [4,2,2,5]

**Output:** 40

**Explanation:**

We can rearrange nums1 to become [3,5,4,2]. The product sum of [3,5,4,2] and [4,2,2,5] is 3*4 + 5*2 + 4*2 + 2*5 = 40.*/

#include <bits/stdc++.h>
using namespace std;

void insertion(vector<int>& num, int size)
{
    for(int i=0; i<size; i++)
    {
        int a ;
        cin >> a;
        num.push_back(a);
    }
}

int minimumsum(vector<int> num1, vector<int> num2, int size1, int size2)
{
    sort(num1.begin(),num1.end(),greater<int>());
    sort(num2.begin(),num2.end());

    int sum = 0;
    for(int i=0; i<size1; i++)
    {
        sum += num1[i]*num2[i];
    }
    return sum;
}

int main()
{
    int size1 , size2;
    cout << "Enter the size of array1: and array2: "<<endl;
    cin >> size1 >>size2;

    vector<int> num1, num2;
    cout << "Enter array1:" << endl;
    insertion(num1, size1);

    cout << "Enter array2:" << endl;
    insertion(num2, size2);

    cout << "Result: " << minimumsum(num1, num2, size1, size2) << endl;
    return 0;
}