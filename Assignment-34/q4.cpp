/*4. Write a program to copy the contents of one text file to another while changing the case of every alphabet.*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std ; 
int main () 
{
    string str ;
    ifstream fin ;
    ofstream fout ;
    fin.open("E:/assignments cpp/Assignment 34/q4.cpp") ;
    fout.open("E:/assignments cpp/Assignment 34/q4.cpp");
    while (!fin.eof())
    {
        getline(fin,str);
        int len = str.length();
        for(int i=0 ; i<len ; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i] + 32 ;
            else if(str[i]>='a' && str[i]<='z')
            str[i] = str[i] - 32 ;
        }
        fout << str ;
        fout << endl ;
    }
    cout << "file copied successfully !!!" << endl ;
    fin.close();
    fout.close();
    return 0 ;
}
