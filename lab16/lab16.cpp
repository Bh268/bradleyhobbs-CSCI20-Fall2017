
 #include <iostream>
 #include <string>
 #include <iomanip>
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
        double totalPortfolio = 0.0;
        
        stock stock[6];// There are 6 arrays of the Struct "stock"
        
        cout << "Enter 1st Data Set" << endl;
        cin >> stock[0].Name;
        cin >> stock[0].Sector;
        cin >> stock[0].currentValue;
        cin >> stock[0].numberShares;
        
        stock[0].totalValue = stock[0].numberShares * stock[0].currentValue;
        
        cout << "Enter 2nd Data Set" << endl;
        cin >> stock[1].Name;
        cin >> stock[1].Sector;
        cin >> stock[1].currentValue;
        cin >> stock[1].numberShares;
        
        stock[1].totalValue = stock[1].numberShares * stock[1].currentValue;
        
        cout << "Enter 3rd Data Set" << endl;
        cin >> stock[2].Name;
        cin >> stock[2].Sector;
        cin >> stock[2].currentValue;
        cin >> stock[2].numberShares;
        
        stock[2].totalValue = stock[2].numberShares * stock[2].currentValue;
        
        cout << "Enter 4th Data Set" << endl;
        cin >> stock[3].Name;
        cin >> stock[3].Sector;
        cin >> stock[3].currentValue;
        cin >> stock[3].numberShares;
        
        stock[3].totalValue = stock[3].numberShares * stock[3].currentValue;
        
        cout << "Enter 5th Data Set" << endl;
        cin >> stock[4].Name;
        cin >> stock[4].Sector;
        cin >> stock[4].currentValue;
        cin >> stock[4].numberShares;
        
        stock[4].totalValue = stock[4].numberShares * stock[4].currentValue;
        
        cout << "Enter 6th Data Set" << endl;
        cin >> stock[5].Name;
        cin >> stock[5].Sector;
        cin >> stock[5].currentValue;
        cin >> stock[5].numberShares;
        
        stock[5].totalValue = stock[5].numberShares * stock[5].currentValue;
        
        
        cout << endl << endl;
        cout << "Stock Name   No of Shares   Current Value   Total Value" << endl;
        cout << endl;
        cout << "----------   ------------   -------------   ------------" << endl;
        cout << endl;
        
        cout << stock[0].Name << setw (12) << stock[0].numberShares << setw (20) << stock[0].currentValue << setw (15) << stock[0].totalValue << endl;
        cout << stock[1].Name << setw (12) << stock[1].numberShares << setw (20) << stock[1].currentValue << setw (15) << stock[1].totalValue << endl;
        cout << stock[2].Name << setw (12) << stock[2].numberShares << setw (20) << stock[2].currentValue << setw (15) << stock[2].totalValue << endl;
        cout << stock[3].Name << setw (12) << stock[3].numberShares << setw (20) << stock[3].currentValue << setw (15) << stock[3].totalValue << endl;
        cout << stock[4].Name << setw (12) << stock[4].numberShares << setw (20) << stock[4].currentValue << setw (15) << stock[4].totalValue << endl;
        cout << stock[5].Name << setw (12) << stock[5].numberShares << setw (20) << stock[5].currentValue << setw (15) << stock[5].totalValue << endl;
        totalPortfolio = stock[0].totalValue + stock[1].totalValue + stock[2].totalValue + stock[3].totalValue + stock[4].totalValue + stock[5].totalValue;
        cout << "Total Portfolio: $" << totalPortfolio << endl;
        return 0;
        
    }
    
    
    
    
    
    
    
    