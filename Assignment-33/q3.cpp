// 3. Using the concept of pointers, write a function that swaps the private data values
//  of two objects of the same class type.
#include<iostream>
using namespace std;
class A
{
    private:
    int num1;
    public:
    A(int n)
    {
        num1=n;
    }
    void show()
    {
        cout<<"\nvalue="<<num1<<endl;
    }
    void swap(A *n2)
    {
        int n3;
        n3=num1;
        num1=n2->num1;
        n2->num1=n3;
    }
};

int main()
{
    A p(30);
    A c(40);
    cout<<"before swapping\n";
    p.show();
    c.show();
    p.swap(&c);
    cout<<"after swapping\n";
    p.show();
    c.show();





    return 0;
}