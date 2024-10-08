// Print My name 11 times......

// #include<iostream>
// using namespace std;

// int main() {
//     for (int i=0 ; i<=11 ; i=i+1){
//         cout << i << ". Sachin" << endl ;
//     }
//     return 0 ;
// }


// Program to print 19 table..........

// #include<iostream>
// using namespace std;

// int main() {
//      for (int i=1 ; i<=10 ; i=i+1){
//         int table = 19*i ;
//         cout << table << endl ;
//     }
//     return 0 ;
// }


// A program to print even numbers from 1 to 10........

// #include<iostream>
// using namespace std;

// int main() {
//     for (int i=0 ; i<=100 ; i++){
//         if (i%2 == 0)
//         cout << i << endl ;
//     }
//        return 0 ;
// }



// A program to print square pattern.......

// #include<iostream>
// using namespace std;

// int main(){
//     for (int i=1 ; i<=4 ; i++){
//         for(int j=1 ; j<=4 ; j++){
//             cout << "* " ;
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }



// A program to print rectangle pattern........

// #include<iostream>
// using namespace std ;

// int main(){
//     // outer loop , to print rows
//     for(int i=0 ; i<3 ; i=i+1){

//         // inner loop to print stars
//         for(int j=0 ; j<8 ; j=j+1){
//             cout <<"* ";
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }



// A program to print hollow rectangle pattern........

// #include<iostream>
// using namespace std ;

// int main(){
//     for(int row=0 ; row<5 ; row=row+1){
//         for(int col=0 ; col<10 ; col=col+1){
//             if(row==0 || row==4){
//                 cout << "* " ;
//             }
//             else if(col==0 || col==9){
//                 cout <<"* " ;
//             }
//             else{
//                 cout <<"  " ;
//             }    
//         }
//          cout << endl ;
//      }
//     return 0 ;
// }



// A program to print half pyramid.........

// #include<iostream>
// using namespace std ;

// int main(){
//     int n ;
//     cout <<"Enter number of rows : " ;
//     cin >> n ;

//     for(int row=0 ; row<n ; row=row+1){
//         for(int col=0 ; col<row+1 ; col=col+1){
//             cout << "* " ;
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }




// A program to print inverted half pyramid.....

// #include<iostream>
// using namespace std ;

// int main(){
//     int n ; 
//     cout << "Enter the number of rows : " ;
//     cin >> n ;
//     for(int row=0 ; row<n ; row=row+1){
//         for(int col=0 ; col<n-row ; col=col+1){
//             cout << "* " ;
//         }
//         cout << endl ;
//     }
//     return 0 ;
//     }



// A program to print numeric half pyramid......

// #include<iostream>
// using namespace std ;

// int main(){
//     int n ;
//     cout << "Enter the value of rows : " ;
//     cin >> n ;

//     for(int row=0 ; row<n ; row=row+1){
//         for(int col=0 ; col<row+1 ; col=col+1){
//             cout << col+1 << " " ;
//         }
//         cout << endl ;
//     }
//     return 0 ;
//     }



// A program to print inverted numeric half pyramid......

#include<iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the value of rows : " ;
    cin >> n ;

    for(int row=0 ; row<n ; row=row+1){
        for(int col=0 ; col<n-row ; col=col+1){
            cout << col+1 << " " ;
        }
        cout << endl ;
    }
    return 0 ;
    }
