#include<iostream>
using namespace std;

class CPP
{
public:
    int a, b;
    CPP(int x, int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout << a << " " << b;
    }
};

int main()
{
    CPP ob(3,4);
    ob.show();
}
