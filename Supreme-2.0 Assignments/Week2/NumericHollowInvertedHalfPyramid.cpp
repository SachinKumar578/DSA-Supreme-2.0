// Week 2 Assignment , Question no.:- 2

// Numeric hollow inverted half pyramid...

//    1 2 3 4 5
//    2     5
//    3   5
//    4 5
//    5

#include<iostream>
using namespace std;

int main(){

    int n ;
    cout << "Enter the value of n : " ;
    cin >> n ;

    for(int row=0 ; row<n ; row++){
        for(int col=row+1 ; col<n+1 ; col++){
            if(col==row+1 || col==n || row==0){
                cout << col ;
            }
        else{
            cout << " " ;
        }
        }
        cout << endl ;
    }
    return 0 ;
}
