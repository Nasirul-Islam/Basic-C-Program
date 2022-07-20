#include<iostream>
using namespace std;

class Halloween
{
private:
    int age;
    string name;
public:
    Halloween(int a, string n)
    {
        age = a;
        name = n;
    }
    Halloween()
    {
        age = 22;
        name = "Nasirul";
    }
    int gift(int x)
    {
        if(x==1)
        {
            return 1;
        }
        if(x==2)
        {
            return 2;
        }
        if(x==3)
        {
            return Halloween;
        }
    }
    void display()
    {
        cout << "Name = " << name <<endl << "Age = " << age <<endl;
    }
};


int main()
{
    Halloween H(33, "Kibria");
    H.display();
}
