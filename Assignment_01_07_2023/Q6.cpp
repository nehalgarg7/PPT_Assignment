/*An integer array original is transformed into a **doubled** array changed by appending **twice the value** of every element in original, and then randomly **shuffling** the resulting array.

Given an array changed, return original *if* changed *is a **doubled** array. If* changed *is not a **doubled** array, return an empty array. The elements in* original *may be returned in **any** order*.

**Example 1:**

**Input:** changed = [1,3,4,2,6,8]

**Output:** [1,3,4]

**Explanation:** One possible original array could be [1,3,4]:

- Twice the value of 1 is 1 * 2 = 2.
- Twice the value of 3 is 3 * 2 = 6.
- Twice the value of 4 is 4 * 2 = 8.

Other original arrays could be [4,3,1] or [3,1,4].*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> original;
        int counter = 0;
        int size = changed.size()/2;
        if(changed.size()%2==0)
        {
        while(counter!=size)
        {
            sort(changed.begin(),changed.end());
            int i=0;
            int smallest_number = changed[i];
            int twice = 2*smallest_number;
            int check = 0;
            for(int j=i+1;j<changed.size();j++)
            {
                if(changed[j]==twice)
                {
                    //delete it;
                    changed.erase(changed.begin()+j);
                    changed.erase(changed.begin());
                    //push smallest_number into original array
                    original.push_back(smallest_number);
                    check++;
                    break;
                }
            }
            if(check == 0)
            {
                original.clear();
                return original;
            }  
            counter++;
        }
        return original;}
        return original;
    }
};


int main()
{

return 0;
}