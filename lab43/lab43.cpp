#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;


class Shop{
    public:
    void PrintInventory();
    void Inventory();
    void ShoppingCart();
    void TotalPrice();
    
    Shop();
    
    int Inventory(int ItemNumber, int AmountOfItem);
    int ShoppingCart(int ItemNumber, int AmountOfItem);
    int TotalPrice(int ItemNumber. int AmountOfItem);
    
    private:
    int ItemNumber_[];
    int ItemPrice_[];
    int ItemInventory_[];
    string ItemName_[];
    
};

Shop::Shop(){
    Shop = 0;
    
    int ItemInventory[10];
    string ItemName[10];
    double ItemPrice[10];
    int ItemNumber[10];
    
    int i = 0;
    
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
    ItemName[9] = "Watch";
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
    
    for ( i = 0; i < 10;i++){
        ItemNumber_[i] = ItemNumber[i];
        ItemPrice_[i] = ItemPrice[i];
        ItemInventory_[i] = ItemInventory[i];
        ItemName_[i] = ItemName[i];
    }
}


void Shop::PrintInventory(){
    
    int i = 0;
    
    for (i = 0; i < 10; i++){
        
        if (ItemInventory_[i] < 0){
                ItemInventory_[i] = 0;
            }
            
            cout << "Amount in Stock: " << ItemInventory_[i] << " | Item Name: " << ItemName_[i] << " | Price: $" << setprecision(2) << fixed << ItemPrice_[i] << " | Item Number: " << ItemNumber_[i] << endl;
            }
            
    };

void Shop::Inventory(){
    
}

void Shop::ShoppingCart(){
    
}

void Shop::TotalPrice(){
    
}

int Shop::Inventory(int ItemNumber, int AmountOfItem){
    if (AmountOfItem <= ItemInventory_[ItemNumber]){
    ItemInventory_[ItemNumber] = ItemInventory_[ItemNumber] - AmountOfItem
    }
    if (AmountOfItem > ItemInventory_[ItemNumber]){
        cout << "We only have " << ItemInventory_[ItemNumber] << " " << ItemName_ << "'s left" << endl;
    }
}

int Shop::ShoppingCart(int ItemNumber, int AmountOfItem){
    
}

int Shop::TotalPrice(int ItemNumber, int AmountOfItem){
    
}

int main(){
    Shop Shop;
    
    
    
    cout << "Welsome to the Shop, these are the current Items we have in Stock: " << endl;
    Shop.PrintInventory();
    cout << "Type the Item Number of the Item you want then the amount of that item you want." << endl;
    cin >> 
    
    return 0;
}