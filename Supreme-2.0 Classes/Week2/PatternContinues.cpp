// Lecture name :- Pattern continues 
// Lecture no.:- 6
// A program to print full pyramid...

// #include<iostream>
// using namespace std ;

// int main(){

//     int n ;
//     cout << " Enter the value of n : " ;
//     cin >> n ;

//     for (int row=0 ; row<n ; row++){

//         // For printing space....
//         for (int col=0 ; col<n-row-1 ; col++){
//             cout << " " ;
//         }
//         // For printing stars....
//         for (int col=0 ; col<row+1 ; col++){
//             cout << "* " ;
//         }
//         cout << endl ;
//     } 
//     return 0 ;
// }




// A program to print inverted full pyramid......

// #include<iostream>
// using namespace std ;

// int main(){

//     int n ;
//     cout << " Enter the value of n : " ;
//     cin >> n ;

//     for (int row=0 ; row<n ; row++){

//         // For printing space....
//         for (int col=0 ; col<row ; col++){
//             cout << " " ;
//         }
//         // For printing stars....
//         for (int col=0 ; col<n-row ; col++){
//             cout << "* " ;
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }




// A program to print diamond pattern........

// #include<iostream>
// using namespace std ;

// int main(){

//     int num ;
//     cout << "Enter the value of num : " ;
//     cin >> num ;
//     int n = num/2 ;

//     for (int row=0 ; row<n ; row++){

//        // For printing space....
//        for (int col=0 ; col<n-row-1 ; col++){
//              cout << " " ;
//      }
//        // For printing stars....
//          for (int col=0 ; col<row+1 ; col++){
//              cout << "* " ;
//         }
//         cout << endl ;
//    } 

//     for (int row=0 ; row<n ; row++){

//         // For printing space....
//         for (int col=0 ; col<row ; col++){
//             cout << " " ;
//         }
//         // For printing stars....
//         for (int col=0 ; col<n-row ; col++){
//             cout << "* " ;
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }



// // A program to print hollow pyramid.....


//  #include<iostream>
//  using namespace std ;

//  int main(){

//      int n ;
//      cout << " Enter the value of n : " ;
//      cin >> n ;

// for (int row=0 ; row<n ; row++){

//          // For printing space....
//                   for (int col=0 ; col<n-row-1 ; col++){
//              cout << " " ;
//         }
//         // For printing stars....
//          for (int col=0 ; col<row+1 ; col++){
//             //For printing stars for first and last col
//             if( col==0 || col==row+1-1){
//              cout << "* " ;
//              }
//              else{
//                 cout << "  " ;
//              }
//          }
//          cout << endl ;
//      } 
//     return 0 ;
// }



// A program to print inverted hollow pyramid.....


//  #include<iostream>
//  using namespace std ;

//  int main(){

//     int n ;
//      cout << " Enter the value of n : " ;
//     cin >> n ;

//      for (int row=0 ; row<n ; row++){

//          // For printing space....
//          for (int col=0 ; col<row ; col++){
//              cout << " " ;
//          }
//          // For printing stars....
//          for (int col=0 ; col<n-row ; col++){
//             if( col==0 || col==n-row-1){
//              cout << "* " ;
//              }
//               else{
//                  cout << "  " ;
//               }
//          }
//          cout << endl ;
//      }
//      return 0 ;
//  }



// A program to print inverted hollow diamond......

//  #include<iostream>
//  using namespace std ;

//  int main(){

//      int n ;
//      cout << " Enter the value of n : " ;
//      cin >> n ;

// for (int row=0 ; row<n ; row++){

//          // For printing space....
//                   for (int col=0 ; col<n-row-1 ; col++){
//              cout << " " ;
//         }
//         // For printing stars....
//          for (int col=0 ; col<row+1 ; col++){
//             //For printing stars for first and last col
//             if( col==0 || col==row+1-1){
//              cout << "* " ;
//              }
//              else{
//                 cout << "  " ;
//              }
//          }
//          cout << endl ;
//      }
//      for (int row=0 ; row<n ; row++){

//          // For printing space....
//          for (int col=0 ; col<row ; col++){
//              cout << " " ;
//          }
//          // For printing stars....
//          for (int col=0 ; col<n-row ; col++){
//             if( col==0 || col==n-row-1){
//              cout << "* " ;
//              }
//               else{
//                  cout << "  " ;
//               }
//          }
//          cout << endl ;
//      } 
//     return 0 ;
// }



// A  program to print flipped solid diamond....


// #include<iostream>
// using namespace std ;

// int main (){

//     int num = 8 ;
//     int n = 4 ;

//     for(int row=0 ; row<n ; row=row+1){

//         // Inverted pyramid 1....
//         for(int col=0 ; col<n-row ; col=col+1){
//             cout << "*" ;
//         }
//         // Full pyramid.......
//          for(int col=0 ; col<2*row+1 ; col=col+1){
//             cout << " " ;
//         }
//         // Inverted pyramid 2......
//         for(int col=0 ; col<n-row ; col=col+1){
//             cout << "*" ;
//         }
//         cout << endl ;
//     }
//     for(int row=0 ; row<n ; row=row+1){

//         // Inverted pyramid 1....
//         for(int col=0 ; col<row+1 ; col=col+1){
//             cout << "*" ;
//         }
//         // Full pyramid.......
//          for(int col=0 ; col<2*n-2*row-1 ; col=col+1){
//             cout << " " ;
//         }
//         // Inverted pyramid 2......
//         for(int col=0 ; col<row+1 ; col=col+1){
//             cout << "*" ;
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }



// A program to print fancy pattern 1......

//                  1
//                  2*2
//                  3*3*3
//                  4*4*4*4

// #include<iostream>
// using namespace std;

// int main(){

//     int n ;
//     cout << "Enter the value of n : " ;
//     cin >> n ;
//     // outer loop
//     for(int row=0 ; row<n ; row++){
//         //inner loop
//         for(int col=0 ; col<2*row+1 ; col++){
//             if(col%2==1){
//                 cout << "*" ;
//             }
//             else{
//                 cout << row+1 ;
//             }
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }



// A program to print hollow inverted half pyramid.....

//          *   *   *   *   *   *   
//          *               *
//          *           *
//          *       *
//          *   *
//          *

// #include<iostream>
// using namespace std ;

// int main(){

//     int n ;
//     cout << "Enter the value of n : " ;
//     cin >> n ;

//     for(int row=0 ; row<n ; row++){
//          for(int col=0 ; col<n-row ; col++){
//             if(row==0 || row==n-1){
//                 cout << "*" ;
//             }
//             else{
//                 if(col==0 || col==n-row-1){
//                     cout << "*" ;
//                 }
//                 else{
//                     cout << " " ;
//                 }
//             }
//          }
//          cout << endl ;
//     }
//     return 0 ;
// }



// WAP to print the following pattern.....

//          A   B   A
//          A   B   C   B   A
//          A   B   C   D   C   B   A
//          A   B   C   D   E   D   C   B   A

#include <iostream>
using namespace std;

int main() {

	int n;
    cout << "Enter the value of n : " ;
	cin >> n;

	for(int row=0; row<n; row=row+1) {
		char ch;
		for(int col=0; col<row+1; col=col+1) {
			int number = col+1;
			 ch = number + 'A' -1;
			cout << ch;
		}

		//jab tak A tk nahi pohochte
		//tab tk print krenge 

		for(char alphabet = ch; alphabet>'A'; ) {
			alphabet= alphabet-1;
			cout << alphabet;
		}
		cout << endl;
	}
    return 0 ;
}
