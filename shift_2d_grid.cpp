#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {   
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> copy_grid = grid;

    for(int z=0;z<k;z++)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                copy_grid[i][j+1] = grid[i][j];
            }
        }   

        for(int i=0;i<m-1;i++)
        {
            copy_grid[i+1][0] = grid[i][n-1];
        }

        copy_grid[0][0] = grid[m-1][n-1];

        grid = copy_grid;
    }

    return copy_grid;

}

int main()
{
    vector<vector<int>> final_grid;
    // vector<vector<int>> grid = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> grid = {{3,8,1,9},{19,7,2,5},{4,6,11,10},{12,0,21,13}};
    int k = 4;

    final_grid = shiftGrid(grid, k);

    for(int i=0;i<final_grid.size();i++)
    {
        for(int j=0;j<final_grid[0].size();j++)
        {
            cout << final_grid[i][j]<< " ";
        }
        cout << endl;
    }
    
}