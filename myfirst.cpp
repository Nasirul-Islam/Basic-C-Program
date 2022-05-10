#include<iostream>
using namespace std;

int main()
{
    cout<<"Nasirul Islam";
    cout << "\nNasirul" << " Islam" <<endl ;
    cout << "Nasirul" <<endl << "Islam" <<endl;

    float num1=1.2340, num2=2.2450;
    char ch = 'N';
    char name[14] = "Nasirul Islam";

    cout<< "num1 = " << num1 <<endl <<"num2 = " << num2;
    cout<< "\n"<< ch <<endl;
    cout<< name <<endl;

    int n1,n2,sum;
    char myName[15];
    cout<< "Enter 2 number: ";
    cin>> n1 >> n2;
    cout << n1 <<endl << n2 <<endl;
    cout <<"sum = " << n1+n2;

    cout << "\nEnter your Name: ";
    cin>> myName;
    cout << myName;

    return 0;
}
