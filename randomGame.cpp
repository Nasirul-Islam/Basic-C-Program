#include<iostream>
using namespace std;

int main()
{
    while(1)
    {
        int guessNum, randomNum;
    cout << "Enter your guess between 1 to 5: ";
    cin >> guessNum;
    randomNum = rand()%5 + 1;
    if(randomNum == guessNum)
        cout << "You are win!" << endl;
    else
        cout << "You are lost" << endl;
        cout << "Number was: " << randomNum << endl;
    }
    return 0;
}
