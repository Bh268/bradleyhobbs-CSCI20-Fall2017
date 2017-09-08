/*
    Creator
        Bradley Hobbs
    Created
        9/1/17
    Description
        This program is a form of a CoinStar machine.
        Accepts a monetary amount of cents
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

    int main()
    
        {
            string exitGame;
            string playAgain;
            playAgain = "Yes";
            exitGame = "No";
            
            while (exitGame == "no" || exitGame == "No" || exitGame == "nO" || exitGame == "NO")
            {
            
                while (playAgain == "Yes" || playAgain == "yEs" || playAgain == "yeS" || playAgain == "YEs" || playAgain == "yES" || playAgain == "yes" || playAgain == "YeS" || playAgain == "YES")
                    {
                        
                        int quarters;
                        int dimes;
                        int nickels;
                        int pennies;
                        int inputMoney;
                        int money;
                        double moneyAfterTax;
                        
                        cout << "Enter Amount of Money" << endl;
                        cin >> inputMoney;
                        cout << endl;
                        
                        money = inputMoney; 
                        
                        quarters = (money - (money % 25)) / 25;
                        
                        money = money - (quarters * 25);
                        
                        dimes = (money - (money % 10)) / 10;
                        
                        money = money - (dimes * 10);
                        
                        nickels = (money - (money % 5)) / 5;
                        
                        money = money - (nickels * 5);
                        
                        pennies = (money - (money % 1)) / 1;
                        
                        moneyAfterTax = (inputMoney * 0.1) / 10.9;
                        
                        cout << "You have entered " << inputMoney << " cents." << endl << endl;
                        
                        cout << "That was " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies." << endl << endl;
                        
                        cout << "The total is $" << setprecision(2) << fixed << moneyAfterTax << "." << endl << endl;
                        
                        cout << "Would you like to run the program again?" << endl; // Playagain loop
                        cin >> playAgain;
                        cout << endl;
                        
                    
                if (playAgain == "No" || playAgain == "nO" || playAgain == "no" || playAgain == "NO")
                    {
                        cout << "Are you sure you want to Exit Program?" << endl;
                        cin >> exitGame;
                        cout << endl;
                        
                        if (exitGame == "Yes" || exitGame == "yEs" || exitGame == "yeS" || exitGame == "YEs" || exitGame == "yES" || exitGame == "yes" || exitGame == "YeS" || exitGame == "YES")
                        
                            {
                                cout << "Thank you for running my program" << endl;
                            
                                return 0;
                            }
                        }
                        
                    }
                    
            }
            
        }

/* 
    You have entered (inputMoney) cents.

    That was (quarters) quarters, (dimes) dimes, (nickels) nickels, and (pennies) pennies.

    Your total is (moneyAfterTax).
*/