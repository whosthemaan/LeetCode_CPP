#include <vector>
#include <iostream>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row_sz = matrix.size();
    int col_sz = matrix[0].size();
    int row_index = 0, col_index = col_sz - 1;

    while(row_index < row_sz && col_index>=0)
    {
        int element = matrix[row_index][col_index];
        if(element==target)
            return true;

        if(element<target)
            row_index++;
        else
            col_index--;
    }

    return 0;
    
}

int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int target = 5;
    cout << searchMatrix(matrix, target); 
}