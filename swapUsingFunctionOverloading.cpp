// Swap Using Function Overloading
#include<iostream>
using namespace std;

int swaping(int x, int y)
{
    x = x+y;
    y = x-y;
    x = x-y;
    cout << "X = " << x <<endl << "Y = " << y <<endl;
}

double swaping(double x, double y)
{
    x = x+y;
    y = x-y;
    x = x-y;
    cout << "X = " << x <<endl << "Y = " << y <<endl;
}

char swaping(char x, char y)
{
    x = x+y;
    y = x-y;
    x = x-y;
    cout << "X = " << x <<endl << "Y = " << y <<endl;
}

int main()
{
    int x, y;
    cout << "Enter two integer Number: ";
    cin >> x >> y;
    swaping(x,y);

    double xd, yd;
    cout << "Enter two double Number: ";
    cin >> xd >> yd;
    swaping(xd,yd);

    char xc, yc;
    cout << "Enter two character: ";
    cin >> xc >> yc;
    swaping(xc,yc);
}
/*
Enter two integer Number: 5 7
X = 7
Y = 5
Enter two double Number: 5.55 7.77
X = 7.77
Y = 5.55
Enter two character: N I
X = I
Y = N

*/
