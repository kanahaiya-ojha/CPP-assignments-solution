/*1. Write a C++ program to create a file and print “File created successfully” 
and throw an error if file is not created.*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    try
    {
        fout.open("E:/assignments cpp/Assignment 34/file.txt");
        if(!fout)
        throw 1;
        else
        throw 1.5;
    }
    catch(int)
    {
        cout<<"file is not crated"<<endl;

    }
    catch(double)
    {
        cout<<"file created succesfully"<<endl;

    }
    fout.close();
    return 0;
}
