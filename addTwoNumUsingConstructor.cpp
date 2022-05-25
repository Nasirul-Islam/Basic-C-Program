// add Two Number Using Constructor
#include<iostream>
using namespace std;

class sum
{
public:
    sum(int x, int y)
    {
        cout << "Sum = " << x+y <<endl;
    }
};

int main()
{
    int x, y;
    cout << "Enter Two Number: ";
    cin >> x >> y;
    sum s(x, y);
}
