#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    //base case
    if(index>=nums.size())
    {
        if(output.size()>0)
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

int max_sum(vector<vector<int>> subs)
{
    int sum = 0, highest = 0, index = 0;
    for(int i=0;i<subs.size();i++)
    {
        for(int j=0;j<subs[i].size();j++)
        {
            sum += subs[i][j];
        }

        if(sum>highest)
        {
            highest = sum;
            // cout << highest<<" " <<index<<endl;
        }

        index++;
        sum = 0;
    }
    return highest;
}

int subsets(vector<int>& nums) {
    int index = 0;
    vector<int> output;
    vector<vector<int>> ans;

    solve(nums, output, index, ans);

    // for(int i=0;i<ans.size();i++)
    // {
    //     cout << i << ".  ";
    //     for(int j=0;j<ans[i].size();j++)
    //         cout << ans[i][j]<< " ";
    //     cout <<  endl;
    // }

    int highest_sum = max_sum(ans);
    return highest_sum;
}

int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << subsets(nums);
}