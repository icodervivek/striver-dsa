/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

// n->1

void printNum(int firstNum, int lastNum)
{
    if (firstNum > lastNum)
    {
        return;
    }
    cout << lastNum << endl;
    printNum(firstNum, lastNum - 1);
}

int main()
{
    int firstNum = 1, lastNum;
    cout << "Enter the last number: ";
    cin >> lastNum;
    printNum(firstNum, lastNum);
    return 0;
}