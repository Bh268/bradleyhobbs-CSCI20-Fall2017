/*
    Creator:
        Bradley Hobbs
    Date Created
        8/29/17
    Program Description
        This program will calculate the estimated population of a given year.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

    int main ()
    
        {
            string exitGame;
            string playAgain;
            playAgain = "Yes";
            exitGame = "No";
            
            while (exitGame == "no" || exitGame == "No" || exitGame == "nO" || exitGame == "NO")
            {
            
                while (playAgain == "Yes" || playAgain == "yEs" || playAgain == "yeS" || playAgain == "YEs" || playAgain == "yES" || playAgain == "yes" || playAgain == "YeS" || playAgain == "YES")
                    {
                        
                        
                        
                    
                        {
                        
                            int population;
                            int currentPopulation = 325779096; // The population in year 2017
                            int year = 2017; // The current year
                            int newYear; // The year you want to find out the estimated population of
                        
                        
                            cout << "Enter year" << endl;
                            cin >> newYear;
                        
                            population = (newYear - year) * 2628000 + 325779096; 
                            cout << "The Population in year " << newYear << " will be " << population << "." << endl;
                        
                            cout << "Would you like to enter new year?" << endl;
                            cin >> playAgain;
                        
                        }
                    
                if (playAgain == "No" || playAgain == "nO" || playAgain == "no" || playAgain == "NO")
                    {
                        cout << "Are you sure you want to Exit Program?" << endl;
                        cin >> exitGame;
                        
                        if (exitGame == "Yes" || exitGame == "yEs" || exitGame == "yeS" || exitGame == "YEs" || exitGame == "yES" || exitGame == "yes" || exitGame == "YeS" || exitGame == "YES")
                        
                        {
                            cout << "Thank you for running my program" << endl;
                            
                            return 0;
                        }
                    }
                        
                    }
                    
            }
            
        }
        
        /*      ex. 2077(new year) - 2017 (current year) = 60
        60 (The difference in years) * 2,628,000 (The average population growth per year) = 157,680,000 (The population increase between each year)
        157,680,000 + 325,779,096 (The current estimated population) = 483,459,096(The population in the year 2077)
        */