#pragma once
#include <string>
#include <memory>

class Vehicle {
public:
    virtual ~Vehicle() = default;
    //virtual double () const = 0;
    virtual double drive() const = 0;
};