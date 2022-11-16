#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int x) {
    string a = to_string(x);
    bool b = false;
    int sz = a.size();
    if(sz==0 || sz==1)
        b = true;
    else
    {
        for(int i=0;i<(sz/2);i++)
        {
            if(a[i] == a[(sz-i-1)])
               b = true; 
            else
               return false;
        }
    }
    return b;
}
    
int main()
{
    int a = 1000021;
    cout << isPalindrome(a);
    return 0;
}