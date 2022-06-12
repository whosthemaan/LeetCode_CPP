#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h> 

using namespace std;

int largestPerimeter(vector<int>&  nums) {
    int n=nums.size(), perimeter {};
    sort(nums.begin(),nums.end());
    for (int i=n - 1; i > 1; --i)
        if (nums[i] < nums[i - 1] + nums[i - 2])
            perimeter = (nums[i] + nums[i - 1] + nums[i - 2]);
        
    return perimeter;
}

int main()
{
    vector<int> arr = {1,2,3,4};
    cout << largestPerimeter(arr)<<endl;
    return 0;
}