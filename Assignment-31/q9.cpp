/*9. Write a C++ program to implement the following class hierarchy:
Student: id, name StudentExam (derived from Student): Marks of 6 subjects StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.*/
#include<iostream>
#include<cstring>
using namespace std ;
class Student
{
    protected:
        int id ;
        char name[50];
};
class StudentExam : public Student
{
    protected:
        int m1 , m2 , m3 , m4 , m5 , m6 ;
    public:
        void setDetails()
        {   
            cout << endl << "--------------------------------------" << endl ;  
            fflush(stdin);
            cout << "\nEnter Roll No.             :   " ;
            cin >> id ;
            cout << "\nEnter Student Name         :   " ;
            fflush(stdin);
            fgets(name,50,stdin);
            int len = strlen(name);
            if (len > 0 && name[len - 1] == '\n')
            name[len - 1] = '\0';
            fflush(stdin);
            cout << endl << "Enter marks for Subject 1  : " ;
            cin >> m1 ;
            cout << endl << "Enter marks for Subject 2  : " ;
            cin >> m2 ;
            cout << endl << "Enter marks for Subject 3  : " ;
            cin >> m3 ;
            cout << endl << "Enter marks for Subject 4  : " ;
            cin >> m4 ;
            cout << endl << "Enter marks for Subject 5  : " ;
            cin >> m5 ;
            cout << endl << "Enter marks for Subject 6  : " ;
            cin >> m6 ;
        }
};
class StudentResult : public StudentExam
{
    private:
        float percentage ;
    public:
        float getPercent()
        {
            percentage = ((m1+m2+m3+m4+m5+m6)/600.0)*100 ;
            return percentage ;
        }
        void display()
        {
            cout << endl << "--------------------------------------" << endl ;  
            cout << "********** Student Marklist **********" ;
            cout << endl << "--------------------------------------" << endl ; 
            cout << endl << "Roll No.                 :   " << id ;
            cout << endl << "Student Name             :   " << name << endl ;
            cout << endl << "Marks of Subject 1       :   " << m1 ;
            cout << endl << "Marks of Subject 2       :   " << m2 ;
            cout << endl << "Marks of Subject 3       :   " << m3 ;
            cout << endl << "Marks of Subject 4       :   " << m4 ;
            cout << endl << "Marks of Subject 5       :   " << m5 ;
            cout << endl << "Marks of Subject 6       :   " << m6 ;
            cout << endl << "\nTotal Percentage         :   " << getPercent() ;
            cout << endl << "--------------------------------------" << endl ;
        }
};
int main () 
{
    int n ;
    cout << "Enter No. of Students you want : " ;
    cin >> n ;
    StudentResult b[n];
    for (int i = 0 ; i < n ; i++)
    b[i].setDetails();
    for (int i = 0 ; i < n ; i++)
    b[i].display();
    return 0 ; 
}