/*
Creator:
Bradley Hobbs

Description:
This lab will Convert Kilograms to Pounds and Pounds to Kilograms

Created:
9/28/17
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int RandomNumberFirstNumberSwap(int firstNumber,int secondNumber) {
    int Temp = firstNumber;
    
    firstNumber = secondNumber;
    secondNumber = Temp;
    
    return firstNumber;
}

int RandomNumberSecondNumberSwap(int firstNumber,int secondNumber) {
    int Temp = firstNumber;
    
    firstNumber = secondNumber;
    secondNumber = Temp;
    
    return secondNumber;
}

int RandomNumberHighNumberSet(int firstNumber,int secondNumber) {
    int highNumber;
    
        if (firstNumber < secondNumber) {
        highNumber = secondNumber;
    }
    
    if (firstNumber > secondNumber) {
        highNumber = firstNumber;
        
    }
    return highNumber;
}
int RandomNumberLowNumberSet(int firstNumber,int secondNumber){
    int lowNumber;

    
    if (firstNumber < secondNumber) {
        lowNumber = firstNumber;
        
    }
    
    if (firstNumber > secondNumber) {
        lowNumber = secondNumber;
        
    }
    return lowNumber;
}

double RandomNumberGenerator(int lowNumber,int highNumber) {
    srand(time(0));
    int RandomNumber = rand() % highNumber + (lowNumber + 1);;
    
    
    return RandomNumber;
}

double Kilograms(int RandomNumber) {
    double Kilograms;
    
    Kilograms = (RandomNumber * 2.20462262185);
    
    return Kilograms;
}

double Pounds(double Kilograms) {
    int Pounds;
    
    Pounds = (Kilograms * 0.45359237);
    Pounds = ceil(Pounds);
    
    return Pounds;
}

int main()
{
    int firstNumber;
    int secondNumber;
    int highNumber;
    int LowNumber;
    int HighNumber;
    int RandomNumber;
    double kilograms;
    int pounds;
    int NewsecondNumber;
    int NewfirstNumber;
    
    cout << "Please Enter Two Numbers." << endl;
    cin >> firstNumber, secondNumber;
    cout << endl;
    
    NewfirstNumber = RandomNumberFirstNumberSwap(firstNumber,secondNumber);
    NewsecondNumber = RandomNumberSecondNumberSwap(firstNumber,secondNumber);
    HighNumber = RandomNumberHighNumberSet(firstNumber, secondNumber);
    LowNumber = RandomNumberLowNumberSet(firstNumber, secondNumber);
    RandomNumber = RandomNumberGenerator(LowNumber, HighNumber);
    kilograms = Kilograms(RandomNumber);
    pounds = Pounds(kilograms);
    
    cout << "RandomNumber: " << RandomNumber << endl;
    cout << "Pounds: " << pounds << endl;
    cout << "Kilograms: " << kilograms << endl;
    cout << "Final Pounds: " << pounds << endl;
    
    return 0;
    
}