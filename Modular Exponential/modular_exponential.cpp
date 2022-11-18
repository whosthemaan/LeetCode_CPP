#include <iostream>

using namespace std;

int modularExponentiation(int x, int n, int m) {
	int val = 1;
    while(n>0)
    {
        if(n&1)
            val = (1LL*(val)*(x)%m)%m;
        x=(1LL*(x)%m *(x)%m)%m;
        n = n/2;
    }
    return val;
}

int main()
{
    cout << modularExponentiation(5,2,10);
}
