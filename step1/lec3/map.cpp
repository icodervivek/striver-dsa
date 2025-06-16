/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // key, values
    // key can be of any data types
    // key can't be duplicate but values can
    // map stores unique keys in sorted order
    map<int, int> mpp;

    mpp[1] = 2;  // 1, 2
    mpp.emplace(3,4); // 3,4
    mpp.insert({2,4}); // 2,4

    
    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    return 0;
}