#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr {3,5,1};
    sort(arr.begin(), arr.end());
    int diff = arr[1] - arr[0];
    bool state = false;
    int sz = arr.end() - arr.begin();

    for(int i=0;i<sz-1;i++)
    {
        if((arr[i+1] - arr[i]) == diff)
            state = true;
        else {
            state = false;
            break;
        }
    }
    
    cout << state;
    return 0;
}