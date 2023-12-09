#include "food.h"
#include "snack.h"
#include "drink.h"
#include "vendingmachine.h"
#include <iostream>
#include <ostream>
#include <vector>

void mainWindow(vendingmachine &vendy){
std::string selectionName;
char yaynay;
/*
 * view all items in vending machine print food list vector contents
 * put in money and get change
 * select and purchase items 
 */

std::cout<<"Welcome to Vendy, please select an option" <<std::endl;
vendy.listItems();
std::cout<<"Enter an item name to make a selection"<<std::endl;
std::cin>>selectionName;
std::cout<<"Purchase item? Y/N" <<std::endl;
std::cin>>yaynay;
if (yaynay == 'Y' || 'y'){
std::cout << "Please add credits";
vendy.purchaseItem("");
}
}


int main()
{
    std::vector<food*> foodItems;
    vendingmachine vendy;
    vendy.listItems();
    food Banana("Banana", 5.00, 06, 2024, 1);
    food Doughnut("Doughnut", 5.00, 06, 2024, 1);
    snack Chips("Chips", 2.00, 06, 2026, 1);
    drink Sprite("Sprite", 3.50, 10, 2028, 1);
    vendy.addItem(&Banana);
    vendy.addItem(&Doughnut);
    vendy.addItem(&Chips);
    vendy.addItem(&Sprite);
    mainWindow(vendy);
    Banana.displayDetails();
    return 0;
}

//set units
//error handling
//deconstructor and rule of three for data like foodList
//private or public class members
