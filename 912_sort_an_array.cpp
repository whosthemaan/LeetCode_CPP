//using merge sort
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int s, int m, int e) {
    vector<int> sorted(e - s + 1);
    int k = 0;      // sorted's index
    int i = s;      // left's index
    int j = m + 1;  // right's index

    while (i <= m && j <= e)
        if (arr[i] < arr[j])
        sorted[k++] = arr[i++];
        else
        sorted[k++] = arr[j++];

    //remaining left portion
    while (i <= m)
        sorted[k++] = arr[i++];

    //remaining right portion
    while (j <= e)
        sorted[k++] = arr[j++];

    copy(begin(sorted), end(sorted), begin(arr) + s);
}

void mergeSort(vector<int>& arr, int s, int e) {
    if (s >= e)
        return;

    const int m = (s + e) / 2;
    mergeSort(arr, s, m);
    mergeSort(arr, m + 1, e);
    merge(arr, s, m, e);
}

int main()
{
    vector<int> arr = {8,5,9,3,4};
    mergeSort(arr, 0, arr.size() - 1);

    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }
}