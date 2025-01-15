#include<iostream>
#include<vector>
using namespace std ;
void print(vector<int>v){
      cout << "Printing vector " << endl;
    int size = v.size();
    for(int i=0 ; i<size ; i++){
       // cout << v[i] << " " ;
      cout<< v.at(i) << " ";
    }
    cout << endl ;
}

void print2(vector<int>v){
      cout << "Printing vector method 2 : " << endl;
    for(auto it:v){
        cout << it << " " ;
    }
    cout << endl ;
}
int main(){

    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    print(v);
    print2(v);










    // vector<char>v ;

    // v.push_back('a');

    // v.push_back('b');

    // v.push_back('c');

    // cout << "Front element : " << v[0] << endl ;
    //  cout << "Front element : " << v.front() << endl ;
    // cout << "End element : " << v[v.size()-1] << endl ;
    // cout << "End element : " << v.back() << endl ;


    // vector initialization..
    // vector<int>arr ; // default with no data and 0 size vector initialization
    // vector<int>arr2(5,-1); // initialization with n size and specific data
    // arr2.push_back(50);
    // print(arr2);

    // vector<int>arr3 = {1,2,3,4,5}; // initialization with specific data
    // arr3.pop_back();
    // print(arr3);
    
    // vector<int>arr4{1,2,3,4,5}; // We can  write arr3 like this also.
    // arr4.pop_back();
    // print(arr4);

    // How to copy vector...
    // vector<int>arr5 = {1,2,3,4,5};
    // vector<int>arr6(arr5);
    // print(arr6);


    // in vector don't tell size of vector,
    // just keep inserting i will manage the allocation.
       // vector<int>v ;  // array hi hai

        // taking input from user in vector..
        // int n ;
        // cin >> n ;
        // for(int i=0 ; i<n ; ++i){
        //     int d ;
        //     cin >> d ;
        //     v.push_back(d);
        // }
        // print(v);
        // for(int i=0 ; i<10 ; ++i){
        //     v.push_back(80);
        // }

    // I want to clear the vector..
        // v.clear(); 
        // v.push_back(50); 
        // print(v);

        // //pop
        // v.pop_back();
        // print(v);

    // Insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print(v);
    
    // // POP -> DELETE -> vector me elements delete kaise hote hain
    // /// End side se elements delete hote hain.
    // // 1 -> 2 -> 3
    // v.pop_back();
    // print(v);

    // v.pop_back();
    // print(v);

    // v.pop_back();
    // print(v);

    //  v.pop_back();
    // print(v);

    // while(1){
        //     int d ; cin >> d ;
        //     v.push_back(d);
        //     cout << "Capacity: " << v.capacity() << " Size: " << v.size() << endl;
        // }
}

// #include<iostream>
// using namespace std ;
// void fun(int a[] , int n ){
//     cout <<"Array elements are : " ;
//     for(int i=0 ; i<n ;i++){
//         cout << a[i] << " " ;
//     }
// }
// int main(){
//     // static memory allocation of array
//     // int arr[5] = {1,2,3,4,5};
//     // fun(arr,5);


//     // dynamic memory allocation of array.
//     cout << "Enter the size of array : " ;
//     int n ;
//     cin >> n ;
//     cout << "Enter array elements : " ;
//     int *arr = new int [n];  // each element would be 0 or garbage.
//     // taking n elements input and inserting in array.
//     for(int i=0 ; i<n ;++i){
//         int data ;
//         cin >> data ;
//         arr[i] = data ;
//     }
//     // Let me try to insert more items 
//     for(int i=0 ; i<10 ; i++){
//         arr[n+i] = 80 ;
//     }
//     fun(arr,n);
// }