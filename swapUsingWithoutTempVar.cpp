// Swap Using Without Temp Var
#include<iostream>
using namespace std;

int swap(int x, int y) // x=5, y=10
{
    x = x+y; // x = 5+10  = 15
    y = x-y; // y = 15-10 = 5
    x = x-y; // x = 15-5  = 10
    cout << "X = " << x <<endl << "Y = " << y <<endl;
    return 0;
}

int main()
{
    int x, y;
    cout << "Enter two number: ";
    cin >> x >>y;
    cout << "X = " << x <<endl << "Y = " << y <<endl <<endl;
    swap(x,y);
    return 0;
}
