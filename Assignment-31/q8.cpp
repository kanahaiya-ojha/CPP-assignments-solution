/*8 - In a bank, different customers have savings account. Some customers may have taken
 a loan from the bank. So bank always maintain information about bank depositors 
 and borrowers.
Design a Base class Customer (name, phone-number). Derive a class 
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’ customers.*/
#include<iostream>
#include<cstring>
using namespace std ;
class Customer
{
    protected:
        long long phone_no ;
        char name[50];
};
class Depositor : public Customer
{
    private:
        long long acc_no ;
        float balance ;
    public:
        void setDetails1()
        {   
            fflush(stdin);
            cout << "\nEnter Customer Name         : " ;
            fflush(stdin);
            fgets(name,50,stdin);
            int len = strlen(name);
            if (len > 0 && name[len - 1] == '\n')
            name[len - 1] = '\0';
            fflush(stdin);
            cout << "Enter Customer Phone No.    : " ;
            cin >> phone_no ;
            fflush(stdin);
            cout << "Enter Customer A/c No.      : " ;
            cin >> acc_no ;
            fflush(stdin);
            cout << "Enter Balance               : " ;
            cin >> balance ;
        }
        void display1()
        {
            cout << endl << "Details of Customer" << endl ;
            cout << endl << "------------------------------" << endl ;
            cout << endl << "Customer Name            :   " << name ;
            cout << endl << "Customer Phone No.       :   " << phone_no ;
            cout << endl << "Customer A/c No.         :   " << acc_no;
            cout << endl << "Balance                  :   " << balance;
            cout << endl << "------------------------------" << endl ;
        }
};
class Borrower : public Depositor
{
    private:
        int loan_no , loan_amount ;
    public:
        void setDetails2()
        {
            fflush(stdin);
            cout << "Enter Loan no.              : " ;
            cin >> loan_no;
            fflush(stdin);
            cout << "Enter Loan amount           : " ;
            cin >> loan_amount ;
            cout << endl << "-----------------------------------" << endl ;
        }
        void display2()
        {
            cout << endl << "Loan No.                 :   " << loan_no ;
            cout << endl << "Loan Amount              :   " << loan_amount ;
            cout << endl << "------------------------------" << endl ;
        }
};
int main () 
{
    int n ;
    cout << "Enter No. of customer details you want : " ;
    cin >> n ;
    Borrower b[n];
    for (int i = 0 ; i < n ; i++)
    {
        b[i].setDetails1();
        b[i].setDetails2();
    }
    system("cls");
    for (int i = 0 ; i < n ; i++)
    {
        b[i].display1();
        b[i].display2();
    }
    return 0 ; 
}