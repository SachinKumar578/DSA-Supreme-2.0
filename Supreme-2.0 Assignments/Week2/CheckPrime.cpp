// WAP to check if  a given number is prime or not..

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
    bool isPrime = checkPrime(num);
    if(isPrime){
        cout << num << " is a prime number." ;
    }
    else{
        cout << num << " is not a prime number." ;
    }
}