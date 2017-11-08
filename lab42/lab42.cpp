#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int i = 0;
    int j = 0;
    int ItemInventory[10];
    string ItemName[10];
    double ItemPrice[10];
    int ItemNumber[10];
    int ShoppingCartPrice = 0;
    int ItemAmount = 0;
    string itemName;
    char DoneShopping = 'n';
    int itemNumber = 0;
    int AmountOfItems = 0;
    char OutOfStock = 'y';
    
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
    ItemInventory[0] = 100;
    ItemInventory[1] = 100;
    ItemInventory[2] = 100;
    ItemInventory[3] = 100;
    ItemInventory[4] = 100;
    ItemInventory[5] = 100;
    ItemInventory[6] = 100;
    ItemInventory[7] = 100;
    ItemInventory[8] = 100;
    ItemInventory[9] = 100;
    ItemName[0] = "Shirt";
    ItemName[1] = "Pant";
    ItemName[2] = "Sock";
    ItemName[3] = "Hat";
    ItemName[4] = "Beanie";
    ItemName[5] = "Jean";
    ItemName[6] = "Sweater";
    ItemName[7] = "Earbud";
    ItemName[8] = "Sweat";
    ItemName[9] = "Watche";
    ItemPrice[0] = 10.00;
    ItemPrice[1] = 15.00;
    ItemPrice[2] = 20.00;
    ItemPrice[3] = 25.00;
    ItemPrice[4] = 30.00;
    ItemPrice[5] = 35.00;
    ItemPrice[6] = 40.00;
    ItemPrice[7] = 45.00;
    ItemPrice[8] = 50.00;
    ItemPrice[9] = 55.00;
    
    
    cout << "Here is the current Items for sale, their prices, the Item Number, and the amount of each Item that we have in stock:" << endl;
    while (DoneShopping == 'n' || DoneShopping == 'N'){
        
        
            for (i = 0; i < 10;i++){
            if (ItemInventory[i] < 0){
                ItemInventory[i] = 0;
            }
            cout << "Amount in Stock: " << ItemInventory[i] << " | Item Name: " << ItemName[i] << " | Price: $" << setprecision(2) << fixed << ItemPrice[i] << " | Item Number: " << ItemNumber[i] << endl;
            }
            
        cout << endl;
        cout << "How many different items would you like to buy?" << endl;
        cin >> AmountOfItems;
        string ShoppingCart[AmountOfItems];
        int NumberOfItem[AmountOfItems];
        for (j = 0; j < AmountOfItems; j++){
        
            cout << "Enter the amount of the item that you would like to buy, then the Item Number." << endl;
            cin >> ItemAmount >> itemNumber;
            
            
            
            if (ItemAmount > ItemInventory[itemNumber]){
                cout << "We only have " << ItemInventory[itemNumber] << " " << ItemName[itemNumber] << "s left, would you like to buy any?(y/n)" << endl;
                cin >> OutOfStock;
                if (OutOfStock == 'y' || OutOfStock == 'Y'){
                    cout << "How many " << ItemName[itemNumber] << "'s would you like to buy? We Currently have " << ItemInventory[itemNumber] << " in stock." << endl;
                    cin >> itemNumber;
                    ItemInventory[itemNumber] = ItemInventory[itemNumber] - ItemAmount;
                    ShoppingCartPrice = (ItemPrice[itemNumber] * ItemAmount) + ShoppingCartPrice;
                    ShoppingCart[j] = ItemName[itemNumber];
                }
                
                if (OutOfStock == 'n' || OutOfStock == 'N'){
                    cout << "Order for " << ItemAmount << " " << ItemName[itemNumber] << "'s has been canceled." << endl;
                }
            }
            if (ItemAmount <= ItemInventory[itemNumber]){
                ItemInventory[itemNumber] = ItemInventory[itemNumber] - ItemAmount;
                ShoppingCartPrice = (ItemPrice[itemNumber] * ItemAmount) + ShoppingCartPrice;
                ShoppingCart[j] = ItemName[itemNumber];
                NumberOfItem[j] = ItemAmount;
            }
        }
        
        if (itemNumber < 10){
            
            cout << "You have ordered:" << endl;
            for (j = 0; j < AmountOfItems; j++){
            cout << ShoppingCart[j] << " | " << NumberOfItem[j] << endl;
            
            }
            cout << endl;
            cout << "Would you like to continue to checkout?(y/n)" << endl;
            cin >> DoneShopping;
        
        
        }
        else{
            cout << "Please Enter a Valid Item Number and amount." << endl;
            cin >> itemNumber >> ItemAmount;
        }
    }
    if (DoneShopping == 'y' || DoneShopping == 'Y'){
        cout << "Your total comes out to: $" << setprecision(2) << fixed << ShoppingCartPrice;
    }
    return 0;
}

