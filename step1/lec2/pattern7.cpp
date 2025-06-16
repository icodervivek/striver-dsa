/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    //      *           1   1
    //     ***          2   3 
    //    *****         3   5
    //   *******        4   7
    //  *********       5   9

    for (int i = 0; i <= 4; i++)
    {
        for(int j = 0; j < 4-i-1; j++){
            cout<<" ";
        }

        for (int j = 0; j < 2*i+1; j++){
            cout<<"*";
        }

        for(int j = 0; j < 4-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}