#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int radius, height;
    cout << "Enter r and h: ";
    cin >> radius >> height;
    float volume;
    volume = M_PI*radius*radius*height;
    cout << "Volume of Cylinder is: " << volume;
    return 0;
}
