/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // sorted
    // not unique, multiple occurences

    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);

    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " "; // 1,1,2
    }

    cout << endl;

    // ms.erase(1); -> removes all occurences of 1

    int cn = ms.count(1);
    cout << cn << endl; // shows the count of 1 // outputs 2

    ms.erase(ms.find(1));        // remove only first occurence of 1
    cout << ms.count(1) << endl; // 1
    cout << ms.size() << endl;   // 2 - {1,2}

    multiset<int> ms1;
    ms1.insert(4);
    ms1.insert(6);
    ms1.insert(8);
    ms1.insert(8);
    ms1.insert(7);
    ms1.insert(3);
    // 3,4,6,7,8,8

    ms1.erase(ms1.find(4), ms1.find(7)); // removes 4 till 7

    for (auto it = ms1.begin(); it != ms1.end(); it++)
    {
        cout << *it << " "; // 3,7,8,8
    }

    return 0;
}