#ifndef DRINK_H
#define DRINK_H
#include "food.h"

class drink : public food
{
public:
    drink(std::string n, double p, int m, int y, int q);
    
    drink();
    
    double volume;
    bool carbonated;
    void displayDetails() override;

    void set_carbonated(bool newCarbonated);
    void set_volume(double newVolume);
    
    double get_volume();
    bool get_carbonated();
};

#endif // DRINK_H
