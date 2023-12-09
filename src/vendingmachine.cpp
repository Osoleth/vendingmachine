#include "vendingmachine.h"
#include <algorithm>
#include <vector>
#include <iostream>

vendingmachine::vendingmachine(){}
    std::vector<food*> foodItems; //vector of food pointers
   
    void vendingmachine::addItem(food* item){ 
        //adds food object to vector
        foodItems.push_back(item);
    }
   
    void vendingmachine::listItems(){
        for (auto& item: foodItems)
        std::cout << item->name << "\n";
    }
    
    void vendingmachine::purchaseItem(std::string name){
   // Find the food item with the specified name
    auto it = std::find_if(foodItems.begin(), foodItems.end(),
                           [&name](food* f) { return f->name == name; });

    if (it != foodItems.end()) {
        // Check if user has enough credit to purchase the item
        if (userCredit >= (*it)->price) {
            std::cout << "Purchased: " << (*it)->name << "\n";
            userCredit -= (*it)->price;
        } else {
            std::cout << "Not enough credit for this item\n";
        }
    } else {
        std::cout << "Item not found\n";
    }
}
    
    void vendingmachine::insertMoney(double money_in){
    userCredit += money_in;
    }
    
    void vendingmachine::returnChange(){
    std::cout<< "Your change is " << userCredit;
    userCredit = 0; //reset credit
    }
    
    void vendingmachine::checkExpiry(){
    
    }
