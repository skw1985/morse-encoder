#include <gtest/gtest.h>
#include "../include/encoder.hpp"

class EncoderTest : public testing::Test {
public:
};

TEST_F(EncoderTest, CheckOneCharValid)
{
    EXPECT_EQ(".-", MorseEncoder::CharToMorse('a'));
}