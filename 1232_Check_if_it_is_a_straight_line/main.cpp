#include <iostream>
#include <vector>
using namespace std;

bool checkStraightline(vector<vector<int>> &coordinates)
{
    int dy = coordinates[1][1] - coordinates[0][1];
    int dx = coordinates[1][0] - coordinates[0][0];
    
    for(int i=2;i<coordinates.size();i++)
    {
        if(dx*(coordinates[i][1] - coordinates[0][1]) != dy*(coordinates[i][0] - coordinates[0][0]))
            return false;
    }
    return true;
}

int main()
{
    vector<vector<int>> coordinates {{0,0}, {0,1}, {0,-1}};
    cout <<checkStraightline(coordinates)<<endl;
    return 0;
}