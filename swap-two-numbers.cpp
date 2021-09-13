/*
Question: Write a C++ program to swap two numbers.
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10,c;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    c=a;
    a = b;
    b = c;
    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
