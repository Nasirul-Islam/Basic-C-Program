// Area Of Rectangle Using Class
#include<iostream>
using namespace std;

class rectangle
{
    int length;
    int breadth;
    public:
    int getRectangle(int l,int b)
    {
        int area;
        area = l*b;
        cout << "Area = " << area;
    }
};
int main()
{
    int l, b;
    cout << "Enter Length and Breadth: ";
    cin >> l >> b;
    rectangle r;
    r.getRectangle(l,b);
    return 0;
}
