// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, checkPrime_basicCases) {
    EXPECT_FALSE(checkPrime(1));
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_TRUE(checkPrime(17));
}
TEST(st1, checkPrime_largeNumbers) {
    EXPECT_TRUE(checkPrime(97));
    EXPECT_FALSE(checkPrime(100));
}
TEST(st1, nPrime_firstFew) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
}
TEST(st1, nPrime_midRange) {
    EXPECT_EQ(nPrime(7), 17);
    EXPECT_EQ(nPrime(8), 19);
}
TEST(st1, nextPrime_basic) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(10), 11);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(0), 2);
    EXPECT_EQ(nextPrime(1), 2);
}
TEST(st1, nextPrime_edgeCases) {
    EXPECT_EQ(nextPrime(97), 101);
}
TEST(st1, sumPrime_boundaries) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(2), 0);
}
TEST(st1, sumPrime_twenty) {
    EXPECT_EQ(sumPrime(20), 77);
}
TEST(st1, sumPrime_extended) {
    EXPECT_EQ(sumPrime(30), 129);
}
TEST(st1, sumPrime_large) {
    uint64_t res = sumPrime(2000000);
    uint64_t expected = 142913828922;
    EXPECT_EQ(expected, res);
}
