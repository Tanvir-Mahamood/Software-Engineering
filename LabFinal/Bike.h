#pragma once
#include "Vehicles.h"

class Bike : public Vehicle {
    double speed;
public:
    explicit Bike(double r) : speed(r) {}
    double drive() const override {
        return speed;
    }
};