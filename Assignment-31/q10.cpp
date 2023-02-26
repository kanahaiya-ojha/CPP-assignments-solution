#include<iostream>
#include<cstring>
using namespace std ;
class worker
{
    protected:
        int code ;
        char name[50];
        char name[50] ;
        float salary ;
    public:
        void setDetails1()
        worker(){}
        worker (int c , char *n , float s)
        {
            cout << endl << "-------------------------------------- " << endl ;  
            fflush(stdin);
            cout << "\nEnter Code    :   " ;
            cin >> code ;
            cout << "\nEnter Name    :   " ;
            fflush(stdin);
            fgets(name,50,stdin);
            int len = strlen(name);
            if (len > 0 && name[len - 1] == '\n')
            name[len - 1] = '\0';
            fflush(stdin);
            cout << endl << "Enter Salary  :   " ;
            cin >> salary ;
            code = c ;
            strcpy(name , n) ;
            salary = s ;
        }
};
class officer
{
    protected:
        float DA ,HRA ;
    public:
        void setDetails2()
        officer(){}
        officer (float d , float h)
        {   
            cout << endl << "Enter DA      :   " ;
            cin >> DA ;
            cout << endl << "Enter HRA     :   " ;
            cin >> HRA ;     
            DA = d ;
            HRA = h ;
        }
};
class manager : public worker , public officer
{
    private:
        float TA , gross_salary ;
    public:
        manager(){}
        manager (int c , char *n , float s , float d , float h) : worker(c , n , s) , officer(d , h)
        {}
        float getTA()
        {
            TA = ( 10 * salary ) / 100.0 ;
            return TA ;
        }
        float getGrossSalary()
        {
            gross_salary = salary + DA + HRA + getTA() ;
            return gross_salary ;
        }
        void display()
        {
            cout << endl << "--------------------------------------" << endl ;  
            cout << "Manager Information" ;
            cout << endl << "--------------------------------------" << endl ; 
            cout << endl << "Code             :   " << code ;
            cout << endl << "Name             :   " << name ;
            cout << endl << "Salary           :   " << salary ;
            cout << endl << "DA               :   " << DA ;
            cout << endl << "HRA              :   " << HRA ;
            cout << endl << "TA               :   " << getTA() ;
            cout << endl << "Gross Salary     :   " << getGrossSalary() ;
            cout << endl << "--------------------------------------" << endl ;
        }
};
int main () 
{
    int n ;
    int n , code ;
    char name[50];
    float salary , DA , HRA ;
    cout << "Enter Manager Count : " ;
    cin >> n ;
    cout << endl << "Enter worker information for " << n ;
    manager b[n] ;
    manager *b ;
    b = new manager[n] ;
    for (int i = 0 ; i < n ; i++)
    {
        b[i].setDetails1();
        b[i].setDetails2();
        cout << endl << "Enter worker information for " << i+1 ;
        cout << endl << "-------------------------------------- " << endl ;  
            fflush(stdin);
            cout << "\nEnter Code    :   " ;
            cin >> code ;
            cout << "\nEnter Name    :   " ;
            fflush(stdin);
            fgets(name,50,stdin);
            int len = strlen(name);
            if (len > 0 && name[len - 1] == '\n')
            name[len - 1] = '\0';
            fflush(stdin);
            cout << endl << "Enter Salary  :   " ;
            cin >> salary ;
            cout << endl << "Enter DA      :   " ;
            cin >> DA ;
            cout << endl << "Enter HRA     :   " ;
            cin >> HRA ;
            b[i] = manager(code , name , salary , DA , HRA) ;
    }
    for (int i = 0 ; i < n ; i++)
    b[i].display();
    return 0 ; 
}