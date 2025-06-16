/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {1, {3, 2}};
    cout << q.first << " " << q.second.second << " " << q.second.first << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << endl;
    cout << arr[0].second << endl;
    cout << arr[2].first << endl;
    cout << arr[2].second << endl;
}

int main()
{
    explainPair();
    return 0;
}