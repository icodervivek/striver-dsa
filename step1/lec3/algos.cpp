/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Enter the count of array: ";
    int arr;
    cin >> arr;
    int newarr[arr];
    for (int i = 0; i < arr; i++)
    {
        cin >> newarr[i];
    }

    sort(newarr, newarr + arr);

    for (int i = 0; i < arr; i++)
    {
        cout << endl
             << newarr[i];
    }

    cout << endl;

    vector<int> vec;
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(8);

    sort(vec.begin(), vec.end()); // for ascending order

    for (auto it : vec)
    {
        cout << it << " ";
    }

    return 0;
}