#include <iostream>
#include <vector>
using namespace std;

void duplicateZeros(vector<int>& arr) {
    auto sz = arr.size();
    auto nz_sz = sz-1;
    vector<int> nz;
    for(size_t i=0; i!=(sz);i++)
    {
        if(nz_sz>0)
        {
            nz.push_back(arr[i]);
            if(arr[i] == 0)
            {
                nz.push_back(0);
                nz_sz--;
            }
            nz_sz--;
        }
        else
            break;
    }
        
    for(auto a:nz)
        cout <<a<<endl;
}
    
int main()
{
    vector<int> arr {1,0,3,4};
    duplicateZeros(arr);
    return 0;
}