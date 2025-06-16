/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);

    for (auto it = dq.begin(); it < dq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    dq.pop_back(); // remove the last element

    for (auto it = dq.begin(); it < dq.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    dq.pop_front(); // remove the first element

    for (auto it = dq.begin(); it < dq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << dq.back()<<" "; // prints the last element
    cout << dq.front(); // prints the first element


    return 0;
}