// Typecasting exmple programs...

#include<iostream>
using namespace std ;

int main (){

    // // IMPLICIT TYPECASTING
    // // 1. Int to Float..

    // int num1 = 10 ;
    // float num2 = 5.5 ;

    // // Implicit conversion of num1 from int to flaot

    // float result = num1 + num2 ;

    // cout << result << endl ;

    // // 2.  Char to Int 

    // char ch = 'A' ;
    // int a = ch + 1 ;    // Implicit conversion from char to int

    // cout << a << endl ;


    // 3. Int to Char

    // int a = 97 ;
    // char ch = a ; // Implicit conversion from int to char...
    // cout << ch << endl ;


    /// EXPLICIT TYPECASTING

    // 1. Double to Int 

    // double pi = 3.14159265 ; 
    // int intpi = (int)pi ; // Explicit conversion from double to int...
    // cout << intpi << endl ;


    // 2. Float ot Char ....

    // float floatingNumber = 65.5 ;
    // char charValue = (char)floatingNumber ; // Explicit conversion from flaot to char....
    // cout << charValue << endl ;


    // 3. Int to Float..

    int a  = 10 ;
    int b = 3.0 ;
    float c = a / (float(b))  ; // Explicit conversion from int to float..
    cout << c << endl ;


    return 0 ;


}
