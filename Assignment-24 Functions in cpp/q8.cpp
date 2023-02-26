/*8. Define overloaded functions to calculate area of circle, area of rectangle
 and area of triangle*/
 #include<iostream>
 using namespace std;
 class area
 {
    public:
    void printArea(int r)
    {
        cout<<"area of circle is ="<<3.14*r*r;
    }
    void printArea(int l,int w )
    {
       cout<<"area of ractangle is="<<l*w;
    }
    void printArea(int b,int h)
    {
        cout<<"area of circle is ="<<0.5*b*h;
    }

    
 };
 int main()
 {
    area a;
    a.printArea(5);
    return 0;
 }
