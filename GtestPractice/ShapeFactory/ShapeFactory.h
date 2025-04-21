#pragma once
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <memory>

class ShapeFactory {
public:
    enum class ShapeType { CIRCLE, RECTANGLE };

    static std::unique_ptr<Shape> createShape(ShapeType type, double param1, double param2 = 0) {
        switch (type) {
        case ShapeType::CIRCLE:
            return std::make_unique<Circle>(param1);
        case ShapeType::RECTANGLE:
            return std::make_unique<Rectangle>(param1, param2);
        default:
            throw std::invalid_argument("Unknown shape type");
        }
    }
};