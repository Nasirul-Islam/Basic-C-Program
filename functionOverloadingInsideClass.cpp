// function overloading inside class
#include<iostream>
using namespace std;

class Box
{
public:
    int length, width, height;
    Box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }
    void display()
    {
        cout << "length = " << length <<endl;
        cout << "width = " << width <<endl;
        cout << "height = " << height <<endl;
    }
};

void volume(Box obj)
{
    int area = obj.length*obj.width*obj.height;
    cout << "Area = " << area <<endl;
}

int main()
{
    Box B(4, 5, 6);
    B.display();
    volume(B);
}

/*
length = 4
width = 5
height = 6
Area = 120
*/
