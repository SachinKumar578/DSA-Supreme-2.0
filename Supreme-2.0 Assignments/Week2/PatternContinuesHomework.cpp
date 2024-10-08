// These are the homework questions of lec. 6 pattern continues......
// A program to print solid half diamond.....

// #include<iostream>
// using namespace std ;

// int main (){
    
//     int n ;
//     cout << "Enter the value of n : " ;
//     cin >> n ;

//     for(int row=0 ; row<n ; row++){
//         for(int col=0 ; col<row+1 ; col++){
//             cout << "* " ;
//         }
//         cout << endl ;
//     }
//      for(int row=0 ; row<n ; row++){
//         for(int col=0 ; col<n-row-1; col++){
//             cout << "* " ;
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }


// A program to print butterfly pattern....

// #include<iostream>
// using namespace std;

// int main (){

//     int n ;
//     cout << "Enter the value of  n : " ; 
//     cin >> n ; 

//     for(int row=0 ; row<n ; row++){

//         //inverted pyramid 1..
//         for(int col=0 ; col<row+1 ; col++){
//             cout << "* " ;
//         }

//        // inverted full pyramid 1 in in the form of spaces..
//          for(int col=0 ; col<2*n-2*row-2 ; col++){
//             cout << "  " ;
//         }

//         //inverted pyramid 2..
//         for(int col=0 ; col<row+1 ; col++){
//             cout << "* " ;
//         }
//         cout << endl ;
//     }
//     for(int row=0 ; row<n ; row++){

//         // pyramid 1..
//         for(int col=0 ; col<n-row ; col++){
//             cout << "* " ;
//         }

//        // full pyramid 1 in in the form of spaces..
//          for(int col=0 ; col<2*row ; col++){
//             cout << "  " ;
//         } 

//         // pyramid 2..
//         for(int col=0 ; col<n-row ; col++){
//             cout << "* " ;
//         }
//         cout << endl ;
//     }
    
//     return 0 ;
// }


// A program to print the following pattern...

//      ********1********
//      *******2*2*******
//      ******3*3*3******
//      *****4*4*4*4*****
//      ****5*5*5*5*5****

// #include<iostream>
// using namespace std ;

// int main(){

//     int n ;
//     cout << "Enter the value of n : " ;
//     cin >> n ;

//     for(int row=0 ; row<n ; row++){

//         // inverted pyramid 1
//         for(int col=0 ; col<2*n-row-2 ; col++){
//             cout << "*" ;
//         }

//         // fancy pattern 
//         for(int col=0 ; col<2*row+1 ; col++){
//            if(col%2==1){
//             cout << "*" ;
//            }
//            else{
//             cout << row+1 ;
//            }
//         }

//         // inverted pyramid 2
//         for(int col=0 ; col<2*n-row-2 ; col++){
//             cout << "*" ;
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }


// A program to print the following fancy pattern....

//      1
//      2*2
//      3*3*3
//      4*4*4*4
//      3*3*3
//      2*2
//      1

// #include<iostream>
// using namespace std ;

// int main(){
//     int n ;
//     cout << "Enter the value of n : " ;
//     cin >> n ;

//     for(int row=0 ; row<n ; row++){
//         for(int col=0 ; col<2*row+1 ; col++){
//             if(col%2==1){
//                 cout << "*" ;
//             }
//             else {
//                 cout << row+1 ;
//             }
//         }
//         cout << endl ;
//     }
//     for(int row=0 ; row<n ; row++){
//         for(int col=0 ; col<2*n-2*row-3; col++){
//            if(col%2==1){
//             cout << "*" ;
//            }
//            else {
//             cout << n-row-1 ;
//            }
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }


// WAP to print the following pattern.....
//              1
//            1 2 1  
//          1 2 3 2 1
//        1 2 3 4 3 2 1
//      1 2 3 4 5 4 3 2 1

#include<iostream>
using namespace std ;

int main(){

    int n ;
    cout << "Enterr the value of n : " ;
    cin >> n ;

    for(int row=0 ; row<n ; row++){
        // for spaces
        for(int col=0 ; col<n-row-1 ; col++){
            cout << " " ;
        }
      // for counting
      for(int col=0 ; col<row ;col++){
        cout << col+1 ;
      }

      // for the second part of counting...

    for(int col=0 ; col<row+1 ; col++){
        cout << row+1-col ;
    }
        cout << endl ;
    }
    return 0 ;
    }


