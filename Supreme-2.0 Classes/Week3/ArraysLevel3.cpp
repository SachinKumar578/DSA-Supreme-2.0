#include<iostream>
#include<limits.h>
#include<vector>
using namespace std ;


// row wise printing
// void printArray(int arr[4][4],int row , int col){
//     for(int i=0 ;i<row ; i++){
//         for(int j=0 ; j<col ; j++){
//             cout << arr[i][j] << " " ;
//         }
//         cout << endl ;
//     }
// }
//column wise printing
// void colWisePrint(int arr[3][4],int row , int col){
//     for(int i=0 ;i<col ; i++){
//         for(int j=0 ; j<row ; j++){
//             cout << arr[j][i] << " " ;
//         }
//         cout << endl ;
//     }
// }

// bool findTarget(int arr[3][4] , int row , int col , int target){
//     for(int i=0 ; i<row ; i++){
//         for(int j=0 ; j<col ; j++){
//             if(arr[i][j] == target){
//                 // if found , return true
//                 return true ;
//             }
//         }
//     }
//     return false ;
// }
// int findMax(int arr[3][4] , int row , int col){
//     int maxAns = INT_MIN ;

//     for(int i=0 ; i<row ; i++){
//         for(int j=0 ; j<col ; j++){
//             if(arr[i][j]>maxAns){
//             maxAns = arr[i][j]; 
//             }
//         }
//     }
//     return maxAns ;
// }

// int findMin(int arr[3][4] , int row , int col){
//     int minAns = INT_MAX ;

//     for(int i=0 ; i<row ; i++){
//         for(int j=0 ; j<col ; j++){
//             if(arr[i][j]<minAns){
//             minAns = arr[i][j]; 
//             }
//         }
//     }
//     return minAns ;
// }
// // row wise sum printing
// void rowWiseSum(int arr[3][4],int row , int col){
   
//     for(int i=0 ;i<row ; i++){
//          int sum = 0 ;
//         for(int j=0 ; j<col ; j++){
//             sum = sum + arr[i][j]  ;
//         }
//         cout << sum << endl ; 
       
//     }
// }
// //column wise sum printing
// void columnWiseSum(int arr[3][4],int row , int col){
//     for(int i=0 ;i<col ; i++){
//        int sum = 0 ;
//         for(int j=0 ; j<row ; j++){
//            sum = sum + arr[j][i]  ;
//         }
//         cout << "sum of column " << i <<" = "<< sum << endl ;
//     }
// }

// transpose of a matrix...
void transposeMatrix(int arr[4][4] , int row , int col){
    for(int i=0 ; i<row ; i++){
        for(int j=i ; j<col ; j++){
           swap(arr[i][j] , arr[j][i]) ;
        }
     
    }
}
int main(){
    // jagged array ......
    vector<vector<int>>brr ;

    vector<int>vec1(10,0);
    vector<int>vec2(5,1);
    vector<int>vec3(7,0);
    vector<int>vec4(8,1);
    vector<int>vec5(20,0);

    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

    for(int i=0 ; i<brr.size() ; i++){
        for(int j=0 ; j<brr[i].size() ; j++){
            cout << brr[i][j] << " " ;
        }
        cout << endl ;
    }
    // // Creating a 2D array using vector...
    // vector<vector<int>> arr(5,vector<int>(10,0));
    // // in a 2D vector array , row size = arr.size();
    // for(int i=0 ; i<arr.size() ; i++){
    //     for(int j=0 ; j<arr[i].size() ; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl ;
    // } 
    // vector
//     int arr[5] ;
//     vector<int>v(5);
//    cout <<"Size of vector : " << v.size() << endl ;

//    for(int i=0 ; i<v.size() ; i++){
//     cout << v[i] << " " ;
//    }
//    cout << endl ;

    // transpose of a matrix...
    // int arr[4][4] = {
    //      {1,2,3,4},
    //      {5,6,7,8},
    //      {9,10,11,12},
    //      {13,14,15,16}
    // } ;
    // int row = 4 ;
    // int col = 4 ;

    // cout << "Printing before transpose : " << endl ;
    // printArray(arr,row,col);

    // cout << "Doing tanspose : " << endl ;
    // transposeMatrix(arr , row , col) ;
    
    // cout << "Printing after transpose : " << endl ;
    //  printArray(arr,row,col);

        // column wise sum printing
    // int arr[3][4] = {
    //      {10,20,5,7},
    //      {2,4,6,8},
    //      {10,15,15,10}
    // } ;
    // int row = 3 ;
    // int col = 4 ;
    // columnWiseSum(arr , row ,col );
    
    // // row wise sum printing
    // int arr[3][4] = {
    //      {10,20,5,7},
    //      {2,4,6,8},
    //      {10,15,15,10}
    // } ;
    // int row = 3 ;
    // int col = 4 ;
    // rowWiseSum(arr , row ,col );
    
    // int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // } ;
    //  int row = 3 ;
    //  int col = 4 ;
    //  cout <<"The maximum number is : " << findMax(arr,row,col) << endl ;
    //   cout <<"The minimum number is : " << findMin(arr,row,col) << endl ;

//      int target = 8 ;
//    cout <<"found or not : " << findTarget(arr,row,col,target);

// int arr[3][3];
// int row = 3 ;
// int col = 3 ;
//     cout << "Enter the input for," << endl ;
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
    
//         cout <<"row index :" << i << " , Column index :" << j << " = ";
//         cin >>arr[i][j] ;
//     }
// }

   
// Printing a 2D array.
    //  int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // } ;

    // int row = 3 ;
    // int col = 4 ;

   // printArray(arr,row,col);
   // cout << endl ;
    // colWisePrint(arr,row,col);
    //  // creating a 2D array.
      // int arr[3][3];


    // // initializaing a 2D array..
    // // ye sahi chalega
    // int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // } ;

    // // ye bhi sahi chalega
    //  int brr[][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // } ;

    // // error throw karega qki last index must have bound
    // int crr[][] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // } ;

    // // error throw karega qki last index must have bound
    // int drr[][] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // } ;

    
}