// 5. Create a base class called Photon. Use this class to store a double type value of wavelength that could be used to calculate photon energy. 
// Create class calculate_photonEnergy which will inherit photon energy.
// Using these classes, calculate photon energy.

//energy of photon , E=hc/lemda(weblengh)
//where ,h=6.626x10^-34js,speed of light c=3x10^8 ms^-1
#include<iostream>
#include<cmath>
using namespace std;
class photon
{
    protected:
    double weblength;
    public:
    photon(double wavelength)
    {
        this->wavelength=weblength/pow(10,-10);
    }

};
class calculate_photonEnergy:public photon
{
    private:
    double E;

    public:
    calculate_photonEnergy(double value_in_angstrom): photon(value_in_angstrom)
    {

    }
    void calculate_photonEnergy()
    {
        E=(6.626*(pow(10,-34))*3*(pow(10,8)))/weblength;
        cout<<"value of photons energy is : "<<E<<endl;
    }

};
int main()
{
    calculate_photonEnergy pt1(0.5);
    pt1.calculate_photonEnergy();

    return 0;
}