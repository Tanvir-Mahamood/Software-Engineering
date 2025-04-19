#include <iostream>
#include <string>
#include <memory>
#include <stdexcept>

// Base Shape class
class Shape {
public:
    virtual ~Shape() = default;
    virtual double area() const = 0;
    virtual std::string name() const = 0;
};

// Circle implementation
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

// Rectangle implementation
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

// Shape Factory
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

// Main function
int main() {
    try {
        auto circle = ShapeFactory::createShape(ShapeFactory::ShapeType::CIRCLE, 3.0);
        auto rectangle = ShapeFactory::createShape(ShapeFactory::ShapeType::RECTANGLE, 4.0, 5.0);
        
        std::cout << "Shape: " << circle->name() << ", Area: " << circle->area() << std::endl;
        std::cout << "Shape: " << rectangle->name() << ", Area: " << rectangle->area() << std::endl;
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}