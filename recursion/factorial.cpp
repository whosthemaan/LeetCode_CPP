#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
        return 1;

    int smallprob = factorial(n-1);
    int bigproblem = n * smallprob;

    return bigproblem;
}

// print using recursion
void print(int n)
{
    if(n==0) {
        return ;
    }
    
    print(n-1);

    cout << n << " ";
}

int main()
{
    int n = 3;
    print(n);
}