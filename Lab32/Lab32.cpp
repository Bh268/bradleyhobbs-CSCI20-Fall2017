/*

*/

#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;


int main(){
    double AGI;
    string FirstName;
    string LastName;
    string filingStatus;
    double Withheld;
    double Wages;
    const int PersonalExemption = 4050;
    const int SingleDedeuction = 6350;
    const int MarriedDeduction = 12700;
    double tax;
    double refund;
    char FilingStatusSwitch;
    
    
    cout << "Enter Name:" << endl;
    cin >> FirstName;
    cin >> LastName;
    
    cout << "Enter Filing Status(Single/Married)" << endl;
    cin >> filingStatus;
    if (filingStatus == "Single" || filingStatus == "single"){
        FilingStatusSwitch = 'A';
    }
    
    if (filingStatus == "Married" || filingStatus == "married"){
        FilingStatusSwitch = 'B';
    }
    
    
    
    switch(FilingStatusSwitch) {
        
        case 'A':
    
    
        cout << "Enter Wages" << endl;
        cin >> Wages;
        
        cout << "Enter Withheld" << endl;
        cin >> Withheld;
        
        AGI = (((Withheld + Wages) - PersonalExemption) - SingleDedeuction);
        
        if (AGI <= 9,325 && AGI > 0){
            tax = (AGI * 0.1);
            goto TaxRefund;
        }
        
        if (AGI <= 37950 && AGI > 9326){
            tax = ((AGI - 9325) * 0.15) + 932.5;
            goto TaxRefund;
        }
        
        if (AGI <= 91900 && AGI > 37951){
            tax = ((AGI - 37950) * 0.25) + 5226.25;
            goto TaxRefund;
        }
        
        if (AGI <= 191650 && AGI > 91901){
            tax = ((AGI - 91900) * 0.28) + 18713.75;
            goto TaxRefund;
        }
        
        if (AGI <= 416700 && AGI > 191651){
            tax = ((AGI - 191650) * 0.33) + 46643.75;
            goto TaxRefund;
        }
        
        if(AGI > 416700){
            tax = ((AGI - 416700) * 0.396) + 120910.25;
            goto TaxRefund;
        }
        
    
    
    case 'B':
    
    
        cout << "Enter Wages" << endl;
        cin >> Wages;
        
        cout << "Enter Withheld" << endl;
        cin >> Withheld;
        
        AGI = (((Withheld + Wages) - PersonalExemption) - MarriedDeduction);
        
        if (AGI <= 18650 && AGI > 0){
            tax = (AGI * 0.1);
            goto TaxRefund;
        }
        
        if (AGI <= 75900 && AGI > 18651){
            tax = ((AGI - 18650) * 0.15) + 1865;
            goto TaxRefund;
        }
        
        if (AGI <= 153100 && AGI > 75901){
            tax = ((AGI - 75900) * 0.25) + 10452.5;
            goto TaxRefund;
        }
        
        if (AGI <= 233350 && AGI > 153101){
            tax = ((AGI - 153100) * 0.28) + 29752.5;
            goto TaxRefund;
        }
        
        if (AGI <= 416700 && AGI > 233350){
            tax = ((AGI - 233350) * 0.33) + 52222.5;
            goto TaxRefund;
        }
        
        if (AGI > 416700){
            tax = ((AGI - 470700) * 0.396) + 112728;
            goto TaxRefund;
        }
    
        
    }
    TaxRefund:
    if (tax < Withheld){
        refund = tax;
        
        
        cout << "Name: " << FirstName << " " << LastName << endl;
        cout << "Total Gross Adjusted Income: $" << AGI << endl;
        cout << FirstName << " " << LastName << " is entitled to a REFUND of $" << refund << endl;
        return 0;
    }
    if (tax > Withheld){
        
        cout << "Name: " << FirstName << " " << LastName << endl;
        cout << "Total Gross Adjusted Income: $" << AGI << endl;
        cout << "Total Tax Owed: $" << tax << endl;
        
        return 0;
    }
    
    return 0;
}