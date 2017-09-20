// Kaden Hurlimann
// Bradley Hobbs
// assignment one paystub
// 9/7
//
//
// Problem statement
//
// Create a person’s weekly pay stub based on hourly pay, hours, and mileage reimbursement.
// Determine their gross wage and net pay if they pay for health insurance and 17% in taxes (after health insurance).  
// Then it should add the mileage reimbursement to their wage at a rate of $.35 per mile. 
// Your program should accept the following information: 
// employee name (first and last as a single line), hours worked, hourly pay, 
// insurance cost, starting odometer reading, and ending odometer reading.
// It should output a pay stub 
// http://www.pay-stubs.com/sample-pay-stub/ Links to an external site. 
// with the employees name, hours, hourly pay, gross pay, net pay (after taxes and health insurance),
// reimbursement, and total pay (net pay and reimbursement).




#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//struct Below
            //employee name (first and last as a single line), hours worked
            //hourly pay, insurance cost, starting odometer reading, and ending odometer reading
            
            
    struct mileage {
        
        double reimbursementTotal;
        int odometerStart;
        int odometerEnd;
                    };

   int main ()
   {
        
        string firstName;
        string lastName;
        double hourlyPay;
        double hoursWorked;
        double insuranceCost; // cost of insurance
        double netPay; // pay after deductions are deducted from gross pay
        double totalPay; // net pay with reimbursements added
        double grossPay; // pay without deductions
        const double mileageReimbursementRate = 0.35; // the rate per mile that is reimbursed
        
        mileage mileage;
        
        cout << "Please enter name as \"First Last\"" << endl;
        cin >> firstName >> lastName;
        
        cout << endl << "Enter hours Worked" << endl;
        cin >> hoursWorked;
        
        cout << endl << "Enter Hourly Pay" << endl;
        cin >> hourlyPay;
        
        cout << endl << "Enter Insurance Cost" << endl;
        cin >> insuranceCost;
        
        cout << endl << "Enter Odometer Reading start to finish like: 8980-8991" << endl;
        cin >> mileage.odometerStart >> mileage.odometerEnd;
        
        
        
        
        //Math goes below
        mileage.odometerEnd = mileage.odometerEnd * -1;
        mileage.reimbursementTotal = mileageReimbursementRate * (mileage.odometerEnd - mileage.odometerStart);
        grossPay = hoursWorked * hourlyPay;
        netPay = grossPay - insuranceCost;
        totalPay = netPay + mileage.reimbursementTotal;
        
        
        
        
        //employees name, hours, hourly pay, gross pay
        //net pay (after taxes and health insurance), reimbursement, and total pay (net pay and reimbursement)
        
        
        
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "     Employee Name     " << endl;
        cout << "          " << firstName << " " << lastName << "          " << endl;
        cout << endl;
        cout << "     Hours Worked     Hourly Pay     Reimbursement" << endl;
        cout << "         " << hoursWorked << "             $" << setprecision(2) << fixed << hourlyPay << "          $" << mileage.reimbursementTotal << "     " << endl;
        cout << endl;
        cout << endl;
        cout << "     Gross Pay     Net Pay     Total Pay     " << endl;
        cout << "      $" << setprecision(2) << fixed << grossPay << "      $" << setprecision(2) << fixed << netPay << "     $" << setprecision(2) << fixed <<totalPay << "     " << endl;
        
        return 0;
    }