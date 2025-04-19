#include "pch.h"
#include "VehicleFactory.h"
#include <gtest/gtest.h>

struct VehicleTest : public testing::Test {
    std::unique_ptr<Vehicle> obj;

    void SetUp() override {
        std::cout << "Setup - Preparing shape test" << std::endl;
    }

    void TearDown() override {
        obj.reset();
        std::cout << "Teardown - Cleaning up shape test" << std::endl;
    }
};

TEST_F(VehicleTest, CarCreation) {
    obj = VehicleFactory::createVehicle(VehicleFactory::VehicleType::CAR, 5.0);
    EXPECT_NEAR(obj->drive(), 5.0, 001);
}

TEST_F(VehicleTest, CarCreation) {
    obj = VehicleFactory::createVehicle(VehicleFactory::VehicleType::TRUCK, 7.0);
    EXPECT_NEAR(obj->drive(), 7.0, 001);
}

TEST_F(VehicleTest, CarCreation) {
    obj = VehicleFactory::createVehicle(VehicleFactory::VehicleType::BIKE, 3.0);
    EXPECT_NEAR(obj->drive(), 3.0, 001);
}
/*
TEST_F(Vehicle, InvalidVehicleType) {
    EXPECT_THROW({
        VehicleFactory::createShape(static_cast<VehicleFactory::VehicleType>(99), 1.0);
        }, std::invalid_argument);
}*/

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}