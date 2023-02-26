/*6. Write a C++ program to demonstrate how a common friend function
can be used to exchange the private values of two classes. 
(Use call by reference method).*/
#include<iostream>
using namespace std;
class B;//forward decl.
class A
{
private:
int num1;
public:
A()
{
num1=10;
}
void show()
{
cout<<"\n Value of Number 1:"<<num1;
}
friend void swap(A &num1,B &num2);

};
class B
{
private:
int num2;
public:
B()
{
num2 =20;
}
void show()
{
cout<<"\n Value of Number 2 :"<<num2;
}
friend void swap(A &num1,B &num2);


};
void swap(A &no1,B &no2)
{
int no3;
no3=no1.num1;
no1.num1=no2.num2;
no2.num2=no3;
}
int main()
{
A a;
B b;
swap(a,b);
a.show();
b.show();
return 0;
}