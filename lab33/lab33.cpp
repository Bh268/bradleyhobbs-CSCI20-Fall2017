#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main(){
    srand(time(0));
    int userNum;
    int RandNum = rand()% 50 + 1;
    int Count = 0;
    
    cout << "Guess A Number, enter any negative number to exit." << endl;
    cin >> userNum;
    
    while (userNum <= 50 && userNum >= 1){
        
        if (userNum < RandNum){
            for (Count = 5; Count >= 0; --Count){
                cout << Count << endl;
                
            }
            
                cout << endl;
                cout << "Too Low, Guess Again: ";
                cin >> userNum;
                cout << endl;
            
        }
        
        if (userNum > RandNum){
            for (Count = 5; Count >= 0; --Count){
                cout << Count << endl;
                
            }
            
                cout << endl;
                cout << "Too High, Guess Again: ";
                cin >> userNum;
                cout << endl;
            
        }
        
        if (userNum == RandNum){
            for (Count = 5; Count >= 0; --Count){
                cout << Count << endl;
                
            }
            
                cout << "Just Right" << endl;
                return 0;
        }
        
        
    }
    if (userNum < 0){
        cout << "Thanks for Playing The Guessing Game" << endl;
        cout << "Coded By: Bradley Hobbs" << endl;
        return 0;
    }
    else {
        cout << "Please Guess A New Number" << endl;
        cin >> userNum;
        cout << endl;
        
    }
    
}