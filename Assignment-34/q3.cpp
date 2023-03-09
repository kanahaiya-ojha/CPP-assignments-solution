//3. Write a C++ program to open an output file 'a.txt' and append data to it.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    string str;
    fout.open("./a.txt",ios::app);
    cout<<"Enter data to append:";
    while(true)
    {
        cin.get();
        getline(cin,str);
        if(str=="exit()")
        break;
        fout<<str;
        fout<<endl;
    }
    fout.close();
    return 0;
}