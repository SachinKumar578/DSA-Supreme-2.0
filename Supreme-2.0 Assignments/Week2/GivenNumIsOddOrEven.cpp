// WAP to find , if the given number is odd or even.

// (i) :- Using normal method ;

// #include<iostream>
// using namespace std ;

// bool checkEven(int num){
//     if(num % 2 == 0){
//         return true ; // its an even number.
//     }
//     else{
//         return false ; // its an odd number.
//     }
// }
// int main(){
//     int num ;
//     cout <<  "Enter a number : " ;
//     cin >> num ;
//     bool isEven = checkEven(num) ;

//     if(isEven){
//         cout << num << " is an even number." ;
//     }
//     else{
//         cout << num << " is a odd number." ;
//     }
// }


// Using Bitwise Method...

#include<iostream>
using namespace std ;

bool checkEven(int num){
    if((num & 1) == 0){
        return true ; // its an even number.
    }
    else{
        return false ; // its an odd number.
    }
}
int main(){
    int num ;
    cout <<  "Enter a number : " ;
    cin >> num ;
    bool isEven = checkEven(num) ;

    if(isEven){
        cout << num << " is an even number." ;
    }
    else{
        cout << num << " is a odd number." ;
    }
}