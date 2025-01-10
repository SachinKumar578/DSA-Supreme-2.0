// WAP to print all prime numbers from 1 to N.

#include<iostream>
using namespace std ;
bool checkPrime(int num){
    for(int i=2 ; i<num ; i++){
        if(num%i==0){
            return false ;
        }
    }
    return true ;
}
int main(){
    int num ;
    cout << "Enter a number : " ;
    cin >> num ;
    for(int i=2 ; i<=num ; i++){
        bool isIPrime = checkPrime(i) ;
        if(isIPrime){
            cout << i << " " ;
        }
    }
}