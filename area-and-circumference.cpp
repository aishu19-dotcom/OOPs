/*
Question: Write a C++ program to find the area and the circumference of the circle.
*/
#include <iostream>
using namespace std;
#define PI 3.141
int main(){
    float radius, area, circumference;
    cout << "Enter radius of circle:";
    cin >> radius;
    area = PI*radius*radius;
    cout << "Area of circle : " << area;
    circumference = 2*PI*radius;
    cout << "\nCircumference of the circle:"<<circumference;
    return 0;
}
