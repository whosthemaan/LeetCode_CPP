#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13
int fibo(int *arr, int start, int end)
{   
//  base case
    if(start>end)
        return arr[end-1];

// processing
    arr[start] = arr[start-2] + arr[start-1];
    start++;

    fibo(arr, start, end);

    return arr[end-1];
}
int main()
{
    int start = 2;
    int end = 9;
    int arr[end-1] = {0,1};

    cout << fibo(arr, start, end);
}