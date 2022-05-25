#include<iostream>
using namespace std;

class cse40
{
public:
    int id;
    float cgpa;
    cse40(int x, float y)
    {
        id=x;
        cgpa=y;
    }
    void display()
    {
        cout << "ID = " << id <<endl << "CGPA = " << cgpa;
    }
};

int main()
{
    cse40 ob1(67, 3.78);
    ob1.display();
}
