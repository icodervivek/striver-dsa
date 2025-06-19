/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

void printNum(int firstNum, int n)
{
    if (firstNum > n)
    {
        return;
    }
    cout << firstNum << endl;
    printNum(firstNum + 1, n);
}

int main()
{
    int num;
    cout << "Enter the last number: ";
    cin >> num;
    printNum(1, num);
    return 0;
}