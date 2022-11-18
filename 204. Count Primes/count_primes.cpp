#include <iostream>
#include <vector>
using namespace std;

// bool isprime(int n)
// {
//     if(n<=1)
//         return false;

//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }
//     } 
//     return true;
// }

// int countPrimes(int n) {
//     int count = 0;

//     for(int i=2;i<n;i++)
//     {
//         if(isprime(i))
//             count++;
//     }

//     return count;
// }

bool countPrimes(int n)
{
    int count = 0;

    vector<bool> prime(n+1, true);

    prime[0] = prime[1] = false;

    for(int i=2;i<n;i++)
    {
        if(prime[i]) {
            count++;

            for(int j=2*i;j<n;j=j+i) { //mark all the multiplication for valid numbers as non prime
                prime[j] = 0;
            }
        }
    }

    return count;
}

int main()
{
    int n=3;
    cout << countPrimes(n);
}