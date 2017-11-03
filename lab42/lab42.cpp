#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int i = 0;
    int ItemInventory[10];
    string ItemName10];
    double ItemPrice[10];
    int ItemNumber[10];
    string ShoppingCart;
    int ShoppingCartPrice;
    int ItemAmount;
    string itemName;
    char DoneShopping = 'y';
    int itemNumber;
    
    ItemNumber[0] = 0;
    ItemNumber[1] = 1;
    ItemNumber[2] = 2;
    ItemNumber[3] = 3;
    ItemNumber[4] = 4;
    ItemNumber[5] = 5;
    ItemNumber[6] = 6;
    ItemNumber[7] = 7;
    ItemNumber[8] = 8;
    ItemNumber[9] = 9;
    ItemInventory[0] = 10;
    ItemInventory[1] = 10;
    ItemInventory[2] = 10;
    ItemInventory[3] = 10;
    ItemInventory[4] = 10;
    ItemInventory[5] = 10;
    ItemInventory[6] = 10;
    ItemInventory[7] = 10;
    ItemInventory[8] = 10;
    ItemInventory[9] = 10;
    ItemName[0] = "Shirt";
    ItemName[1] = "Pants";
    ItemName[2] = "Socks";
    ItemName[3] = "Hats";
    ItemName[4] = "Beanies";
    ItemName[5] = "Jeans";
    ItemName[6] = "Sweaters";
    ItemName[7] = "Earbuds";
    ItemName[8] = "Sweats";
    ItemName[9] = "Watches";
    ItemPrice[0] = 10.00;
    ItemPrice[1] = 15.00;
    ItemPrice[2] = 20.00;
    ItemPrice[3] = 10.00;
    ItemPrice[4] = 10.00;
    ItemPrice[5] = 10.00;
    ItemPrice[6] = 10.00;
    ItemPrice[7] = 10.00;
    ItemPrice[8] = 10.00;
    ItemPrice[9] = 10.00;
    
    
    cout << "Here is the current Items for sale, their prices, the Item Number, and the amount of each Item that we have in stock:" << endl;
    while (DoneShopping == 'y' || DoneShopping == 'Y'){
        
        
        while (i < 10){
            for (i = 0; i < 10;i++)
            if (ItemInventory[0][itemNumber] <= 0){
                cout << ItemName[0][itemNumber] << " is out of stock" << endl;
                ItemIvventory
            }
            cout << "Amount in Stock: " << ItemInventory[0][i] << " | Item Name: " << ItemName[0][i] << " | Price: $" << setprecision(2) << fixed << ItemPrice[0][i] << " | Item Number: " << ItemNumber[0][i] << endl;
        }
        
        cout << endl;
        cout << "Enter the the Item's name that you would like to buy, then the amount AFTER the item name." << endl;
        cin >> itemNumber >> ItemAmount;
        
        if (itemNumber < 10){
        
        
            
        
        
        
        }
        else{
            cout << "Please Enter a Valid Item Number and amount." << endl;
            cin >> itemNumber >> ItemAmount;
        }
    }
    return 0;
}

