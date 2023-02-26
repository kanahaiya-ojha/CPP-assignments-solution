/*4. Write a C++ program to design a base class Person (name, address, phone_no). Derive a class Employee (eno, ename) from Person.
 Derive a class Manager (designation, department name, basic-salary) from Employee. Write a menu driven program to:
a. Accept all details of 'n' managers. b. Display manager having highest salary*/
#include<iostream>
using namespace std;
class person
{
protected:
    char pname[50];
    long long int ph;
    char add[20];

};
class emp:public person
{

public:
char eno;
char ename[50];


};
class manager:public emp
{
public:
     char desig[50];
     char department[100];
     float basicSalary;

void getManager()
{
    cout<<"\nEnter details of manager ";
    cout<<"------------------------------";
    cout<<"\nEnter employee no. :";
    cin>>eno;


    cout<<"\nEnter Name:";
    cin>>ename;
    cout<<"\nEnter address:";
    cin>>add;
     cout<<"\nEnter phoe number:";
     cin>>ph;

    cout<<"\nEnter designation:"<<endl;
    cin>>desig;
    cout<<"\nEnter department name:"<<endl;
    cin>>department;
    cout<<"\nEnter Basic salary:"<<endl;
    cin>>basicSalary;

}
};
int main()
{
    int i,cnt,temp;
   manager man[100];
   cout<<"How many Managers you want to Enter?  :";
   cin>>cnt;
   for(i=1;i<=cnt;i++)
   {
    man[i].getManager();
   }
   temp=0;
   for(i=1;i<=cnt;i++)
   {
    if(man[temp].basicSalary < man[i].basicSalary)
    temp=i;

   }
   cout<<"\n manager with highest salary is : "<<man[temp].basicSalary;
   cout<<"\n And ,Manager Name is :"<<man[temp].ename;
   return 0;


}
