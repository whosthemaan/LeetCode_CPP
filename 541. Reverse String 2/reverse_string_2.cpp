#include <iostream>
#include <vector>

using namespace std;

string reverseStr(string s, int k) {
    int sz = s.size();
    int remaining = sz%(2*k);
    int start = 0;
    int end = k-1;

    for(int i=start;i<end;i++)
    {
        swap(s[start], s[end]);
        end--;
    }

    return s;
}

int main()
{
    string str = "rohan";
    int k = 2;
    string new_str = reverseStr(str, k);
    cout << new_str;
}