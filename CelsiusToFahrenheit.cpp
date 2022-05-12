// Celsius To Fahrenheit
#include<iostream>

using namespace std;

int main()
{
    float cel, fah;
    cout << "Enter Celsius Temperature: ";
    cin >> cel;
    fah = (cel*9/5) + 32;
    cout << "Fahrenheit = " << fah;
}
