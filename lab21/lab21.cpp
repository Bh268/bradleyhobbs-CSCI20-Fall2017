/*
    Creator:
    Bradley Hobbs
    
    Date Created:
    9/17/2017
    
    Description:
        This program will output information about windchills
        based on the user’s inputs of temperature and starting wind speed.
*/


#include <iostream>
#include <math.h> // The appropriate math library function
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

    struct wind{ // Wind Struct to simplify Program, makes the amount of Variables that need to be defined a lot less
        
        double OldStyleWindChill = 0.0;
        double NewStyleWindChill = 0.0;
        double Velocity = 0.0;
        double TempF = 0.0;
        double WindChillDifference = 0.0;
    };

int main ()
{
        
        char Exit;
        

    do{ // Better and Easier Version of the exit loop
         wind wind[3]; // There are 3 different Inputs per Variable in the struct "wind"
         
        cout << "Enter Windspeed:" << endl; // Wind Speed 1
        cin >> wind[0].Velocity;
        cout << endl;
        
        cout << "Enter Temperature:" << endl; // Temperature 1
        cin >> wind[0].TempF;
        cout << endl;
        
        cout << "Enter Windspeed:" << endl; //Wind Speed 2
        cin >> wind[1].Velocity;
        cout << endl;
        
        cout << "Enter Temperature:" << endl; //Temperature 2
        cin >> wind[1].TempF;
        cout << endl;
        
        cout << "Enter Windspeed:" << endl; // Wind Speed 3
        cin >> wind[2].Velocity;
        cout << endl;
        
        cout << "Enter Temperature:" << endl; //Temperature 3
        cin >> wind[2].TempF;
        cout << endl;
        
        
        wind[0].OldStyleWindChill = 0.081 * (3.71 * sqrt(wind[0].Velocity) + 5.81 - 0.25 * wind[0].Velocity) * (wind[0].TempF - 91.4) + 91.4; // Old Wind Chill Formula 1
        wind[0].NewStyleWindChill = 35.74 + 0.6215 * wind[0].TempF - 35.75 * pow(wind[0].Velocity, 0.16) + 0.4275 * wind[0].TempF - pow(wind[0].Velocity, 0.16); // New Wind Chill Formula 1
        
        
        wind[1].OldStyleWindChill = 0.081 * (3.71 * sqrt(wind[1].Velocity) + 5.81 - 0.25 * wind[1].Velocity) * (wind[1].TempF - 91.4) + 91.4; // Old Wind Chill Formula 2
        wind[1].NewStyleWindChill = 35.74 + 0.6215 * wind[1].TempF - 35.75 * pow(wind[1].Velocity, 0.16) + 0.4275 * wind[1].TempF - pow(wind[2].Velocity, 0.16); // New Wind Chill Formula 2
        
        
        wind[2].OldStyleWindChill = 0.081 * (3.71 * sqrt(wind[2].Velocity) + 5.81 - 0.25 * wind[2].Velocity) * (wind[2].TempF - 91.4) + 91.4; // Old Wind Chill Formula 3
        wind[2].NewStyleWindChill = 35.74 + 0.6215 * wind[2].TempF - 35.75 * pow(wind[2].Velocity, 0.16) + 0.4275 * wind[2].TempF - pow(wind[3].Velocity, 0.16); // New Wind Chill Formula
        
        wind[0].WindChillDifference = wind[0].OldStyleWindChill - wind[0].NewStyleWindChill;
        wind[1].WindChillDifference = wind[1].OldStyleWindChill - wind[1].NewStyleWindChill;
        wind[2].WindChillDifference = wind[2].OldStyleWindChill - wind[2].NewStyleWindChill;
        
        cout << "Velocity       " << "Old Formula       " << "New Formula       " << "Difference" << endl;
        cout << wind[0].Velocity << "               " << wind[0].OldStyleWindChill << "           " << wind[0].NewStyleWindChill << "            " << wind[0].WindChillDifference << endl; // Output Row 1
        cout << wind[1].Velocity << "               " << wind[1].OldStyleWindChill << "           " << wind[1].NewStyleWindChill << "            " << wind[1].WindChillDifference << endl; // Output Row 2
        cout << wind[2].Velocity << "               " << wind[2].OldStyleWindChill << "           " << wind[2].NewStyleWindChill << "            " << wind[2].WindChillDifference << endl; // Output Row 3
        
        
        cout << "Run Again? (y/n)" << endl;
        cin >> Exit;
        cout << endl;
        
    }while(Exit == 'y'); // While Loop
    return 0;
}
    