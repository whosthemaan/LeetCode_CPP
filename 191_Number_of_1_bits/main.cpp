#include <iostream>
#include <vector>
using namespace std;

int main()
{
    uint32_t n = 000000000000000000000000000011111;
    int cnt {};
    
    for(int i=0;i<=32;++i)
    {
        uint32_t j=n;
        n = (n<<1);
        if(n<j)
            cnt++;
    }
    cout << cnt;
    return 0;
}