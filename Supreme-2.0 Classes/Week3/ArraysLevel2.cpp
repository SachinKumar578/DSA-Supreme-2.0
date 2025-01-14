// Q1 :- Find unique element..
// #include<iostream>
// using namespace std ;

// int getUnique(int arr[] ,int arrSize){
//     int ans = 0 ;
//     for(int i=0 ; i<arrSize ; i++){
//         // finding unique element using XOR operator.
//         ans = ans^arr[i];
//     }
//     return ans ;
// }
// int main(){
//     int arr[]={2,10,11,13,10,2,15,13,15};
//     int arrSize = 9 ;
//     int finalAns = getUnique(arr,arrSize);
//     cout <<"The unique element is : " << finalAns << endl ;
//     return 0 ;
// }


// Q2 :- Print all pairs.
// #include<iostream>
// using namespace std ;

// int main(){
//     int arr[] = {10,20,30};
//     int arrSize = 3 ;


//     for(int i=0 ; i<arrSize ; i++){
//         for(int j=0 ; j<arrSize ; j++){
//             cout << arr[i] << "," << arr[j] << endl ;
//         }
//         cout << endl ;
//     }

// }


// Q3 :- Sort 0's and 1's.

// #include<iostream>
// using namespace std ;
// void sortZeroOne(int arr[], int arrSize){
//     int zeroCount = 0 ;
//     int oneCount = 1 ;
//     // count zero and one (0 and 1)
//     for(int i=0 ;i<arrSize ; i++){
//         if(arr[i]==0){
//             zeroCount ++ ;
//         }
//         if(arr[i]==1){
//             oneCount ++ ;
//         }
//     }
//     // place all 0's first
//     int i ;
//     for(i=0 ; i<zeroCount ; i++){
//         arr[i] = 0 ;
//     }
//     for(int j=i ; j<arrSize ; j++){
//         arr[j] = 1 ;
//     }
// }
// int main(){
//     int arr[] = {0,0,0,1,1,1,0,1,0,1,0,1,1,1,0,1} ;
//     int arrSize = 16 ;
//     sortZeroOne(arr,arrSize);
//     //printing the array
//     for(int i=0 ; i<arrSize ; i++){
//         cout << arr[i] << " " ;
//     }
// }


// Q4 :- Shift arrays element by 1

#include<iostream>
using namespace std ;
void shiftArray(int arr[],int arrSize){
    //step 1
    int temp = arr[arrSize-1];
    // step 2
    // shift = arr[i]=arr[i-1]
    for(int i=arrSize-1 ; i>=1 ; i--){
        arr[i]=arr[i-1];
    }
    // step 3 : copy temp to arr[0]
    arr[0] = temp ;
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int arrSize = 6 ;

    shiftArray(arr,arrSize);
    // printing
    for(int i=0 ; i<arrSize ; i++){
        cout << arr[i] << " " ;
    }
}