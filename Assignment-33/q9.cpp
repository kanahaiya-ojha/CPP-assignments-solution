/*9. Create a base class called volume. Use this class to store two double type values 
that could be used to compute the volume of figures. Derive two specific classes called 
cube and sphere from the base shape. Add to the base class, a member function get_data()
 to initialise base class data members and another member function display_volume() to 
 compute and display the volume of figures. Make display_volume() as a virtual function 
 and redefine this function in the derived classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a cube ora
sphere interactively, and display the volume.*/
#include<bits/stdc++.h>
using namespace std ;
class volume
{
    private:
        double x , y ;
    public:
        void setData(double a , double b = 3.14)
        {
            x = a ;
            y = b ;
        }
        double getX() { return x ; }
        double getY() { return y ; }
        virtual void display() = 0 ;
}; 
class cube : public volume
{
    private:
        double vol ;
    public:
        void display()
        {
            cout << "Volume of cube whose side is " << getX() << " is " << pow(getX(),3) << endl ;
        }
};
class sphere : public volume
{
    private:
        double vol ;
    public:
        void display()
        {
            cout << "Volume of sphere whose radius is " ;
            cout << getX() << " is " << (4 * getY() * pow(getX(),3)) / 3.0 << endl ;
        }
};
int main () 
{
    double side , radius ;
    cout << "\nEnter side of cube : ";
    cin >> side ;   
    cube c ;
    c.setData(side);
    c.display();
    cout << "\nEnter radius of circle : " ;
    cin >> radius ;
    sphere s ;
    s.setData(radius);
    s.display();
    return 0 ; 
}