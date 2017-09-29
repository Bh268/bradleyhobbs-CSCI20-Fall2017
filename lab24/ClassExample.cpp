#include <string>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class person{//Variables in Class have to end in underscore 
    private:
    string eyes_;
    string arms_;
    double weight_;
    string hairColor_;
    double height_;
    char gender_;
    int birthday_;
    
    public:
    dancing(style);
    exercising(Time, intensity);
    study(Time, intensity);
    work(Time, Pay);
    geteyes();
    seteyes();
    
    
};

#include <iostream>
using namespace std;

class Salary
{
    private: 
    
        double annual_; // data Fields
        
    public:
    
        void SetAnnualSalary(double salary)
        {
            annual_ = salary; // Mutator Function
        }
        
        double GetAnnualSalary()
        {
            return annual_; // Accessor Function
        }
        
        void Print()
        {
             cout << "$" << annual_ << endl;
        }
        
};

//Comment the class per the class style guide
//Identify the following parts of the class
//      data field
//      mutator function
//      accessor function
//Create a main function that creates an object and runs all of the functions in order
