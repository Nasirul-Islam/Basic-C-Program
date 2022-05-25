// function overloading inside class
#include<iostream>
using namespace std;

class Geometry
{
private:
    int x, y;
public:
    int z;
    Geometry(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    int area(int x)
    {
        int sqr = x*x;
        cout << "Square = " << sqr <<endl;
    }
    int area(int x, int y)
    {
        int rect = x*y;
        cout << "Rectangle = " << rect <<endl;
    }
    int volume()
    {
        int area = x*y*z;
        cout << "volume = " << area <<endl;
    }
};

int main()
{
    Geometry G(3, 4, 5);
    G.area(3);
    G.area(4, 5);
    G.volume();
}

/*
Square = 9
Rectangle = 20
volume = 60
*/
