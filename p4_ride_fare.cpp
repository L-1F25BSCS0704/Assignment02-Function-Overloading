#include <iostream>
using namespace std;
double fare(double km, double ratePerKm = 40.0);
double fare(double km, double ratePerKm, bool peakHour);
double fare(double km, char vehicle);
double fare(double km, char vehicle, int promoPercent);
int main()
{
    cout << "fare(10) = " << fare(10) << endl;
    cout << "fare(10, 30.0) = " << fare(10, 30.0) << endl;
    cout << "fare(10, 30.0, true) = " << fare(10, 30.0, true) << endl;
    cout << "fare(8, 'B') = " << fare(8, 'B') << endl;
    cout << "fare(8, 'C') = " << fare(8, 'C') << endl;
    cout << "fare(8, 'C', 10) = " << fare(8, 'C', 10) << endl;
    return 0;
}
double fare(double km, double ratePerKm)
{
    return (100 + (km * ratePerKm));
}
double fare(double km, double ratePerKm, bool peakHour)
{
    if (peakHour == false)
    {
        double nonpeak=fare(km, ratePerKm);
        return nonpeak;
    }
    else
    {
        double p1 = fare(km, ratePerKm);
        double p2 = (p1 * 20) / 100;
        return p2 + p1;
    }
};
double fare(double km, char vehicle)
{
    if (vehicle == 'B' || vehicle == 'b')
    {
        double a=fare(km, 25.0);
        return a;
    }
    else
    {
        if (vehicle == 'R' || vehicle == 'r')
        {
           return fare(km, 35.0);
        }
        else
        {
            if (vehicle == 'C' || vehicle == 'c')
            {
               return fare(km, 50.0);
            }
        }
    }
    if (vehicle != 'B' || vehicle != 'C' || vehicle != 'c' || vehicle != 'R' || vehicle != 'r')
    {
        return 0;
    }
}
double fare(double km, char vehicle, int promoPercent)
{
    double p1 = fare(km, vehicle);
    double p2 = (p1 * promoPercent) / 100;
    return (p1 - p2);
}