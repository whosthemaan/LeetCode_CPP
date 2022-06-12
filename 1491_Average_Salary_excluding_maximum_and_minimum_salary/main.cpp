#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    vector<int> salary {200,100,300,700,500};
    int min {salary[0]}, max {salary[0]}
    double sum {}, cnt {};
    
    for(auto i : salary)
    {
        if(i > max)
            max = i;
        if(i < min)
            min = i;
        sum += j;
        cnt += 1;
    }
 
    return ((sum-max-min)/(cnt-2));
}