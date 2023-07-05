#include "pch.h"
#include <vector>
#include "../Project13/prime-factors.cpp"
using namespace std;
TEST(TestCaseName, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(TestCaseName, Of2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}