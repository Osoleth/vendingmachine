#ifndef SNACK_H
#define SNACK_H
#include "food.h"

class snack : public food
{
public:
    snack(std::string n, double p, int m, int y, int q);
    snack();
    
    int calories;
    double weight;
    
    void  displayDetails() override;
    
    void set_calories(int newCalories);
    int get_calories();
    
    void set_weight(double newWeight);
    double get_weight();
    
};

#endif // SNACK_H
