//6. Write a C++ program to calculate an average of 3 numbers
#include <iostream>
using namespace std;
int main()
{
    float a , b , c ;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c ;
    cout << "\nThe average of three numbers is " << (a+b+c)/3.0 ;
    return 0;
}