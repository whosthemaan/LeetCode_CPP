#include <iostream>
using namespace std;

bool binarysearch(int *arr, int start, int end, int key)
{
    // base case
    if(end<start)
        return 0;

    int mid = start + (end-start)/2;

    if(arr[mid]==key) //central value is equal to key
        return true;
    else if(arr[mid]>key)
        end = mid - 1;
    else if(arr[mid]<key)   
        start = mid + 1;   

    int foundit = binarysearch(arr, start, end, key);
    return foundit;
}

int main(){
    int arr[10] = {10,28,37,43,54,61,70,81,97,222};
    int start = 0, end = 9, key = 43;
    bool a = binarysearch(arr, start, end, key);
    cout << a;
}