/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // FIFO but largest priority
    priority_queue<int> pq;
    pq.push(5);    // 5
    pq.push(4);    // 5, 4
    pq.push(3);    // 5, 4, 3
    pq.push(8);    // 8, 5, 4, 3
    pq.emplace(2); // 8,5,4,3,2

    cout << pq.top() << endl;
    pq.pop();                 // removed 8 and can display 5,4,3,2
    cout << pq.top() << endl; // 5

    priority_queue<int, vector<int>, greater<int>> pqr;
    pqr.push(5);              // 5
    pqr.push(2);              // 2,5
    pqr.push(9);              // 2,5,9
    cout << pqr.top() << " "; // 2

    // Time Complexity
    // push -> log(n)
    // top  -> O(n)
    // pop  -> log(n)

    return 0;
}