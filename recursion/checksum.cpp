#include <iostream>
using namespace std;

int summing(int *arr, int size)
{
    if(size==0)// base case
        return 0;

    if(size==1)
        return arr[0];

    int remain = summing(arr+1, size-1);
    int sum = arr[0] + remain;

    return sum;
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    int final = summing(arr, size);
    cout << final;
}