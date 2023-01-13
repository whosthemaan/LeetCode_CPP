#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int s, int e)
{
    int pivot = arr[s];

    int cnt=0;
    for(int i=s+1;i<e;i++)
    {
        if(arr[i]<=pivot)
            cnt++;
    }

    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    int i=s, j=e;

    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot)
            i++;

        while(arr[j]>pivot)
            j--;

        if(i<pivotIndex && j>pivotIndex)
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quicksort(vector<int>& arr, int s, int e)
{
    //base case
    if(s>=e)
        return;

    int p = partition(arr, s, e);

    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e);
}

vector<int> sortArray(vector<int>& nums) {
    quicksort(nums, 0, nums.size()); 
    return nums;
}

int main()
{
    vector<int> arr;
    arr = {2,4,1,9,6};
    vector<int> a = sortArray(arr);
    
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    } cout << endl;

}