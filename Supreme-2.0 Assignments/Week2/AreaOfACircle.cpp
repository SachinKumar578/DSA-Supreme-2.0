// WAP to find the area of a circle.

#include<iostream>
using namespace std;

float circle_area(float radius){
    float area = 3.14 * radius * radius ;
    return area ;
}

int main()
{
    float radius ;
    cout << "Enter the value of radius : " ;
    cin >> radius ;
    float area = circle_area(radius);
    cout << "Area of the circle is : " << area << endl ;
}
