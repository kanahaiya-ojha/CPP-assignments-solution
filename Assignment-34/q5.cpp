//5. Write a C++ program to merge the two files.
#include<bits/stdc++.h>
using namespace std ; 
int main () 
{
    string str , file1 , file2 , file3 ;
    cout << "Use / for moving into directory\n" << endl ;
    fflush(stdin);
    cout << "Enter first file with path and extension '.txt' :" << endl ;
    getline(cin,file1);
    fflush(stdin);
    cout << "\nEnter second file with path and extension '.txt' :" << endl ;
    getline(cin,file2);
    cout << "\nEnter name of the third file with extension '.txt':" << endl ;
    getline(cin,file3);
    ofstream fout ;
    fout.open(file3 , ios::app | ios::in | ios::out);
    ifstream read1 , read2 ;
    read1.open(file1);
    read2.open(file2);
    while (!read1.eof())
    {
        getline(read1,str);
        fout << str ;
        fout << endl ;
    }
    fout << endl ;
    while (!read2.eof())
    {
        getline(read2,str);
        fout << str ;
        fout << endl ;
    }
    cout << "\nfile merged successfully !!!" << endl ;
    read1.close();
    read2.close();
    fout.close();
    return 0 ; 
}