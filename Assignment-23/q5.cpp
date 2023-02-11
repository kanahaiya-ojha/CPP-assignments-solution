//5. Write a C++ program to calculate the volume of a cuboid
#include <iostream>
using namespace std;
int main()
{
    float l , b , h ;
    cout << "Enter length , breadth and height of cuboid : ";
    cin >> l >> b >> h ;
    cout << "\nThe volume of cuboid is " << l*b*h ;
    return 0;
}