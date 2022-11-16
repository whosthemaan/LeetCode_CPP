#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n=10, i=0;
    int a[4];
    while(n!=0)
    {
        a[i] = n%2;
        n = n/2;
        i++;
    }
    for(auto i:a)
        cout << i<<endl;
    return 0;
}