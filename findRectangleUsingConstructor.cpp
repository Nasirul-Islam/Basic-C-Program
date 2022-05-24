// area of rectangle using constructor
#include<iostream>
using namespace std;

class rectangle
{
public:
    int length, breadth;
    void area()
    {
        int area = length*breadth;
        cout << "Area = " << area <<endl;
    }
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    rectangle()
    {
        length = 0;
        breadth = 0;
    }
};

int main()
{
    rectangle ob;
    rectangle r(3,4);
    r.area();
}
