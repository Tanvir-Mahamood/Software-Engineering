#include "pch.h"
#include <iostream>
using namespace std;

class MakeSquare {
	int val, ans;
public:
	MakeSquare(): val(0) {}
	void setValue(int newVal) { this->val = newVal; }
	int getValue() { ans = this->val * this->val; return ans; }
};

struct TF : public testing::Test {
	MakeSquare* ob1;
	void SetUp() { cout << "setup" << endl; ob1 = new MakeSquare(); }
	void TearDown() { cout << "teardown" << endl; delete ob1; }
};

TEST_F(TF, SubTestName) {
	// ASSERT_TRUE(100 == 100);
	// EXPECT_TRUE(100 == 100);
	// cout << "Test Called_0>>>>" << endl;

	ob1->setValue(5);
	ASSERT_EQ(ob1->getValue(), 25);
}

TEST_F(TF, SubTestName_1) {
	ob1->setValue(7);
	ASSERT_EQ(ob1->getValue(), 49);
	// cout << "Test Called_1>>>>" << endl;
}