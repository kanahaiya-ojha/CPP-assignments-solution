/*2. Write a C++ program to read a text file and count the number of characters in it.*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std ; 
int main () 
{
    int l1 = 0 , len = 0 , spaces = 0 ;
    ifstream fin ;
    string str ;
    fin.open("E:/assignments cpp/Assignment 34/countchar.txt");
    while (!fin.eof())
    {
        getline(fin,str);
        l1 = str.length();
        len = len + l1 ;
        for (int i = 0; i < l1; i++)
        {
            if(str[i]==' ')
            spaces++;
        }
    }
    len = len - spaces ;
    cout << "total characters = " << len << endl ;
    fin.close();
    return 0 ; 
}
