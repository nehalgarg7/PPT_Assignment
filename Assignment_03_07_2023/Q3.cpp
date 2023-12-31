/*
Given two non-negative integers, num1 and num2 represented as string, return *the sum of* num1 *and* num2 *as a string*.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

**Example 1:**

**Input:** num1 = "11", num2 = "123"

**Output:**

"134"*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
    if (num1.size() > num2.size())
	return addStrings(num2, num1);
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    string sum;
    int carry = 0;

    for (int i=0; i < num1.size(); i++) {
    	int curDigit = (num1[i] - '0' + num2[i] - '0' + carry) % 10;
    	carry = (num1[i] - '0' + num2[i] - '0' + carry) / 10;
    	sum += to_string(curDigit);
    }
    for (int i=0; i < num2.size(); i++) {
    	int curDigit = (num2[i] - '0' + carry) % 10;
    	carry = (num2[i] - '0' + carry) / 10;
    	sum += to_string(curDigit);
    }
    if (carry == 1)
    	sum += "1";
    reverse(sum.begin(), sum.end());
    return sum;
}
    
};

int main()
{

return 0;
}