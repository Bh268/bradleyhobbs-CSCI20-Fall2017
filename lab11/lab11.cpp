/*
Creator:
    Bradley Hobbs
    
Date Created:
    8/24
    
Description:
    The user will guess a randomly generated number between 1 and 100,
    you have 10 guesses before the game ends, if users guess is to high or to low,
    it will also tell you how many guesses you have left,
    if/when you run out of guesses, you lose,
    if you guess the number before the 10 guesses run out, you win.
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
    
include 
  
    {
        string playAgain = "Yes";
        string exitGame = "No";
        int userGuess;
        
        
        while (playAgain == "Yes" || playAgain == "yEs" || playAgain == "yeS" || playAgain == "YEs" || playAgain == "yES" || playAgain == "YES" || playAgain == "yes")
        
        {
            while (exitGame == "No" || exitGame == "nO" || exitGame == "NO" || exitGame == "no")
            
            {
                int point = 10;
                srand((unsigned)time(0));
                int randNumber = rand() % 100 + 1;
                
                cout << "I have generated a number between 1 and 100, you have 10 guesses, if you do not input the correct number, you lose: \n";
                cin >> userGuess;
                    
                while(userGuess < randNumber)
                
                    {
                        point = point - 1;
                        cout << "The number is higher than " << userGuess << endl;
                        cout << "You have " << point << " guesses left, input new number: \n";
                        cin >> userGuess;
                    }
                
                while(userGuess > randNumber)
                
                    {
                        point = point - 1;
                        cout << "The number is lower than " << userGuess << endl;
                        cout << "You have " << point << " guesses left, input new number: \n";
                        cin >> userGuess;
                    }
                
                if (userGuess == randNumber);
                
                    {
                        cout << "Correct, the Number is " << userGuess << ", You Have Won With " << point << " Points Left! \n";
                        cout << "Do You Wish to Play again? \n Type Yes to Play Again, Type No if You Want to Quit: \n";
                        cin >> playAgain;
                            
                        if (playAgain == "No" || playAgain == "NO" || playAgain == "no" || playAgain == "nO")
                                
                            {
                            cout << "You Have Chosen to Exit Game, All Data Will Be Lost, Continue?: \n";
                            cin >> exitGame;
                                
                            if (exitGame == "Yes" || exitGame == "yEs" || exitGame == "yES" || exitGame == "yeS" || exitGame == "YES" || exitGame == "yes")
                                    
                                {
                                    cout << "Thanks for Playing! \n";
                                    
                                    return 0;
                                }
                            }
                    }
                
                if (point = 0)
            
                    {
                        cout << "You Have 0 Guesses Left, You Lose, Play Again?: \n";
                        cin >> playAgain;
                    
                        if (playAgain == "No" || playAgain == "NO" || playAgain == "no" || playAgain == "nO")
                    
                            {
                                cout << "You Have Chosen to Exit Game, All Data Will Be Lost, Continue?: \n";
                                cin >> exitGame;
                                
                                if (exitGame == "Yes" || exitGame == "yEs" || exitGame == "yES" || exitGame == "yeS" || exitGame == "YES" || exitGame == "yes")
                            
                                {
                                    cout << "Thanks for Playing! \n";
                                
                                    return 0;
                                }
                            }
                    
                    }
            }
        }
            
        return 0;
    }