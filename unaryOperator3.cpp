// unary operator overloading using class function
#include<iostream>
using namespace std;
class demo
{
    int a;
public:
    demo(int x)
    {
        a=x;
    }
    void show()
    {
        cout << "A =" << a <<endl;
    }
    void operator ++()
    {
        a= ++a;
    }
};
int main()
{
    demo obj(8);
    obj.show();
    ++obj;
    obj.show();
}

