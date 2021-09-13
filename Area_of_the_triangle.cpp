/*
Question: Write a C++ program to find the area of the triangle
*/
#include <iostream>
using namespace std;
int main() {
    int height, base;
    float area;
    cout<<"Enter height and base :";
    cin>>height>>base;
    area= (0.5)*height*base;
    cout<<"Area is:"<<area;
	return 0;
}
