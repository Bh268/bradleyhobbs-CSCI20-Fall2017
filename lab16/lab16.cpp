
 #include <iostream>
 using namespace std;
 
struct stock{ // Important to state struct name first and then the strings attavhed to the name first before int main starts
    string Name;
    string Sector;
    int numberShares;
    double currentValue;
    double totalValue;
};

int main()
    {
        stock stock;
        stock.Name = "";
        stock.Sector ="";
        stock.currentValue = 0.0;
        stock.numberShares = 0;
        stock.totalValue = 0.0;
        
        cout << "Enter Data" << endl;
        cin >> stock.Name;
        cin >> stock.Sector;
        cin >> stock.currentValue;
        cin >> stock.numberShares;
        
        stock.totalValue = stock.numberShares * stock.currentValue;
        
        cout << "Stock Name   No of Shares   Current Value   Total Value" << endl;
        cout << endl;
        cout << "----------   ------------   -------------   ------------" << endl;
        cout << endl;
        cout << stock.Name << "         " << stock.numberShares << "             " << stock.currentValue << "           " << stock.totalValue << endl;
        cout << "Total Portfolio: $" << stock.totalValue << endl;
        
        return 0;
        
    }