/*Create a base class called Photon. Use this class to store double type value of wavelength that could be used to 
calculate photon energy. Create class calculate_photonEnergy which will photon energy.
Using these classes, calculate photon energy.*/
#include<iostream>
#define H 6.626
using namespace std;
class Photon
{
    protected:
        double wavelength;
    public:
        Photon(){}
        Photon(int a) : wavelength(a) {}
};
class PhotonEnergy : Photon
{
    public:
        PhotonEnergy(int p)
        {
            wavelength = p;
        }
        void showEnergy()
        {
            cout<<6.636*3/wavelength<<" * 10 to power -16 joul"<<endl;
        }
};
int main()
{
    PhotonEnergy p1(5);
    p1.showEnergy();
    return 0;
}