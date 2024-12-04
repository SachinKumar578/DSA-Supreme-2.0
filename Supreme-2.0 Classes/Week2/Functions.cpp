// Lecture name :- Functions 
// Lecture no.:- 6 , Week 2 


#include<iostream>
using namespace std ;

// void findSumUptoN(int n){
//     int sum = 0 ;

//     for(int i = 1 ; i<=n ; i++){
//         sum = sum+i ;
//     }

//     cout << "Final Sum: " << sum << endl ;
// }
// void checkEvenOdd(int num){
    
//     if(num%2 == 0){
//         cout << "Even number" << endl ;
//     }
//     else {
//         cout << "Odd number" << endl ;
//     }
// }
// void printCounting(int num){ ;
// for(int i=1 ; i<=num ; i++){
//     cout << i << endl ;
// }
// }
// void printMaximum (int n1 , int n2 , int n3){
//     int ans1 = max(n1 , n2);
//     int finalAns = max(ans1 , n3);
//     cout << "Final Ans is :" << finalAns << endl;
// }

// void printMaximum(int num1 , int num2 , int num3){
//     if(num1 > num2 && num1 > num3)
//     {
//         cout <<"Maximum is :" << num1 << endl ;
//     }
//     else if(num2 > num1 && num2 > num3)
//     {
//         cout <<"Maximum is :" << num2 << endl ;
//     }
//      else 
//     {
//         cout <<"Maximum is :" << num3 << endl ;
//     }
// }

// void messagePrint(){
//     cout << "Msg 1" << endl ;
//     cout << "Msg 2" << endl ;
//     return ;
// }
// int printSum(int a, int b, int c ){
//     int ans = a + b + c ;
//     return ans ;
// }

// void printSum(int a , int b , int c){
//     int sum = a + b + c ;
//     cout << "Sum is " << sum << endl ;

// }

// void printLine(){
//     for(int i=0 ; i<10 ; i++){
//         cout << "Sundar ko sundari pasad hai" << endl ;
//     }
// }

// void printName(string name){
//     for(int i=0 ; i<5 ; i++){
//         cout << name << endl ;
//     }
// }
// void findEvenSumUptoN(int n){
//     int sum = 0 ;

//     for(int i = 2 ; i<=n ; i=i+2){
//         sum = sum+i ;
//     }

//     cout << "Final Sum: " << sum << endl ;
// }

//return true if n is prime number
//return false if n is not a prime number

bool checkPrime(int n){
    for(int i=2 ; i<n; i++){
        if(n%i == 0){
            // remainder 0 = perfectly divisible not a prime number
            return false ;
        }
    }
    return true ;
}
int main () {
     
     bool prime = checkPrime (17);
     if(prime){
        cout << "its a prime number" << endl ;
     }
     else {
        cout << "its not a prime number" << endl  ;
     }

// findEvenSumUptoN(10);
   //checkEvenOdd(52);
    // //printCounting(20);
    // printMaximum(4 , 8 , 10) ;
    //messagePrint(); 
    // int sum = printSum(4 , 4 , 5);
    // cout << "Sum is:" << sum << endl ;

    // // function call

    // printLine();

//    printSum(5 , 5 , 5);


    // printName("Sachin");
    // printName("Kumar");
    // printName("Ashish");
    // printName("Kumar");
    // printName("Sachin");
}
