#include <iostream>
using namespace std;

bool issorted(int *arr, int size)
{
    // base case
    if(size==0 || size==1)
        return 1;
    // process
    if(arr[0]>arr[1])
        return 0; //first case solving
    else {
        bool ans = issorted(arr+1, size-1); //rest checked using recursion
        return ans;
    }
}

int main()
{
    int arr[5] = {2,4,8,6,9};
    int size = 5;

    bool ans = issorted(arr,size);
    cout << ans;
}