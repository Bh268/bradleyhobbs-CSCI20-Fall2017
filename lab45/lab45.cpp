#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

void Space(string LastName){
    int i = 0;
    for (i = 0; i < LastName.length();i++){
        if (isspace(LastName[i]) == 0){
            cout << LastName[i];
        }
    }
}

int main(){
    
    string FirstName = "";
    string LastName = "";
    
    int i = 0;
    
    cout << "Enter First Name: ";
    cin >> FirstName;
    
    cout << endl;
    cin.ignore(1);
    cout << "Enter Last Name: ";
    getline(cin, LastName);
    cout << endl;
    
    cout << "Which of these three names would you like:" << endl << endl;
    
    cout << "•";
    for (i = 0; i < 2;i++){
        cout << FirstName[i];
    }
    Space(LastName);
    cout << endl;
    
    cout << "•";
    for (i = 0; i < FirstName.length();i++){
    cout << FirstName[i];
    }
    Space(LastName);
    cout << endl;
    
    cout << "•";
    for (i = 0; i < 1;i++){
    cout << FirstName[i];
    }
    Space(LastName);
    return 0;
}