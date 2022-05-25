#include<iostream>
using namespace std;

class coordinate
{
public:
    int x, y, z;
    void set(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void show()
    {
        cout << "X = " << x <<endl << "Y = " << y <<endl << "Z = " << z <<endl;
    }
};

int main()
{
    coordinate obj1, obj2;
    obj1.set(5,10,20);
    obj1.show();
    obj2.set(6,7,8);
    obj2.show();
}
