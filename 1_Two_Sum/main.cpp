#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for(int i = 0; i!= nums.size(); i++)
    {
        for(int j=i+1; j!=nums.size(); j++)
        {
            if(nums[i] + nums[j] == target)
                return {i,j};
        }
    }
    return {0};
}
    
int main()
{
    vector<int> a {0,1,2,3,4};
    vector<int> b;
    b = twoSum(a, 3);
    for(auto a:b)
        cout << a<<endl;
    return 0;
}