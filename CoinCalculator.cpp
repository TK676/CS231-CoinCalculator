//Name: Liam O'Kelley
//Program: Coin Calculator
//Description: This program will take a user-entered number of coins (Pennies, nickels, dimes, quarters, half-dollars, and one-dollar coins), convert them to a number based on their value of currency, and finally calculate the total number of change
using namespace std;
#include <iostream>

int main()
{
    int numPennies;
    int numNickels;
    int numDimes;
    int numQuarters;
    int numHalfDollars;
    int numOneDollars;

    double pennyValue = 0.01;
    double nickelValue = 0.05;
    double dimeValue = 0.10;
    double quarterValue = 0.25;
    double halfDollarValue = 0.50;
    double oneDollarValue = 1;

    double pennyTotal = 0;
    double nickelTotal = 0;
    double dimeTotal = 0;
    double quarterTotal = 0;
    double halfDollarTotal = 0;
    double oneDollarTotal = 0;

    double entireTotal = 0;

    //Prints a greeting
    cout << "Welcome to the Coin Calculator.\n";

    //Asks the user to enter the number of each coin that they want and gives a valid response when they enter a number less than 0
    cout << "Please enter the number of pennies in an amount greater than or equal to zero: ";
    cin >> numPennies;
    while (numPennies < 0) {
        cout << "You cannot have less than zero coins, please enter a number greater than zero: ";
        cin >> numPennies;
    }
    cout << "Please enter the number of nickels in an amount greater than or equal to zero: ";
    cin >> numNickels;
    while (numNickels < 0) {
        cout << "You cannot have less than zero coins, please enter a number greater than zero: ";
        cin >> numNickels;
    }
    cout << "Please enter the number of dimes in an amount greater than or equal to zero: ";
    cin >> numDimes;
    while (numDimes < 0) {
        cout << "You cannot have less than zero coins, please enter a number greater than zero: ";
        cin >> numDimes;
    }
    cout << "Please enter the number of quarters in an amount greater than or equal to zero: ";
    cin >> numQuarters;
    while (numQuarters < 0) {
        cout << "You cannot have less than zero coins, please enter a number greater than zero: ";
        cin >> numQuarters;
    }
    cout << "Please enter the number of half dollar coins in an amount greater than or equal to zero: ";
    cin >> numHalfDollars;
    while (numHalfDollars < 0) {
        cout << "You cannot have less than zero coins, please enter a number greater than zero: ";
        cin >> numHalfDollars;
    }
    cout << "Please enter the number of one-dollar coins in an amount greater than or equal to zero: ";
    cin >> numOneDollars;
    while (numOneDollars < 0) {
        cout << "You cannot have less than zero coins, please enter a number greater than zero: ";
        cin >> numOneDollars;
    }
    
    //Converts the number of coins to their currency value
    pennyTotal = numPennies * pennyValue;
    nickelTotal = numNickels * nickelValue;
    dimeTotal = numDimes * dimeValue;
    quarterTotal = numQuarters * quarterValue;
    halfDollarTotal = numHalfDollars * halfDollarValue;
    oneDollarTotal = numOneDollars * oneDollarValue;

    //Tells the user how many of each coin they have
    cout << "You have " << numPennies << " pennies.\n";
    cout << "You have " << numNickels << " nickels.\n";
    cout << "You have " << numDimes << " dimes.\n";
    cout << "You have " << numQuarters << " quarters.\n";
    cout << "You have " << numHalfDollars << " half-dollar coins.\n";
    cout << "You have " << numOneDollars << " one-dollar coins.\n";

    //Adds the totals together
    entireTotal = pennyTotal + nickelTotal + dimeTotal + quarterTotal + halfDollarTotal + oneDollarTotal;

    //Tells the user how much the total is
    cout << "The value of all of your coins is: $" << entireTotal << ".\n";
}
