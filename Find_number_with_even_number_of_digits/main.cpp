#include <iostream>
#include <vector>
using namespace std;

int findNumbers(vector<int>& nums) {
    int cnt {}, even {};
    for(int a:nums)
    {
        while(a!=0)
        {
            a /= 10;
            cnt++;
        }
        if(cnt%2==0)
            even++;
        cnt = 0;
    }
    return even;
}

int main()
{
    vector<int> nums {12,13,14,156};
    cout << findNumbers(nums);
    return 0;
}