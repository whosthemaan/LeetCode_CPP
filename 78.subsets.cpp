#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    //base case
    if(index>=nums.size())
    {
        ans.push_back(output);
        return;
    }

    //exclude
    solve(nums, output, index+1, ans);

    //include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);
}

vector<vector<int>> subsets(vector<int>& nums) {
        int index = 0;
        vector<int> output;
        vector<vector<int>> ans;

        solve(nums, output, index, ans);
        return ans;
}

int main()
{
    vector<int> nums = {1,2,3,4};
    vector<vector<int>> a = subsets(nums);

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
            cout << a[i][j] <<" ";
        cout << endl;
    } 

}