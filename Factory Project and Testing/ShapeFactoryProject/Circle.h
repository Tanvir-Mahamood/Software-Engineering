#pragma once
#include "Shape.h"

class Circle : public Shape {
    double radius;
public:
    explicit Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
    std::string name() const override {
        return "Circle";
    }
};