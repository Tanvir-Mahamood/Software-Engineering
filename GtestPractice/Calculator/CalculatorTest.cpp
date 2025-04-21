#include "pch.h"
#include "Calculator.h"
#include <stdexcept>
using namespace std;

struct CalcFixture : public testing::Test {
    Calculator* calc;

    void SetUp() override {
        calc = new Calculator();
    }

    void TearDown() override {
        delete calc;
    }
};

TEST_F(CalcFixture, AdditionTest) {
    EXPECT_DOUBLE_EQ(calc->add(3.0, 2.0), 5.0);
}

TEST_F(CalcFixture, SubtractionTest) {
    EXPECT_DOUBLE_EQ(calc->subtract(5.0, 3.0), 2.0);
}

TEST_F(CalcFixture, MultiplicationTest) {
    EXPECT_DOUBLE_EQ(calc->multiply(4.0, 2.5), 10.0);
}

TEST_F(CalcFixture, DivisionTest) {
    EXPECT_DOUBLE_EQ(calc->divide(10.0, 2.0), 5.0);
}

TEST_F(CalcFixture, DivisionByZeroThrows) {
    EXPECT_THROW(calc->divide(10.0, 0.0), std::invalid_argument);
}
