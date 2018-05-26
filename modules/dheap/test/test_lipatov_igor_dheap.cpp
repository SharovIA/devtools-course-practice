#include <gtest/gtest.h>
#include "include/dheap.h"

TEST(Lipatov_Igor_DHeapTest, CanConstruct) {
    // Arrange
    Dheap dh(3,10);
    // Act
    Vertex tmp;
    for (int i = 0; i < 10; i++) {
        tmp.first = i;
        tmp.second = i * i;
        dh.push(tmp);
    }
    // Assert
    EXPECT_EQ(dh.getVal(9),81);
}

TEST(Lipatov_Igor_DHeapTest, CantUseEmpty) {
    // Arrange
    Dheap dh(3,10);
    // Act
    // Assert
    EXPECT_EQ(dh.pop(),Vertex(-1,-1));
}