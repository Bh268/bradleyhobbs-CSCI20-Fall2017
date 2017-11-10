#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;



int main(){
    
    char FirstName[11];
    char LastName[21];
    int i = 0;
    
    
    cout << "Enter First Name: ";
    cin >> FirstName;
    
    cout << endl;
    
    cout << "Enter Last Name: ";
    cin >> LastName;
    
    cout << endl;
    
    cout << "UserName Possibility 1: ";
    
    for (i = 0; i < 2;i++) {
      cout << FirstName[i];
   }
   for (i = 0; LastName[i] != '\0';i++){
       cout << LastName[i];
   }
    cout << endl;
    
    cout << "UserName Possibility 2: ";
    for (i = 0;FirstName[i] != '\0';i++) {
      cout << FirstName[i];
   }
   for (i = 0; LastName[i] != '\0';i++){
       cout << LastName[i];
   }
   cout << endl;
   
    cout << "UserName Possibility 3: ";
    for (i = 0; i < 1;i++) {
      cout << FirstName[i];
   }
   for (i = 0; LastName[i] != '\0';i++){
       cout << LastName[i];
   }
    
    return 0;
}