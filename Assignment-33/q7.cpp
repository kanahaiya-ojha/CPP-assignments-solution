// 7. Create a base class called Matrix. Use this class to store 4 int type values
//  that could be used to calculate determinants and create matrices.
// Create class calculate_determinant which will calculate the determinant of a matrix.
// Using these classes, calculate the determinant of the matrix.
#include<iostream>
using namespace std;
class matrix
{
    int a,b,c,d;
    public:
    void calculate(int a,int b,int c,int d)
    {
        cout<<"result="<<a*d-c*b;
    }
    

    

};

int main()
{
    matrix m;
    m.calculate(2,3,4,5);


    return 0;
}