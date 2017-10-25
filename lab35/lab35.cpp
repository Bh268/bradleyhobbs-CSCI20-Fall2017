#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

//Class

class TemperatureConverter{
    public:

    void SetTempFromKelvin(double Kelvin);
    void SetTempFromCelsius(double Celsius);
    void SetTempFromFahrenheit(double Fahrenheit);
    void PrintTemperatures();
    
    TemperatureConverter(double Kelvin);
    TemperatureConverter();
    
    double GetTempFromKelvin() const;
    double GetTempAsCelsius() const;
    double GetTempAsFahrenheit() const;
    
    
    private:
    double Kelvin_;
    
};

//Constructors

TemperatureConverter::TemperatureConverter(double Kelvin){
    Kelvin_ = Kelvin;
    return;
}
TemperatureConverter::TemperatureConverter(){
    if (Kelvin_ < 0){
        Kelvin_ = 0.0;
        
    }
    return;
}

void TemperatureConverter::SetTempFromKelvin(double Kelvin){
    Kelvin_ = Kelvin;
    return;
}
void TemperatureConverter::SetTempFromCelsius(double Celsius){
    if (Celsius < 0.0){
        Celsius = 0;
        Kelvin_ = Celsius + 273.15;
    }
    else {
    Kelvin_ = Celsius + 273.15;
    }
    return;
}
void TemperatureConverter::SetTempFromFahrenheit(double Fahrenheit){
    
    if (Fahrenheit < 0.0){
        Fahrenheit = 0.0;
        Kelvin_ = (5 * (Fahrenheit - 32) / 9) + 273.15;
    }
    else {
    Kelvin_ = (5 * (Fahrenheit - 32) / 9) + 273.15;
    }
    return;
}

double TemperatureConverter::GetTempAsCelsius() const{
    double Celsius;
    Celsius = Kelvin_ - 273.15;
    return Celsius;
}

double TemperatureConverter::GetTempAsFahrenheit() const{
    double Celsius = Kelvin_ - 273.15;
    double Fahrenheit;
    Fahrenheit = ((Celsius * 9) / 5 + 32);
    return Fahrenheit;
}

double TemperatureConverter::GetTempFromKelvin() const{
    return Kelvin_;
}

void TemperatureConverter::PrintTemperatures() {
    cout << "Kelvin Temperature is: " << TemperatureConverter::GetTempFromKelvin() << endl;
    cout << "Fahrenheit Temperature is: " << TemperatureConverter::GetTempAsFahrenheit() << endl;
    cout << "Celsius Temperature is: " << TemperatureConverter::GetTempAsCelsius() << endl;
}


