/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // sorted, unique
    set<int> st;
    st.insert(1);              // 1
    st.emplace(2);             // 2
    st.insert(1);              // will not insert
    st.insert(8);              // 1,2,8
    cout << st.size() << endl; // 3

    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " "; // 1,2,8
    }

    cout << endl;

    set<int> st1;
    st1.insert(4);
    st1.insert(8);
    st1.insert(9);
    st1.insert(10);
    st1.insert(10);
    // 4, 8, 9, 10
    auto its = st1.find(42); // it'll point to the st1.end() as it's not present in the set
    if (its == st1.end())
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found";
    }
    return 0;
}