// Week 3 , Class 2
// Arrays

#include<iostream>
#include<limits.h>
using namespace std ;

// void printArray(int arr[],int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i] <<" ";
//     }
//     cout<<endl;
// }

// present -> true;
//absent -> false;

// bool linearSearch(int arr[], int size, int target){
//     for(int i=0; i<size; i++){
//         if(arr[i] == target){
//             //found
//             return true;
//         }
//     }
//     // not found
//     return false;
// }
//  void countZeroOne(int arr[] , int size){
//     int zeroCount = 0 ;
//     int oneCount = 0 ;

//     for(int i=0 ; i<size ; i++){
//         if(arr[i]==0){
//             zeroCount++ ;
//         }
//          if(arr[i]==1){
//             oneCount++ ;
//         }
//     }
//     cout <<"zeroCount : " << zeroCount << endl ;
//     cout <<"oneCount : " << oneCount << endl ;
//      }


//   int findMinimumInArray(int arr[] , int size){
//     // ans store variable 
//     int minAns = INT_MAX ;

//     for(int i=0 ; i<size ; i++){
//         if(arr[i]<minAns){
//             minAns = arr[i];
//         }
//     }
//     return minAns ;
//   }

//void reverseArray(int arr[]  , int size){

    // using for loop
    // for(int left=0,right=size-1 ; left<=right ; left++,right--){
    //     swap(arr[left],arr[right]);
    // }
    

    // using while loop
//     int left = 0 ;
//     int right = size-1 ; 
//     while (left<=right)
//     {
//         swap(arr[left],arr[right]);
//         left++ ;
//         right -- ;
//     }

//     // printing the array
//     for(int i=0 ; i<size ; i++){
//         cout << arr[i] << " ";
//     }   
// }

void extremePrint(int arr[] , int size){
     int left = 0 ;
    int right = size-1 ; 
    while (left<=right)
    {
        if(left==right){
            cout << arr[left] << endl ;
        }
        else{
            cout << arr[left] << endl ;
        cout << arr[right] << endl ; 
        }
         left++ ;
        right --;
    }
}


int main(){

    int arr[6] = {20,10,16,18,25,45};
    int size = 6 ;

   // reverseArray(arr,size);

   extremePrint(arr,size);
    
    // int arr[] = {20,4,15,2,6,8,-11,16};
    // int size = 8 ;

    // int minimum = findMinimumInArray(arr,size) ;
    //     cout << "Minimum number is : " << minimum << endl ;
    


    // -2 to the power 31
    // cout << INT_MIN << endl ;

     // 2 to the power 31  - 1 ;
     // cout << INT_MAX << endl ;

    // count 0's and 1's in an array.
    // int arr[]={0,1,0,1,0,1,0,1,0,0,0,1,1,1,0,1};
    // // zeroCount = 8
    // // oneCount = 8
    // int size = 16 ;
    // countZeroOne(arr,size);
    

    // int arr[5]={2,4,6,8,10};
    // int size = 5;
    // int target = 6;

    // bool ans = linearSearch(arr,size,target);.
    // if(ans==1){
    //     cout<<"Target found"<<endl;
    // }
    // else{
    //     cout<<"Target not found"<<endl;
    // }

    //function call
  //  printArray(arr,size);

    // array creation
    // int arr[101];
    // char ch[102];
    // bool flags[223];
    // long num[90];
    // short snum[1000];
    //cout <<"Array created successfully" << endl ;


    //int arr[100];

    // int a = 5;
    // cout <<"Size of a : " << sizeof(a) << endl;
    // //cout << "Address of a is : " << &a << endl;

    // int arr[10];
    // cout <<"Size of arr : " << sizeof(arr) << endl;
    // cout << "Base address of arr is : " << &arr << endl;
    //  cout << "Base address of arr is : " << arr << endl;



    // int arr[] = {2,3,4,56,6}; // sahi chalega

    // int brr[5] = {1,2,3,4,5}; // sahi chalega

    // int crr[5] = {2,3}; // sahi chalega

    // int drr[2] = {1,2,3,4,5}; // error ayega bcz of access elements insetion in array...

    // int arr[5] = {5,8,9,12,13};

    // int n = 5 ;
    // for(int i=0 ; i<n ; i++){
    //     cout << arr[i] << "  ";
    // }

    // cout << arr[0] << endl ;
    // cout << arr[1] << endl ;
    // cout << arr[2] << endl ;
    // cout << arr[3] << endl ;
    // cout << arr[4] << endl ;


     // Taking input in an array....
    // int arr[5];
    // int n=5;
    // for(int i=0 ; i<n; i++){
    //     cout <<"Enter the value for index " <<i <<" :  ";
    //     cin >> arr[i];
             
    // }


    // // Printing an array..
    // cout <<"Printing the array" << endl;
    //   for(int i=0 ; i<n ; i++){
    //      cout << arr[i] << "  ";
    //  }


     
    //  // Array creation
    //  int arr[10];
    //  // taking input
    //  int n=10;  
    //  for(int i=0; i<n; i++){
    //     cin >> arr[i];
    //  }

    //  cout<<"Printing after taking input"<<endl ;

    //  //printing
    //  for(int i=0; i<n; i++){
    //     cout << arr[i] << " " ;
    //  }
    //  cout<<endl;
    //  // Doubling up the value..
    //   for(int i=0; i<n; i++){
    //     arr[i] = 2*arr[i] ;
    //  }
    //  // printing
    //  cout<<"Printing after doubling the value"<<endl ;
    //   for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    //  }



    // // Creating a 5 size array to print sum...
    // int arr[5];
    // //taking input in that array to print sum....
    //  int n=5; 
    //  cout <<"Enter the input values" <<endl; 
    //  for(int i=0; i<n; i++){
    //     cin >> arr[i];
    //  }
    //  // Calculating total sum..
    //   int sum=0;
    //   for(int i=0; i<n; i++){  
    //     sum = sum+arr[i] ;
    //  }
    //   // printing the total sum
    //    cout<<"The total sum is : "<< sum <<endl ;  


    // int arr[5]={2,4,6,8,10};
    // int target = 10;
    // int n = 5;

    // bool flag = 0;
    // // 0 -> not found
    // // 1 -> found

    // for(int i=0; i<n; i++){
    //     if(arr[i]==target){
    //         //found
    //         flag = 1;
    //         break;
    //     }
    // }
    // if(flag==1){
    //     cout<<"target found";
    // }
    // else{
    //     cout<<"target not found"<<endl;
    // }         
    
    return 0 ;
}