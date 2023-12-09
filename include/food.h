#ifndef FOOD_H
#define FOOD_H
#include <string>

class food{
public:
    food(std::string n, double p, int m, int y, int q);
    std::string name;
    double price;
    int quantity;
    
    food();
    
    struct expirationdate{
    int month;
    int year;
    };
    
    expirationdate expiryDate;
    
    std::string get_name();
    double get_price();
    int get_quantity();
    std::string get_expiryDate();
    
    void set_name(std::string newName);
    void set_price(double newPrice);
    void set_quantity(int newQuantity);
    void set_expiryDate(int m, int y);
    void add_foodItem(food* item);
    void purchase(int quantityPurchased);
    virtual void displayDetails();
};

#endif // FOOD_H
