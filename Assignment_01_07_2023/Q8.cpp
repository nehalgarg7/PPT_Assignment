/*Given two sparse matrices mat1 of size m x k and mat2 of size k x n, return the result of mat1 x mat2. You may assume that multiplication is always possible.*/

#include <bits/stdc++.h>
using namespace std;

int multiplication(vector<vector<int>> matrixA, vector<vector<int>> matrixB, int m, int k, int n, int i, int j)
{
    
}

int main()
{
    int m,k,n;
    cout << "Enter the size of first matrix and Second Matrix: " <<endl;
    cin >> m >> k >> n;

    vector<vector<int>> matrixA,matrixB,resultant ( m , vector<int> (n,0));

    for(int i=0;i<m;i++)
    {
        vector<int> temp;
        for(int j=0;j<k;j++)
        {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        matrixA.push_back(temp);
        temp.clear();
    }

    for(int i=0;i<k;i++)
    {
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        matrixB.push_back(temp);
        temp.clear();
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            resultant[i][j] = multiplication(matrixA,matrixB,m,k,n,i,j);
        }
    }
    return 0;
}