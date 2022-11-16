#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    vector<vector<int>> emp;
    vector<vector<int>> a(m, vector<int> (n, 0));
    int sz = original.size();

    if(sz!=m*n)
        return emp;

    int counter = 0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j] = original[counter];
            counter++;
        }
    }

    return a;
}

int main()
{
    vector<vector<int>> final;

    // vector<int> original = {1,2,3,4,5};
    // vector<int> original = {1,2,3};
    vector<int> original = {1,2};

    int m = 1;
    int n = 1;

    final = construct2DArray(original, m, n);

    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout << final[i][j] << " ";
    //     }
    //     cout << endl;
    // }

}