// SwitchCase example program .......

#include<iostream>
using namespace std;

int main(){

    float a , b ;
    cout << "Enter two numbers : " << endl ;
    cin >> a >> b ;
    int op ;
    cout << "What operation you want to do ?" << endl ;
    cin >> op ;
    float ans = 0 ;

    // OP 0 -> add , 1 -> sub , 2 -> product , 3 -> divide , invlaid operation ...

    // if(op == 0 ){
    //     ans = a + b ;
    // }
    // else if (op == 1){
    //     ans = a - b ;
    // }
    // else if (op == 2 ){
    //     ans = a * b ;
    // }
    // else if (op == 3){
    //     ans = a / b ;
    // }
    // else {
    //     cout << "Invalid operation." << endl ;
    //     return 0 ;
    // }
    
    // cout << "Your answer is : " << ans << endl ;
    // return 0 ;


    // SWITCHCASE

    switch (op){
        case 0 :
            cout <<"Add Case" << endl ;
            ans = a + b ;
            break ;

            case 1 :
            cout <<"Subtract Case" << endl ;
            ans = a - b ;
            break ;

            case 2 :
            cout <<"Multiply Case" << endl ;
            ans = a * b ;
            break ;

            case 3 :
            cout <<"Divide Case" << endl ;
            ans = a / b ;
            break ;
        
        default :
        cout << "Invalid operation." << endl ;
        return 0 ;   
    }
    cout << "Your answer is : " << ans << endl ;
    return 0 ;
}
