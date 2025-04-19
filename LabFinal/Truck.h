#pragma once
#include "Vehicles.h"

class Truck : public Vehicle {
    double speed;
public:
    explicit Truck(double r) : speed(r) {}
    double drive() const override {
        return speed;
    }
};