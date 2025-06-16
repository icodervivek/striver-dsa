/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " " << endl;
    }

    ls.push_front(1);
    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " " << endl;
    }
  
    ls.emplace_front(4);

    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " " << endl;
    }
    return 0;
}