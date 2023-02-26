//define a function to calculate x raised to power y
#include<iostream>
using namespace std;
class power
{
    public:
    int x,y;

    void xPowY()
    {
        int res=1;
        while(y!=0)
        {
            y--;
            res=res*x;
        }
        cout<<"x power y is ="<<res;
    }
};
int main()
{
    power p1;
    cout<<"enter two number:";
    cin>>p1.x>>p1.y;
    p1.xPowY();
    return 0;
}
