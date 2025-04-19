#pragma once
#include "Shape.h"

class Rectangle : public Shape {
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
    std::string name() const override {
        return "Rectangle";
    }
};