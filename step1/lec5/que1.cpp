/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int myCount = 0;

void printName()
{
    if (myCount >= 5)
    {
        return;
    }
    cout << "Vivek" << endl;
    myCount++;

    printName();
}

int main()
{
    printName();
    return 0;
}