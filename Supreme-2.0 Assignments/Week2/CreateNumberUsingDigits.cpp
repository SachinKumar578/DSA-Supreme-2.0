// Write a program to create a number using digits...

#include<iostream>
using namespace std ;

int cretaeNumbersUsingDigits(int numberOfDigits){
    int num = 0 ;
    for(int i=0 ; i<numberOfDigits ; ++i){
        cout << "Enter digit : " ;
        int digit ;
        cin >> digit ;
        num = num * 10 + digit ;
        cout << "Number created so far : " << num << endl ;
    }
    return num ;
}
int main(){
    int numberOfDigits ;
    cin >> numberOfDigits ;
    int num = cretaeNumbersUsingDigits(numberOfDigits);
    cout << "Number created by digits : " << num << endl ;
}