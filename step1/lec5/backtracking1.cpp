/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

// 1 to N

#include <bits/stdc++.h>

using namespace std;

void printNum(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    printNum(i - 1, n);
    cout << i << endl;
}

int main()
{
    int lastNum;
    cout << "Enter the last number: ";
    cin >> lastNum;
    printNum(lastNum, lastNum);
    return 0;
}