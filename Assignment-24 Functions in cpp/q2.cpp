//WAP to find the highest value digit in a given number
#include<iostream>
using namespace std;
int findMaxdigit(int x)
{
    int max=-1;
    while(x!=0)
    {
        int rem=x%10;
        if(rem>max)
            max=rem;
            x=x/10;
        
    }
return max;
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    cout<<findMaxdigit(n);
    return 0;
}