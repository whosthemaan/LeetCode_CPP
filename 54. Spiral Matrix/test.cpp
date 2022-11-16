#include <iostream>
#include <vector>

using namespace std;


vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    
    int r_start = 0;
    int r_end = row - 1;
    int c_start = 0;
    int c_end = col - 1;
    
    // total = row*col;
    
    row = r_start;
    for(int c = c_start;c<c_end;c++)
    {
        cout << matrix[row,c];
    }
    
    r_start += 1;
    col = c_end;
    for(int r = r_start;r<r_end;r++)
    {
        cout << matrix[r,col];
    }
    
    c_end -= 1;
    row = r_end;
    for(int c = c_end;c>=c_start;c++)
    {
        cout << matrix[row,c];
    }
    
    r_end -= 1;
    col = c_start;
    for(int r = r_end;r<r_start;r++)
    {
        cout << matrix[r,col];
    }
