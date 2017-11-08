#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

class Bot{
    public:
    void SetDiceRoll();
    Bot();
    
    
    int GetDiceRoll();
    
    
    private:
    int BotTotalScore;

    
    
};

Bot::Bot(){
    BotTotalScore = 0;
}

void Bot::SetDiceRoll(){
    srand(time(0));
    int Dice = rand()% 6 + 1;
    int TurnEnd = 1;
    int BotTurnScore = 0;
    
while (TurnEnd == 1){
    if (Dice == 1){
        cout << "Bot Rolled: " << Dice << endl;
        BotTurnScore = 0;
        TurnEnd = 2;
    }
    else{
        cout << "Bot Rolled: " << Dice << endl;
        BotTurnScore = Dice + BotTurnScore;
        TurnEnd = rand()% 2 + 1;
    }
    
}
if (TurnEnd == 2){
    BotTotalScore = BotTurnScore;
    return;
    
}
}

int Bot::GetDiceRoll(){
    return BotTotalScore;
}


int main(){
                    Bot Bot;
    srand(time(0));
    int Dice  = rand()% 6 + 1;
    char startGame = 0;
    int TurnEnd = 0;
    int Turn = 1;
    int UsersTotalScore = 0;
    int UsersTurnScore = 0;
    int BotTotalScore = 0;
    
    cout << "Playing Pig, if a 1 is rolled, the player gets 0 points, and if the player decides to stop, " << endl;
    cout << "the player gets points equal to the sum of the numbers rolled since the last 1." << endl;
    cout << "Play continues until one player has a score of 100 or more points. " << endl;
    cout << endl << endl << "x to exit. Press any other key to continue." << endl;
    cin >> startGame;
    
    if (startGame == 'x'){
        cout << "Exiting Game" << endl;
        return 0;
    }
    else{
        while (Turn == 1){
            cout << "Press 1 to Roll the die. Press 2 to stop turn" << endl;
            cin >> TurnEnd;
                
                while (TurnEnd == 1){
                    
                    if (UsersTotalScore < 100){
                        Dice = rand()% 6 + 1;
                        if (Dice == 1){
                            cout << "You rolled a 1, Player 2's Turn" << endl;
                            UsersTurnScore = 0;
                            TurnEnd = 2;
                        }
                    
                        else{
                            UsersTurnScore = Dice + UsersTurnScore;
                            cout << "You rolled a: " << Dice << endl;
                            cout << "Press 1 to Roll the die. Press 2 to stop turn" << endl;
                            cin >> TurnEnd;
                        }
                    }
                    if (UsersTotalScore >= 100){
                        cout << "You have: " << BotTotalScore << endl;
                        cout << "You Win!" << endl;
                        return 0;
                    }
                }
                
                
                while (TurnEnd == 2){
                    UsersTotalScore = UsersTurnScore + UsersTotalScore;
                    cout << "Your Total Score is: " << UsersTotalScore << endl;
                    Bot.SetDiceRoll();
                    BotTotalScore = Bot.GetDiceRoll() + BotTotalScore;
                    
                    if (BotTotalScore < 100){
                    cout << "Player 2 has: " << BotTotalScore << endl;
                    TurnEnd = 1;
                    }
                    if (BotTotalScore >= 100){
                        cout << "Player 2 has: " << BotTotalScore << endl;
                        cout << "Player 2 Wins!" << endl;
                        TurnEnd = 3;
                    }
                }
                
        }
    }
    
    }
