#include "drink.h"
#include <iostream>
void drink::displayDetails(){
  std::cout << "Item: " << get_name() << std::endl;
  std::cout << "Price: $" << get_price() << std::endl;
  std::cout << "Quantity: " << get_quantity() << std::endl;
  std::cout << "Expiration Date: " << get_expiryDate() << std::endl;
  std::cout << "Carbonated: " << get_carbonated() << std::endl;
  std::cout << "Volume:  " << get_volume() << std::endl;
}

double drink::get_volume(){return volume;}
bool drink::get_carbonated(){return carbonated;}

void drink::set_volume(double newVolume){volume = newVolume;}
void drink::set_carbonated(bool newCarbonated){carbonated = newCarbonated;}
