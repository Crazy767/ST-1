// Copyright 2024 Skotin Alexander
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// Тесты для функции checkPrime
TEST(CheckPrimeTest, HandlesZeroInput) {
    EXPECT_FALSE(checkPrime(0));
}

TEST(CheckPrimeTest, HandlesOneInput) {
    EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, HandlesPrimeInput) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(29));
}

TEST(CheckPrimeTest, HandlesNonPrimeInput) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(100));
    EXPECT_FALSE(checkPrime(222));
}

// Тесты для функции nPrime
TEST(NPrimeTest, FirstPrime) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, FifthPrime) {
    EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, TenthPrime) {
    EXPECT_EQ(nPrime(10), 29);
}

// Тесты для функции nextPrime
TEST(NextPrimeTest, StartFromNonPrime) {
    EXPECT_EQ(nextPrime(14), 17);
}

TEST(NextPrimeTest, StartFromPrime) {
    EXPECT_EQ(nextPrime(29), 31);
}

TEST(NextPrimeTest, LargeNumber) {
    EXPECT_EQ(nextPrime(97), 101);
}

// Тесты для функции sumPrime
TEST(SumPrimeTest, SumToTen) {
    EXPECT_EQ(sumPrime(10), 17); // 2 + 3 + 5 + 7
}

TEST(SumPrimeTest, SumToFifty) {
    EXPECT_EQ(sumPrime(50), 328); // Сумма простых чисел до 50
}

TEST(SumPrimeTest, SumToHundred) {
    EXPECT_EQ(sumPrime(100), 1060); // Сумма простых чисел до 100
}
