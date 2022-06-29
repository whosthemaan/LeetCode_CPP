#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts)
{
    int maximum {}, sum{};
    for(vector<int> x:accounts)
    {
        for(int y:x)
        {
            sum += y;
        }
        maximum = max(sum, maximum);
        sum = 0;
    }
    return maximum;
}

int main()
{
    vector<vector<int>> accounts {{1,2,3}, {3,2,1}};
    cout << maximumWealth(accounts);
    return 0;
}