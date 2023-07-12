/*You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int sum = 0;
        float slope, checkslope;
        if((coordinates[coordinates.size()-1][0]-coordinates[0][0])==0)
        {
            slope = INT_MAX;
        }
        else
        {
             slope = (coordinates[coordinates.size()-1][1]-coordinates[0][1])/(coordinates[coordinates.size()-1][0]-coordinates[0][0]);
        }
        for(int i=0;i<coordinates.size()-1;i++)
        {
            if((coordinates[i+1][0]-coordinates[i][0])==0)
            {
                checkslope = INT_MAX;
            }
            else
            {
                checkslope = (coordinates[i+1][1]-coordinates[i][1])/(coordinates[i+1][0]-coordinates[i][0]);
            }
            if(slope==checkslope)
            {
                sum++;
            }
            else
            {
                return false;
            }
        }
        if(sum == coordinates.size()-1)
        {
            return true;
        }
        return false;
    }
};

int main()
{

return 0;
}