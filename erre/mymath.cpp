#include <cmath>
double BaseAreaOfaroller(double r)
{
    double Ba;
    Ba=r*r*3.14;
    return Ba;
}

double AreaLateralOfaRoller(double r, double h)
{
    double Al;
    Al=2*3.14*r*h;
    return Al;
}

double AreaOfaRoller(double r, double h)
{
    double A;
    A=2*3.14*(r+h);
    return A;
}

double VolumeOfaRoller(double r, double h)
{
    double V;
    V=3.14*r*r*h;
    return V;
}

double DiagonalOfaRoller(double r, double h)
{
    double d;
    d=sqrt(4*r*r+h*h);
    return d;
}
