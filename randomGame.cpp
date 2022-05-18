#include<iostream>
using namespace std;

int main()
{
    int guessNum, randomNum;
    cout << "Enter your guess between 1 to 5: ";
    cin >> guessNum;
    randomNum = rand()%5 + 1;
    if(randomNum == guessNum)
        cout << "You are win!";
    else
        cout << "You are lost";
    return 0;
}
