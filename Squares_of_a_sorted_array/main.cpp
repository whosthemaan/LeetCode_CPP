#include <iostream>
#include <vector>
//#include <bits/stdc++.h>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> enw;
    for(auto a:nums)
    {
        enw.push_back((a*a));
    }
    //sort(enw.begin(), enw.end());
    return enw;
}

//vector<int> sortedSquares(vector<int>& nums) {
//    vector<int> enw;
//    for(auto a:nums)
//    {
//        enw.push_back((a*a));
//    }
//    //sort(enw.begin(), enw.end());
//    return enw;
//}
    
int main()
{
    vector<int> enw;
    vector<int> nums {-1,1,1,2,3};
    enw = sortedSquares(nums);
    for(auto a:enw)
        cout << a<<endl;
    return 0;
}