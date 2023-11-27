#include "food.h"
#include <iostream>
#include <string>
#include <vector>
#include <vendingmachine.h>


food::food(){}

void food::set_name(std::string newName){
name = newName;
}

void food::set_price(double newPrice){
price = newPrice;
}

void food::set_quantity(int newQuantity){
quantity = newQuantity;
}

void food::set_expiryDate(std::string newExpiry){
expiryDate = newExpiry;
}

void food::purchase(int quantityPurchased){
    quantity = quantity - quantityPurchased;
    if (quantity < 0){
    quantity = 0;
    }
}

std::string food::get_name(){return name;}
double food::get_price(){return price;}
int food::get_quantity(){return quantity;}
std::string food::get_expiryDate(){return expiryDate;}

void food::displayDetails(){
  std::cout << "Item: " << get_name() << std::endl;
  std::cout << "Price: $" << get_price() << std::endl;
  std::cout << "Quantity: " << get_quantity() << std::endl;
  std::cout << "Expiration Date: " << get_expiryDate() << std::endl;
}
