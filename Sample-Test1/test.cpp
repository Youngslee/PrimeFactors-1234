#include "pch.h"
#include <vector>
#include "../Project13/prime-factors.cpp"
using namespace std;
class PrimeFixture : public testing::Test
{
public:
	PrimeFactor prime_factor;
	vector<int> expected = {};
};
TEST_F(PrimeFixture, Of1) {
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected.push_back(2);
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, Of3) {
	expected.push_back(3);
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, Of4) {
	expected.push_back(2);
	expected.push_back(2);
	EXPECT_EQ(expected, prime_factor.of(4));
}