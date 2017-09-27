#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber1(int FirstNumber = 1,int SecondNumber = 10){
    int RandomNum1;
    srand(time(0));
    RandomNum1 = rand()%((FirstNumber) + (SecondNumber + 1));
    
    return RandomNum1;
}
int RandomNumber2(int SecondNumber = 10,int FirstNumber = 1){
    int RandomNum2;
    srand(time(0));
    RandomNum2 = rand()%((FirstNumber) + (SecondNumber + 1));
    
    
    return RandomNum2;
}

int main()
{
    
    

    EnterVariable:
    char TryAgain;
    int num1 = 0;
    int num2 = 0;
    cout << "I will generate a random number between the two numbers you input, ex: \1 10\" will generate a random number between 1 and 10" << endl;
    cin >> num1 >> num2;
    
    if (num1 < num2){
        cout << "A Random Number Between " << num1 << " and " << num2 << " is " << RandomNumber1(num1,num2) << endl;
        goto Exit;
    }
    if (num1 > num2){
        cout << "A Random Number Between " << num2 << " and " << num1 << " is " << RandomNumber2(num2,num1) << endl;
        goto Exit;
    }
    else{
        cout << "You have entered Equivelant Numbers, please Enter Two Numbers that are not the same." << endl;
        goto EnterVariable;
    }
    
Exit:
return 0;
}