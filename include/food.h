#ifndef FOOD_H
#define FOOD_H
#include <string>
#include <vector>

class food{


public:
    food();
    std::string name;
    double price;
    int quantity;
    std::string expiryDate;
    
    std::string get_name();
    double get_price();
    int get_quantity();
    std::string get_expiryDate();
    
    void set_name(std::string newName);
    void set_price(double newPrice);
    void set_quantity(int newQuantity);
    void set_expiryDate(std::string newExpiry);
    
    void purchase(int quantityPurchased);
    virtual void displayDetails();
};

#endif // FOOD_H
