#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int s, int e)
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

void quicksort(vector<int> &arr, int s, int e)
{
    if(s>=e)
        return;

    int p = partition(arr, s, e);

    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e);
}

vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
{
    int i=0;

    for(int j=0;j<arr2.size();j++)
    {
        for(int k=0;k<arr1.size();k++)
        {
            if(arr1[k]==arr2[j])
            {
                swap(arr1[k],arr1[i++]);
            }
        }
    }
    
    quicksort(arr1, i, arr1.size());
    return arr1;
}

int main()
{
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};
    vector<int> result = relativeSortArray(arr1, arr2);

    for(int i=0;i<result.size();i++)
    {
        cout << result[i] << " ";
    }
}


