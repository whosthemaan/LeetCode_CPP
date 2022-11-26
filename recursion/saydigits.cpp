#include <iostream>
using namespace std;

void func(int num, string arr[])
{
    // base case
    if(num == 0)
        return ;

    // processing
    int dig = num%10;
    num /= 10;

    func(num, arr);

    cout << arr[dig] << " ";
}

int main()
{
    string digits[] = {"zero", "one", "two", "three", "four", "five", "sixth", "seven", "eight", "nine"};
    int num = 5131;
    func(num, digits);
}