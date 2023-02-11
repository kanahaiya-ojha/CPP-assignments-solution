//8. Write a C++ program to swap values of two int variables without using third variable
#include <iostream>
using namespace std;
int main()
{
    float a , b ;
    cout << "Enter two numbers : ";
    cin >> a >> b ;
    a = a + b ;
    b = a - b ;
    a = a - b ;
    cout << "Swapped numbers are " << a << " " << b ;
    return 0;
}