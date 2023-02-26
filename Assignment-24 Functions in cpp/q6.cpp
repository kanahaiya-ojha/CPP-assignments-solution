//define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swapint(int &p,int &q)
{
    int temp=p;
    p=q;
    q=temp;
}
int main()
{
    int x=4,y=5;
    swapint(x,y);
    cout<<"After swapping x="<<x<<"y="<<y;
    return 0;
}
