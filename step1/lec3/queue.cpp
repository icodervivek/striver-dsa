/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // FIFO
    queue<int> q;
    q.push(1);    // 1
    q.push(2);    // 2
    q.push(3);    // 3
    q.emplace(4); // 4

    cout << q.back() << endl; // 4
    q.back() += 5;
    cout << q.back() << endl; // 9
    cout << q.size() << endl;
    // 1 2 3 9
    cout << q.front() << endl; // 1
    q.pop();                   // 2,3,9
    queue<int> x;
    x.swap(q);
    cout << x.size() << endl; // 3
    return 0;
}