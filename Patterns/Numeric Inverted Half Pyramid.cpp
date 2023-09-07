// A program to print Numeric Inverted Half pyramid pattern.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
          
            cout << j;
           }
            cout << endl;
            }
           
    }
    
