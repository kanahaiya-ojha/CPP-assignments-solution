//10. Write a C++ program to add all the numbers of an array of size 10
#include <iostream>
using namespace std;
int main ()
{
   float arr[10] , sum = 0 ;
   cout << "Enter 10 numbers : " ;
   for(int i=0 ; i<10 ; i++)
   cin >> arr[i] ;
   for(int i=0 ; i<10 ; i++)
   sum = sum + arr[i] ;
   cout << "The sum is " << sum ;
   return 0;
}