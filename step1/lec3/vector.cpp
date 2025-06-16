/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    cout << v[0] << endl;
    cout << v[1] << endl;

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(2, 4);

    cout << vec[0].first << endl;
    cout << vec[0].second << endl;

    vector<int> v1(5, 100);
    cout << v1[0] << endl;
    cout << v1[1] << endl;
    cout << v1[2] << endl;
    cout << v1[3] << endl;
    cout << v1[4] << endl;

    vector<int> v2(5);
    // cout<<v2[0]<<endl;
    // cout<<v2[1]<<endl;
    // cout<<v2[2]<<endl;
    // cout<<v2[3]<<endl;
    // cout<<v2[4]<<endl;

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    // vector<int>::iterator it = nums.begin();
    auto it = nums.begin();
    cout << *(it) << " ";
    it++;
    cout << *(it) << " ";
    it++;
    cout << *(it) << " ";
    it++;
    cout << *(it) << " ";

    auto itone = nums.end();
    itone--;
    itone--;
    cout << *itone << " " << endl;

    for (auto its = nums.begin(); its != nums.end(); its++)
    {
        cout << *its << " "<<endl;
    }

    vector<int> p = {1, 3, 4, 7, 8};
    p.erase(p.begin() + 2, p.begin() + 4);

    for(auto q = p.begin(); q != p.end(); q++){
        cout<<*q<<" ";
    }

    return 0;
}