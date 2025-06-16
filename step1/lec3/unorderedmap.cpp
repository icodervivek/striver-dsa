/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // store unique keys but not in sorted order
    
    unordered_map<int, int> ump;
    ump.insert({1, 4});
    ump.insert({5, 3});
    ump.insert({2, 7});
    ump.insert({2, 7}); // not insered as the key is duplicate

    for (auto it : ump)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}