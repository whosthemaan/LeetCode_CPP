#include <iostream>
#include <array>
#include <vector>

using namespace std;

int cnt(vector<int> number, vector<int> pattern)
{
    int count = 0;
    bool flag = 0;

    for(int i=1;i<(number.size()-pattern.size());i++)
    {
        for(int j=0;j<pattern.size();j++)
        {
            if(pattern[j]==1)
            {
                if(number[i]>number[i-1])
                    flag = 1;
                else {flag = 0;}
            }
            else if(pattern[j]==0)
            {
                if(number[i]==number[i-1])
                    flag = 1;
                else {flag = 0;}
            }
            else if(pattern[j] == -1)
            {
                if(number[i]<number[i-1])
                    flag = 1;
                else {flag = 0;}
            }
        }
        if(flag==1)
        {
            count++;
            flag = 0;
        }
    }    

    return count;
}

int main()
{
    vector<int> numbers = {4, 1, 3, 4, 4, 5, 5, 1};
    vector<int> patterns = {1,0,-1,1};

    cout << cnt(numbers, patterns);
}