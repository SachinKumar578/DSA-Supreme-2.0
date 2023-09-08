// A program to print Solid Half Diamond pattern.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    for(int i=0;i<2*n-1;i++)
    {
        int cond = 0;
        if(i < n){  // Growing phase of diamond.
            cond = i ;
        }
        else{   // Shrinking phase of diamond.
            cond = n - (i % n) - 2;
        }
        for(int j = 0; j <= cond; j++){
            cout << "*";
        }
        cout << endl;
    }
    
}

