// Add Two Number Using Function
#include<iostream>
using namespace std;

int sum(int x, int y)
{
    int sum;
    sum = x+y;
    cout << "Sum = " << sum;
}

int main()
{
    int x, y;
    cout << "Enter two number: ";
    cin >> x >> y;
    sum(x,y);
}
