#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13
int fibo(int *arr, int start)
{   
//  base case
    if(start>8)
        return arr[7];

// processing
    arr[start] = arr[start-2] + arr[start-1];
    start++;

    fibo(arr, start);

    return arr[7];
}
int main()
{
    int arr[7] = {0,1};
    int start = 2;

    cout << fibo(arr, start);
}