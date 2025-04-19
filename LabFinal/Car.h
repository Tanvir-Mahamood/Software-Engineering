#pragma once
#include "Vehicles.h"

class Car : public Vehicle {
    double speed;
public:
    explicit Car(double r) : speed(r) {}
    double drive() const override {
        return speed;
    }
};