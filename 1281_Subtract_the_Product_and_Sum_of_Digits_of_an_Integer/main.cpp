#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 240;
    int dig {}, sum {}, product {1};
    while(n>0)
    {
        dig = n%10;
        sum += dig;
        product *= dig;
        n /= 10;
    }
    cout << product - sum;
}