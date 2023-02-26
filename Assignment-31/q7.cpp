/*Write class declarations and member function definitions for a C++ base class to
 represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code. Output*/
#include<iostream>
using namespace std;
class Employee
{
    protected:

    char empName[20];
    public:
    int empCode;
    void set()
    {
    cout<<"Enter Employee Number :"<<endl;
    cin>>empCode;
    cout<<"Enter Employee name :"<<endl;
    cin>>empName;
    }
};
class Fulltime:public Employee
{
    protected:
    float dailyRate,salary;
    int NoDays;
    public:
   void setData()
   {
    cout<<"Enter daily Rate :"<<endl;
    cin>>dailyRate;

    cout<<"Enter No of days :"<<endl;
    cin>>NoDays;
   }
   void cal()
   {
salary=dailyRate*NoDays;
cout<<"\n Salary :"<<salary;
   }
   void show()
   {
    cout<<"------------------------------------\n";
    cout<<"\n Employee Number : "<<empCode;
    cout<<"\n Emoloyee Name   : "<<empName;
    cout<<"\n Salary          : "<<salary;
    cout<<"\n Status          :  Fulltime";
    cout<<"\n------------------------------------\n";

   }
};
class Parttime:public Employee
{
protected:
float workingHrs,hrsRate,salary1;
public:
void set1()
{
    cout<<"\n Enter hourly Rate : ";
    cin>>hrsRate;
    cout<<"\n Enter working hours: ";
    cin>>workingHrs;


}
void cal1()
{
    salary1=hrsRate*workingHrs;
    cout<<"\n Salary : "<<salary1<<endl;
}
 void show1()
   {
    cout<<"------------------------------------\n";
    cout<<"\n Employee Number : "<<empCode;
    cout<<"\n Emoloyee Name   : "<<empName;
    cout<<"\n Salary          : "<<salary1;
    cout<<"\n Status          :  Parttime";
    cout<<"\n------------------------------------\n";

   }

};
int main()
{
    int var=0;
    int var1=0;
    Fulltime f1[5];
    Parttime p1[5];
    int choice,i;
    do{
        cout<<"\n 1.Enter records\n 2.Display records \n 3.Search record \n 4.Quit\n";
        cout<<"enter your choice :";
        cin>>choice;
       switch(choice)
       {
        case 1:
        int y;
        cout<<"\n1.Fulltime Employee";
        cout<<"\n2.Parttime Employee";
         cout<<"\n Enter: ";
         cin>>y;
         switch(y)
         {
            case 1:
            f1[var].set();
            f1[var].setData();
            f1[var].cal();
            var++;
            break;
            case 2:
            p1[var1].set();
            p1[var1].set1();
            p1[var1].cal1();
            var1++;
            break;


         }
         break;
         case 2:
         for(i=0;i<=var;i++)
         {
            f1[i].show();
         }
         for(i=0;i<=var1;i++)
         {
            p1[i].show1();
         }
         break;
         case 3:
         int a;
         cout<<"\n Enter Employee No. :";
         cin>>a;
         for(int i=0;i<var;i++)
         {
            if(f1[i].empCode==a)
            {
                f1[i].show();
            }
            if(p1[i].empCode==a)
            {
            p1[i].show1();
            }


         }


       }

    }while(choice!=4);
}
