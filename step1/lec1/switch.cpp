/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int choice;
    cout << "Enter your choice (1-7): ";
    cin >> choice;
    // Using switch statement to determine the day of the week
    switch (choice)
    {
    case 1:
        cout << "The day is Monday" << endl;
        break;
    case 2:
        cout << "The day is Tuesday" << endl;
        break;
    case 3:
        cout << "The day is Wednesday" << endl;
        break;
    case 4:
        cout << "The day is Thursday" << endl;
        break;
    case 5:
        cout << "The day is Friday" << endl;
        break;
    case 6:
        cout << "The day is Saturday" << endl;
        break;
    case 7:
        cout << "The day is Sunday" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
    return 0;
}