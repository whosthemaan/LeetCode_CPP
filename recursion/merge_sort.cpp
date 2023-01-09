#include <iostream>

using namespace std;

void merge(int *a, int s, int e)
{
    int mid = (s+(e-s))/2;
    
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;
    for(int i=0;i<len1;i++)
       first[i] = a[mainArrayIndex++];

    int l = mid+1;
    for(int i=0;i<len2;i++)
       second[i] = a[l++];

    //merge 2 sorted array game
    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = s;

    while(index1<len1 && index2<len2)
    {
        if(first[index1] < second[index2])
        {
            a[mainArrayIndex++] = first[index1++];
        }
        else
        {
            a[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1)
    {
        a[mainArrayIndex++] = first[index1++]; 
    }

    while(index2 < len2)
    {
        a[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *a, int s, int e)
{
    //base case
    if(s >= e)
        return;

    int mid = (s+e)/2;

    //left part sort
    mergeSort(a, s, mid);

    //right part sort
    mergeSort(a, mid+1, e);
    
    merge(a, s, e);
    
}

int main()
{
    int a[] = {2,5,1,6,9};

    int n = size(a);

    mergeSort(a, 0, n-1);

    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    } cout << endl;

    return 0;
}