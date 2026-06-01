// Copyright 2025 UNN-CS
#include <gtest/gtest.h>

#include "alg.h"

TEST(CheckPrime, RejectsNumbersBelowTwo) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrime, AcceptsSmallPrimes) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(97));
}

TEST(CheckPrime, RejectsCompositeNumbers) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(221));
  EXPECT_FALSE(checkPrime(1001));
}

TEST(CheckPrime, HandlesSquareOfPrime) {
  EXPECT_FALSE(checkPrime(49));
  EXPECT_FALSE(checkPrime(121));
}

TEST(CheckPrime, HandlesLargePrime) {
  EXPECT_TRUE(checkPrime(7919));
}

TEST(NPrime, ZeroIndexReturnsZero) {
  EXPECT_EQ(0U, nPrime(0));
}

TEST(NPrime, FindsFirstPrimes) {
  EXPECT_EQ(2U, nPrime(1));
  EXPECT_EQ(3U, nPrime(2));
  EXPECT_EQ(5U, nPrime(3));
  EXPECT_EQ(29U, nPrime(10));
}

TEST(NPrime, FindsHundredthPrime) {
  EXPECT_EQ(541U, nPrime(100));
}

TEST(NextPrime, StartsFromBelowTwo) {
  EXPECT_EQ(2U, nextPrime(0));
  EXPECT_EQ(2U, nextPrime(1));
}

TEST(NextPrime, DoesNotReturnInputItself) {
  EXPECT_EQ(13U, nextPrime(11));
}

TEST(NextPrime, SkipsCompositeRun) {
  EXPECT_EQ(97U, nextPrime(90));
}

TEST(SumPrime, EmptyRangesHaveZeroSum) {
  EXPECT_EQ(0U, sumPrime(0));
  EXPECT_EQ(0U, sumPrime(2));
}

TEST(SumPrime, ExcludesUpperBound) {
  EXPECT_EQ(10U, sumPrime(6));
  EXPECT_EQ(10U, sumPrime(7));
}

TEST(SumPrime, SumsKnownRange) {
  EXPECT_EQ(77U, sumPrime(20));
}

TEST(SumPrime, SumsRangeBelowHundred) {
  EXPECT_EQ(1060U, sumPrime(100));
}
