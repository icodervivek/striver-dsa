/**************** Hey There, Vivek Here ****************/
/*                Dream Big & Compile Them            */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "You are already an adult.";
    // }
    // else
    // {
    //     cout << "You are not an adult.";
    // }

    int marks;
    cout << "\nEnter your marks: ";
    cin >> marks;

    if (marks < 25)
    {
        cout << "Grade F";
    }
    else if (marks <= 44)
    {
        cout << "Grade E";
    }
    else if (marks <= 49)
    {
        cout << "Grade D";
    }
    else if (marks <= 59)
    {
        cout << "Grade C";
    }
    else if (marks <= 79)
    {
        cout << "Grade B";
    }
    else if (marks <= 100)
    {
        cout << "Grade A";
    }
    else
    {
        cout << "Something went wrong....";
    }

    int age;
    cout << "\nEnter your age: ";
    cin >> age;

    if (age < 18)
    {
        cout << "Not eligible for job.";
    }
    else if (age >= 18 && age <= 57)
    {
        cout << "Eligible for job";
        if (age >= 55)
        {
            cout << ", but retirement soon.";
        }
    }
    else
    {
        cout << "Retirement time.";
    }

    return 0;
}