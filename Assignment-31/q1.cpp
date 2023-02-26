/*1. Define a class Person with instance members name and age.

 Also define member functions setName(), setAge(), getName(), getAge().
 Now define class Employee by inheriting Person class. In the Employee
 class define empid and salary as instance members.
 Also define setEmpid, setSalary, getEmpid, getSalary*/

#include<iostream>
using namespace std;
class Person
{
    protected:
    int age;
    char name[50];
    public:
    void setName()
    {
cout<<"\nEnter name :";
cin>>name;
    }
    void setAge()
    {
cout<<"\nEnter age:";
cin>>age;
    }
    void getName()
    {
cout<<"\nName:"<<name;
    }
    void getAge()
    {
cout<<"\nage:";
    }
};
class Employee:public Person
{
protected:
int empid,salary;
public:

void setEmpid()
{
cout<<"Enter Empid:";
cin>>empid;
}
void setSalary()
{
cout<<"Enter salary:";
cin>>salary;
}
void getEmpid()
{
cout<<"Empid:"<<empid;
}
void getSalary()
{
cout<<"salary:"<<salary;
}

};
int main()
{
    Employee e1;
    e1.setName();
    e1.setAge();
    e1.setEmpid();
    e1.setSalary();
    e1.getName();
    e1.getEmpid();
    e1.getAge();
    e1.getSalary();
    return 0;
}

