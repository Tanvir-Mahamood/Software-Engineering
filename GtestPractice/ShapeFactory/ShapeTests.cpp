#include "pch.h"
#include "ShapeFactory.h"
#include <gtest/gtest.h>

struct ShapeTest : public testing::Test {
    std::unique_ptr<Shape> shape;

    void SetUp() override {
        std::cout << "Setup - Preparing shape test" << std::endl;
    }

    void TearDown() override {
        shape.reset();
        std::cout << "Teardown - Cleaning up shape test" << std::endl;
    }
};

TEST_F(ShapeTest, CircleCreation) {
    shape = ShapeFactory::createShape(ShapeFactory::ShapeType::CIRCLE, 5.0);
    EXPECT_NEAR(shape->area(), 78.53975, 0.0001);
    EXPECT_EQ(shape->name(), "Circle");
}

TEST_F(ShapeTest, RectangleCreation) {
    shape = ShapeFactory::createShape(ShapeFactory::ShapeType::RECTANGLE, 4.0, 6.0);
    EXPECT_DOUBLE_EQ(shape->area(), 24.0);
    EXPECT_EQ(shape->name(), "Rectangle");
}

TEST_F(ShapeTest, InvalidShapeType) {
    EXPECT_THROW({
        ShapeFactory::createShape(static_cast<ShapeFactory::ShapeType>(99), 1.0);
        }, std::invalid_argument);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}