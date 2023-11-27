#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H
#include "food.h"
#include <string>
#include <vector>

class vendingmachine
{
public:
    vendingmachine();
    std::vector<food*> foodList;   //a vector of all food objects called foodList    
    double cashOnHand;
    double userCredit;
    
    static void listItems();
    void addItem(food* item);
    void purchaseItem(std::string name);
    void insertMoney(double money_in);
    void returnChange();
    void checkExpiry();
};

#endif // VENDINGMACHINE_H
