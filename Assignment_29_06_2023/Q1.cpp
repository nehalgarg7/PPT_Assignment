/*
Given three integer arrays arr1, arr2 and arr3 **sorted** in **strictly increasing** order, return a sorted array of **only** the integers that appeared in **all** three arrays.

**Example 1:**

Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]

Output: [1,5]

**Explanation:** Only 1 and 5 appeared in the three arrays.
*/

#include <iostream>
using namespace std;

void commonInteger(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{
    int i=0, j=0, k=0;
    
    while(i<n1 && j<n2 && k<n3)
    {
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
            k++;
        }
        else
        {
            if(arr1[i]<arr2[j])
            {
                i++;
            }
            else if(arr2[j] < arr3[k])
            {
                j++;
            }
            else
            {
                k++;
            }
        }
    }
}

int main()
{
    int n1, n2, n3;
    cout << "Enter the size of arrays \n";
    cin >> n1 >> n2 >> n3;

    int arr1[n1], arr2[n2], arr3[n3];
    cout << "Enter the matrix n1" << endl;
    for(int i=0 ; i<n1 ;i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the matrix n2" << endl;
    for(int i=0 ; i<n2 ;i++)
    {
        cin >> arr2[i];
    }

    cout << "Enter the matrix n3" << endl;
    for(int i=0 ; i<n3 ;i++)
    {
        cin >> arr3[i];
    }

    cout << "Result:" ;
    commonInteger(arr1,arr2,arr3,n1,n2,n3);
    return 0;
}