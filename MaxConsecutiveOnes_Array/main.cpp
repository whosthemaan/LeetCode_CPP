#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int cnt {}, max {};
    for(int a:nums) 
    {
        if(a==1)
            cnt++;
        else
            cnt=0;
        if(cnt>max)
            max = cnt;
    }
    return max;
}
    
int main()
{
    vector<int> nums {1,1,1,0,1,1,1,1};
    cout << findMaxConsecutiveOnes(nums);
    return 0;
}