// CPP In-Built Functions...


// C++ program to illustrate the sqrt() function....
// #include<cmath>
// #include<iostream>
// using namespace std ;

// int main(){

//     double x ;
//     cin >> x ;
//     double answer ;

//     answer = sqrt(x) ;
//     cout << answer << endl ;
//     return 0 ;

// }


// // C++ program to illustrate the pow() function
// #include <cmath>
// #include <iostream>
// using namespace std;

// int main()
// {
//     int base ;
//     int exponent ;

//     cout << "Enter base and exponent : " << endl ;
//     cin >> base >> exponent ;

//     int answer = pow(base, exponent);

//     cout << answer << endl;

//     return 0 ; 
// }


// C++ sort() function example program....


#include<iostream>
#include<algorithm>
using namespace std ;

int main (){

    int arr[] = {4,6,2,8,7,1,3};
    int n = sizeof(arr) / sizeof(arr[0]) ;

    sort(arr , arr+n);

    for(int i=0 ; i<n ; ++i){
        cout << arr[i] << " " ;
    }
    return 0 ;
}
