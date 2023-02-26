//1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int checkPrimeNumber(int x)
{
    int flag=0;
    for(int i=2;i<x/2;i++)
    {

        if(x%i==0)
        {
            flag=1;
            break;
        }

    }
    if(flag==0)
    return 1;

}
int main()
{
int n;
cout<<"enter no. to check:";
cin>>n;
if(checkPrimeNumber(n)==1)
cout<<"number is prime";
else
cout<<"no is not a prime no";
return 0;
}
