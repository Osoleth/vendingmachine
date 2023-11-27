#include "snack.h"
#include <iostream>

void snack::displayDetails(){
  std::cout << "Item: " << get_name() << std::endl;
  std::cout << "Price: $" << get_price() << std::endl;
  std::cout << "Quantity: " << get_quantity() << std::endl;
  std::cout << "Expiration Date: " << get_expiryDate() << std::endl;
  std::cout << "Calories: " << get_calories() << std::endl;
  std::cout << "Weight:  " << get_weight() << std::endl;
}

void snack::set_weight(double newWeight){weight = newWeight;}
void snack::set_calories(int newCalories){calories = newCalories;}

double snack::get_weight(){return weight;}
int snack::get_calories(){return calories;}
