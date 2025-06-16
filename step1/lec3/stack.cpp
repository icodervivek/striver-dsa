/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // L I F O
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    // 5,4,3,2,1
    cout << st.top() << endl; // 5

    st.pop(); // removes the first element

    cout << st.top() << endl; // 4

    cout << st.size() << endl; // 4

    cout << st.empty() << endl; // 0

    return 0;
}