#include <iostream>
#include <vector>

using namespace std;

string reverseStr(string s, int k) {
    int sz = s.size();
    int count = ((sz-1)/k);
    int start = 0;
    int end = k-1;
    int remaining = sz - (count*k);
    int rem_new = sz - ((count)*k);

    for(int num=1;num<=remaining;num++)
    {
        for(int i=start;i<end;i++)
        {
            swap(s[start], s[end]);
            end--;
        }
        start = num*(2*k);
        end = start + k-1;
    }

    // cout << remaining << " " << rem_new;
    if(remaining < k && remaining!=rem_new)
    {
        start = (count-1)*k;
        end = sz-1;

        for(int i=start;i<end;i++)
        {
            swap(s[start], s[end]);
            end--;
        }
    }
    else if(rem_new<(2*k) && rem_new>=k)
    {
        start = (count-1)*k;
        end = start + k + 1;

        for(int i=start;i<end;i++)
        {
            swap(s[start], s[end]);
            end--;
        }
    }

    return s;
}

int main()
{
    string str = "abcd";
    int k = 2;
    string new_str = reverseStr(str, k);
    cout << new_str;
}