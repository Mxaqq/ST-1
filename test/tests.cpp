// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


// Тесты для проверки функции checkPrime()
TEST(CheckPrimeTest, BasicCases) {
    EXPECT_FALSE(checkPrime(1));
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_TRUE(checkPrime(17));
}


TEST(CheckPrimeTest, LargeNumberTest) {
    EXPECT_TRUE(checkPrime(97));
    EXPECT_FALSE(checkPrime(100));
}

// Тесты для функции nPrime()
TEST(NPrimeTest, FirstFewPrimes) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
}

// Дополнительный тест для функции nPrime() для промежуточных значений
TEST(NPrimeTest, MidRangeTest) {
    EXPECT_EQ(nPrime(7), 17);
    EXPECT_EQ(nPrime(8), 19);
}

// Крайний тест для функции nPrime() с более высоким номером
TEST(NPrimeTest, ExtremeCaseHighN) {
    EXPECT_EQ(nPrime(100), 541);
}

// Тесты для функции nextPrime()
TEST(NextPrimeTest, NextPrimeBasic) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(10), 11);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(0), 2);
    EXPECT_EQ(nextPrime(1), 2);
}

// Дополнительный тест для функции nextPrime() для граничного случая
TEST(NextPrimeTest, EdgeCaseTest) {
    EXPECT_EQ(nextPrime(97), 101);
}

// Крайний тест для функции nextPrime() с очень большим входным значением
TEST(NextPrimeTest, ExtremeLargeInputTest) {
    uint64_t value = 1000000;
    uint64_t next = nextPrime(value);
    EXPECT_TRUE(checkPrime(next));
    EXPECT_GT(next, value);
}

// Тесты для функции sumPrime()
TEST(SumPrimeTest, SumUpToBoundaries) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(2), 0);
}

// Дополнительный тест для sumPrime() на более широком промежутке
TEST(SumPrimeTest, SumUpToTwenty) {
    EXPECT_EQ(sumPrime(20), 77);
}

// Дополнительный тест для функции sumPrime() для проверки другого промежутка
TEST(SumPrimeTest, SumPrimeExtendedTest) {
    EXPECT_EQ(sumPrime(30), 129);
}
