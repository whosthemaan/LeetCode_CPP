#include <iostream>
#include <vector>
using namespace std;

int arraySign(vector<int>& nums) {
    int sign = 1;
    for(auto x:nums)
    {
        if(x>0)
            sign *= 1;
        else if(x<0)
            sign *= -1;
        else
            sign = 0;
    }
    return sign;
}

int main()
{
    vector<int> nums {9,72,34,29,-49,-22,-77,-17,-66,-75,-44,-30,-24};
    cout << arraySign(nums);
}