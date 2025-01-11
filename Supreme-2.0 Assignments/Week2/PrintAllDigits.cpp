// Write a program to print all digitss of a number..

#include<iostream>
using namespace std ;

void printAllDigits(int n){
    while(n){
    int onesPlaceDigit = n % 10 ;
    cout << "Digit : " << onesPlaceDigit << endl ;
    n = n/10 ;
    }
}

int main(){
    int  n ;
    cout << "Enter number to see its digts " << endl ;
    cin >> n ;
    printAllDigits(n);
}