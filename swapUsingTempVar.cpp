#include<iostream>
using namespace std;

int swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "X = " << x <<endl << "Y = " << y <<endl;
    return 0;
}

int main()
{
    int x, y;
    cout << "Enter two number: ";
    cin >> x >>y;
    swap(x,y);
    return 0;
}
