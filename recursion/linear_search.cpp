#include <iostream>
using namespace std;

bool finding(int *arr, int size, int element)
{
    if(arr[0]==element) //base case
        return 1;

    if(size==0)
        return 0;
    
    bool ifyes = finding(arr+1, size-1, element);
    return ifyes;
}

int main() {
    int arr[5] ={1,2,3,4,5};
    int size = 5;
    bool iffound = finding(arr, size, 110);
    cout << iffound;
}