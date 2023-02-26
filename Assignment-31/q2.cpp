/*2. Write a C++ program to add two numbers using single inheritance. Accept these two numbers from the user
in base class and display the sum of these two numbers in derived class.*/
#include<iostream>
using namespace std;
class base
{
protected:
    int x,y;
public:
    void input()
    {
        cout<<"Enter two number";
        cin>>x>>y;
    }

};
class derived:public base
{
public:
    void display()
    {

        cout<<"sum is = "<<x+y;
    }
};
int main()
{

    derived d1;
    d1.input();
    d1.display();
    return 0;
}
