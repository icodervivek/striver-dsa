/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

// non parameterised
void doSomething()
{
    cout << "I do something...\n";
}

// parameterised
void printName(string name)
{
    cout << "Hey, " << name << endl;
}

// return
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    doSomething();
    printName("vivek");
    cout << "Sum is " << sum(2, 5);
    return 0;
}