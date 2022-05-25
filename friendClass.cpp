#include<iostream>
using namespace std;

class Mim
{
private:
    int x=200, y=22;
public:
    friend class Rakib;
};

class Rakib
{
public:
    void display(Mim obj)
    {
         int r = obj.x;
         int m = obj.y;
        cout << "Gotona = " << r+m <<endl;
    }
};

int main()
{
    Mim obj1;
    Rakib obj2;
    obj2.display(obj1);
}
/*
    simple output : 222
*/
