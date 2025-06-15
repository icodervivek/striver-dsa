/**************** Hey There, Vivek Here ****************/ 
/*                Dream Big & Compile Them            */


#include <bits/stdc++.h>

using namespace std;

void pattern1(int n){

    // ****
    // ****
    // ****
    // ****
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    cout<<"Enter number of rows for pattern 1: ";
    int n;
    cin>>n;
    pattern1(n);
    return 0;
}