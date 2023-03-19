#include<iostream>
using namespace std;
class shape//base class
{
    protected:
    double l1,l2;
    public:
    void setData(double x,double y=0)
    {
        l1=x;
        l2=y;
    }

    virtual void displayArea()=0;


};
class triangle:public shape
{
    public:
    void displayArea()
    {
        double area=0.5*l1*l2;
        cout<<"area of triangle is="<<area<<endl;
    }


};
class rectangle :public shape
{
    public:
     void displayArea()
    {
        double area=l1*l2;
        cout<<"area of rectangle is="<<area<<endl;
    }

};

class circle :public shape
{
    public:
    void displayArea()
    {
        double area=3.14*l1*l1;
        cout<<"area of circle is="<<area<<endl;

    }

};

int main()
{
    rectangle r;
    r.setData(4,5);
    r.displayArea();

    triangle t;
    t.setData(4,5);
    t.displayArea();

    circle c;
    c.setData(5);
    c.displayArea();

    return 0;
}