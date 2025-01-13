// #include<iostream>
// using namespace std ;

// int main (){
//     // original variable name = n
//     int n = 5 ;  // normal integer variable.

//      // k is a reference variable , referring to n .
//     int &k = n ;  /// nickname given to n .

//     // c is a reference variable , referring to n .
//     int &c = n ;    // nickname given to n .

//     cout <<"n : " << n << endl ;
//     cout <<"k : " << n << endl ;
//     cout <<"c : " << n << endl  << endl  ;

//     k++ ;

//     cout <<"n : " << n << endl ;
//     cout <<"k : " << n << endl ;
//     cout <<"c : " << n << endl ;
// }



// CALL BY VALUE CALL BY REFERENCE.....


// CALL BY VALUE
#include<iostream>
using namespace std ;

int incrementBy1(int num){
   num = num + 1 ;
   return num ;
}

int main(){
    int n ;
    cin >> n ;
    n = incrementBy1(n);
    cout << "n : " << n << endl ;
}


// CALL BY REFERENCE
// #include<iostream>
// using namespace std ;

//  void incrementBy1(int &k){
//    k = k + 1 ;
 
// }

// int main(){
//     int n ;
//     cin >> n ;
//      incrementBy1(n);
//     cout << "n : " << n << endl ;
// }



// C++ program to demonstrate call by value
// #include <iostream>
// using namespace std;

// function to update the original value
// void increment(int num)
// {
//     num++;
//     cout << num << endl;
// }

// int main()
// {
//     int number = 5;
//     increment(number); // Passing 'number' by value
//     cout << number << endl;
//     return 0;
// }



// C++ program to demonstrate the working of call by
// reference

// #include <iostream>
// using namespace std;

// // function to update the original value
// void increment(int& num)
// {
//     num++;
//     cout << num << endl;
// }

// int main()
// {
//     int number = 5;
//     increment(number); // Passing 'number' by reference
//     cout << number << endl;
//     return 0;
// }