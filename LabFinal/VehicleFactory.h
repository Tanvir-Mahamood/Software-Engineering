#pragma once
#include "Vehicles.h"
#include "Car.h"
#include "Bike.h"
#include "Truck.h"
#include <memory>
#include <stdexcept>

class VehicleFactory {
public:
    enum class VehicleType { CAR, BIKE, TRUCK};
    
    static std::unique_ptr<Vehicle> createShape(VehicleType type, double param1) {
        switch (type) {
            case VehicleType::CAR:
                return std::make_unique<Car>(param1);
            case VehicleType::BIKE:
                return std::make_unique<Bike>(param1);
            case VehicleType::TRUCK:
                return std::make_unique<Truck>(param1);
            default:
                throw std::invalid_argument("Unknown vehicle type");
        }
    }
};