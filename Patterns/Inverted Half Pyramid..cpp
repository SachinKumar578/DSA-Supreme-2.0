// A program to print Inverted Half Pyramid pattern.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout << "*";
            }
            cout << endl;
    }
    
}
