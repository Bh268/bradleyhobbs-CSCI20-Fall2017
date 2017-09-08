/*
    Creater
        Bradley Hobbs
    Created
        9/7/2017
    Description
        This program is a MadLibs game, it will ask for inputs
        In end it will display a paragaph.
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
                        
                            string adjective1;
                            string adjective2;
                            string noun1;
                            string noun2;
                            string pluralNoun1;
                            string game;
                            string pluralNoun2;
                            string verb1;
                            string verb2;
                            string pluralNoun3;
                            string verb3;
                            string noun3;
                            string plant1;
                            string bodyPart1;
                            string place1;
                            string verb4;
                            string adjective3;
                            double number1;
                            string pluralNoun4;
                            
                            string buffer;
                            buffer = "";
                            
                            adjective1 = "bitter";
                            adjective2 = "bland";
                            noun1 = "house";
                            noun2 = "mountain";
                            pluralNoun1 = "boats";
                            game = "Yahtzee";
                            pluralNoun2 = "rivers";
                            verb1 = "baking";
                            verb2 = "escaping";
                            pluralNoun3 = "cats";
                            verb3 = "fishing";
                            noun3 = "wish";
                            plant1 = "Ivy";
                            bodyPart1 = "face";
                            place1 = "Great Wall of China";
                            verb4 = "gathering";
                            adjective3 = "boiling";
                            number1 = 27.34;
                            pluralNoun4 = "houses";
                            
                            cout << endl << endl << "Input an Adjective." << endl << endl;
                            cin >> adjective1;
                            
                            cout << endl << endl << "Input an Adjective." << endl << endl;
                            cin >> adjective2;
                            
                            cout << endl << endl << "Input a Noun." << endl << endl;
                            cin >> noun1;
                            
                            cout << endl << endl << "Input a Noun." << endl << endl;
                            cin >> noun2;
                            
                            cout << endl << endl << "Input a Plural Noun." << endl << endl;
                            cin >> pluralNoun1;
                            
                            getline(cin,buffer); // GetLine Buffer
                            
                            cout << endl << endl << "Input a Game." << endl << endl;
                            getline(cin,game);
                            
                            cout << endl << endl << "Input a Plural Noun." << endl << endl;
                            cin >> pluralNoun2;
                            
                            cout << endl << endl << "Input a Verb ending in \"ing\"." << endl << endl;
                            cin >> verb1;
                            
                            cout << endl << endl << "Input a Verb ending in \"ing\"." << endl << endl;
                            cin >> verb2;
                            
                            cout << endl << endl << "Input a Plural Noun." << endl << endl;
                            cin >> pluralNoun3;
                            
                            cout << endl << endl << "Input a Verb ending in \"ing\"." << endl << endl;
                            cin >> verb3;
                            
                            cout << endl << endl << "Input a Noun." << endl << endl;
                            cin >> noun3;
                            
                            cout << endl << endl << "Input a Plant Name." << endl << endl;
                            cin >> plant1;
                            
                            cout << endl << endl << "Input a Body Part." << endl << endl;
                            cin >> bodyPart1;
                            
                            cout << endl << endl << "Input the name of a Place." << endl << endl;
                            cin >> place1;
                            
                            cout << endl << endl << "Input a Verb ending in \"ing\"." << endl << endl;
                            cin >> verb4;
                            
                            cout << endl << endl << "Input an Adjective." << endl << endl;
                            cin >> adjective3;
                            
                            cout << endl << endl << "Input a Number." << endl << endl;
                            cin >> number1;
                            
                            cout << endl << endl << "Input a Plural Noun." << endl << endl;
                            cin >> pluralNoun4;
                            
                            cout << "A vacation is when you take a trip to some " << adjective1 << " place" << endl;
                            cout << "with your " << adjective2 <<  " family. Usually you go to some place" << endl;
                            cout << "that is near a/an " << noun1 << " or up on a/an " << noun2 << "." << endl;
                            cout << "A good vacation place is one where you can ride" << pluralNoun1 << endl;
                            cout << "or play " << game << " or go hunting for " << pluralNoun2 << ". I like" << endl;
                            cout << "to spend my time " << verb1 << " or " << verb2 << "." << endl;
                            cout << "When parents go on a vacation, they spend their time eating" << endl;
                            cout << "three " << pluralNoun3 << " a day, and fathers play golf, and mothers" << endl;
                            cout << "sit around" << verb3 << ". Last summer, my little brother" << endl;
                            cout << "fell in a/an " << noun3 << " and got poison " << plant1 << " all" << endl;
                            cout << "over his " << bodyPart1 << ". My family is going to go to (the)" << endl;
                            cout << place1 << ", and I will practice " << verb4 << ". Parents" << endl;
                            cout << "need vacations more than kids because parents are always very" << endl;
                            cout << adjective3 << " and because they have to work "<< number1 << endl;
                            cout << "hours every day all year making enough " << pluralNoun4 << " to pay" << endl;
                            cout << "for the vacation." << endl;
                            
                            
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