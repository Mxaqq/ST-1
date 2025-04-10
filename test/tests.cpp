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

// Дополнительный тест для функции checkPrime() с большими числами
TEST(CheckPrimeTest, LargeNumberTest) {
    EXPECT_TRUE(checkPrime(97));    // 97 - простое
    EXPECT_FALSE(checkPrime(100));  // 100 - составное
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
    // 7-е простое число = 17, 8-е простое число = 19
    EXPECT_EQ(nPrime(7), 17);
    EXPECT_EQ(nPrime(8), 19);
}

// Крайний тест для функции nPrime() с более высоким номером
TEST(NPrimeTest, ExtremeCaseHighN) {
    // 100-е простое число должно быть 541.
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
    // Следующее простое число после 97 (простое) равно 101
    EXPECT_EQ(nextPrime(97), 101);
}

// Крайний тест для функции nextPrime() с очень большим входным значением
TEST(NextPrimeTest, ExtremeLargeInputTest) {
    // Для большого значения проверяем, что найденное следующее число действительно простое,
    // и что оно больше исходного.
    uint64_t value = 1000000;
    uint64_t next = nextPrime(value);
    EXPECT_TRUE(checkPrime(next));
    EXPECT_GT(next, value);
}

// Тесты для функции sumPrime()
TEST(SumPrimeTest, SumUpToBoundaries) {
    // Сумма простых чисел до 10: 2 + 3 + 5 + 7 = 17
    EXPECT_EQ(sumPrime(10), 17);
    // Если hbound меньше 2, сумма должна быть 0
    EXPECT_EQ(sumPrime(2), 0);
}

// Дополнительный тест для sumPrime() на более широком промежутке
TEST(SumPrimeTest, SumUpToTwenty) {
    // Простые числа до 20: 2, 3, 5, 7, 11, 13, 17, 19, сумма = 77
    EXPECT_EQ(sumPrime(20), 77);
}

// Дополнительный тест для функции sumPrime() для проверки другого промежутка
TEST(SumPrimeTest, SumPrimeExtendedTest) {
    // Простые числа до 30: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, сумма = 129
    EXPECT_EQ(sumPrime(30), 129);
}
