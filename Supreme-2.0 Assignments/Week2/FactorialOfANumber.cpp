// WAP to find the factorial of a number.

#include<iostream>
using namespace std ;
long long int factorial(long long int num){
    long long int fact = 1 ;
    for(int i=num ; i>0 ; i--){
        fact = fact * i ;
    }
    return fact ;
}
int main(){
    int num ;
    cout <<"Enter a number to find factorial : " ;
    cin >> num ;
   long long int fact = factorial(num) ;
    cout << "Factorial of " << num << " is : " << fact ;
}