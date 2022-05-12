#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any charecter: ";
    cin >> ch;
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout << ch << " is Vowel";
    }
    else
    {
        cout << ch << " is Consonant";
    }
}
