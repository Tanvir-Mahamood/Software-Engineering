#include <iostream>
#include "VehicleFactory.h"

int main() {
    try {
        // Create shapes using the factory
        auto car = VehicleFactory::createShape(VehicleFactory::VehicleType::CAR, 30.0);
        auto bike = VehicleFactory::createShape(VehicleFactory::VehicleType::BIKE, 15.0);
        auto truck = VehicleFactory::createShape(VehicleFactory::VehicleType::TRUCK, 50.0);
        
        // Display vehicle information
        std::cout << "Car Speed : " << car->drive() << std::endl;
        std::cout << "Bike Speed : " << bike->drive() << std::endl;
        std::cout << "Truck Speed : " << truck->drive() << std::endl;
                  
        
                  
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}