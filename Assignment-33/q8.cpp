/*8. Create a base class called proof. Use this class to store two int type values that could 
be used to prove that triangle is a right angled triangle. Create a class compute which will
 determine whether a triangle is a right angled triangle.
Using these classes, design a program that will accept 
dimensions of a triangle, and display the result.
(Summary: Prove that triangle is a right angled triangle using pythagoras theorem).*/
#include<iostream>
using namespace std;
class proof
{
    int h,b,p;
    public:
    void compute(int h,int b,int p)
    {
        if(h*h==b*b+p*p)
        cout<<"yes";
        else
        cout<<"no";
    }
};
int main()
{
    proof p1;
    p1.compute(2,3,4);

    return 0;
}