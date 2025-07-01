#include <gtest/gtest.h>
#include "Square.h"

TEST(Square, Square) {
    EXPECT_EQ(square::square(10), 100);
    EXPECT_EQ(square::square(7), 49);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
