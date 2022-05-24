#include<iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout << "ID = " << id << endl << "GPA = " << gpa << endl;
    }
    // parametrized constructor
    student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    // Default constructor
    student()
    {
        cout << "Default Constructor" <<endl;
    }
};

int main()
{
    student ob;
    // ob.display();
    student s(67, 3.78);
    s.display();

}
