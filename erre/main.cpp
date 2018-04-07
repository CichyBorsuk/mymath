#include <iostream>
#include <cmath>
#include "mymath.h"

using namespace std;

int main()
{
    double r, h;
    cout << "Give roller base radius: ";
    cin >> r;
    cout << "Give height of a roller: ";
    cin >> h;
    cout << "Base area of a roller equals: "<< BaseAreaOfaroller(r) << endl;
    cout << "Area lateral of a roller equals: "<< AreaLateralOfaRoller(r,h) << endl;
    cout << "Area of a roller equals: " << AreaOfaRoller(r,h ) << endl;
    cout << "Volume of a roller equals: " << VolumeOfaRoller(r,h) << endl;
    cout << "Diagonal of a roller equals: "<< DiagonalOfaRoller(r,h) << endl;



    return 0;
}
