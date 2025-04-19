#include <iostream>
#include "ShapeFactory.h"

int main() {
    try {
        // Create shapes using the factory
        auto circle = ShapeFactory::createShape(ShapeFactory::ShapeType::CIRCLE, 3.0);
        auto rectangle = ShapeFactory::createShape(ShapeFactory::ShapeType::RECTANGLE, 4.0, 5.0);
        
        // Display shape information
        std::cout << "Shape: " << circle->name() 
                  << ", Area: " << circle->area() << std::endl;
                  
        std::cout << "Shape: " << rectangle->name() 
                  << ", Area: " << rectangle->area() << std::endl;
                  
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}