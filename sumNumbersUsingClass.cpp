// Sum Numbers Using Class
#include<iostream>
using namespace std;

class number
{
    int num;
public:
    int sumNum(int x)
    {
        int sum = 0;
        for(int i=1; i<=x; i++)
        {
            sum = sum + i;
        }
        return sum;
    }
};

int main()
{
    int x, result;
    cout << "Enter a number: ";
    cin >> x;
    number n;
    result = n.sumNum(x);
    cout << "Sum = " << result;
    return 0;
}
