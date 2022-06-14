#include <iostream>
#include <vector>
using namespace std;


int nearestValidPoint(int x, int y, vector<vector<int>>& points) 
{
    int index {-1}, lowest {INT_MAX}, cnt {}; //approach 1 - using range for
    for(auto m:points)
    {
        if((m[0] == x) || (m[1] == y))
        {
            if((abs(m[0] - x) + abs(m[1] - y)) < lowest)
            {
                lowest = (abs(m[0] - x) + abs(m[1] - y));
                index = cnt;
            }
        }
        cnt++;
    }
    
//    int index = -1, distance = INT_MAX; //approach 2 - using iterators based for loop
//    
//    for (int i = 0; i < points.size(); i++) {
//        if (x == points[i][0] || y == points[i][1]) {
//            int current_distance = abs(x - points[i][0]) + abs(y - points[i][1]);
//            if (current_distance < distance) {
//                distance = current_distance;
//                index = i;
//            }
//        }
//    }

    return index;
}
int main()
{
    vector<vector<int>> arr {{0,1}, {3,1}, {2,4}, {1,3}};
    int x {1}, y{2};
    cout << nearestValidPoint(x,y,arr)<<endl;
    return 0;
}