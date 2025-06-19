/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

// N to 1

void printNum(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printNum(i + 1, n);
    cout << i << endl;
}

int main()
{
    int lastNum;
    cout << "Enter the last number: ";
    cin >> lastNum;
    printNum(1, lastNum);
    return 0;
}