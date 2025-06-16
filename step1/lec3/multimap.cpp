/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // store duplicate keys in sorted order
    
    multimap<int, int> mp;
    mp.insert({1, 4});
    mp.insert({2, 3});
    mp.insert({2, 7});

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}