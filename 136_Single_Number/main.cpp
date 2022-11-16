#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    //sort(nums.begin(), nums.end());
    if(nums.size()>1)
    {
        for(int i=0;i<nums.size();i+=2)
        {
            if(nums[i] != nums[i+1])
                return nums[i];
        }
    }
    return nums[0];
}
    
int main()
{
    vector<int> a {2,2,1};
    cout<<singleNumber(a);
    return 0;
}