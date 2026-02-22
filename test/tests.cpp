// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(20);
  uint64_t expected = 77;
  EXPECT_EQ(expected, res);
}
TEST(st1, checkPrime3) {
  bool res = checkPrime(11);
  EXPECT_TRUE(res);
}

TEST(st1, checkPrime4) {
  bool res = checkPrime(13);
  EXPECT_TRUE(res);
}

TEST(st1, checkPrime5) {
  bool res = checkPrime(15);
  EXPECT_FALSE(res);
}

TEST(st1, checkPrime6) {
  bool res = checkPrime(17);
  EXPECT_TRUE(res);
}

TEST(st1, checkPrime7) {
  bool res = checkPrime(101);
  EXPECT_TRUE(res);
}

TEST(st1, checkPrime8) {
  bool res = checkPrime(121);
  EXPECT_FALSE(res);
}

TEST(st1, nPrime1) {
  uint64_t res = nPrime(1);
  EXPECT_EQ(2, res);
}

TEST(st1, nPrime2) {
  uint64_t res = nPrime(6);
  EXPECT_EQ(13, res);
}

TEST(st1, nPrime3) {
  uint64_t res = nPrime(7);
  EXPECT_EQ(17, res);
}

TEST(st1, nPrime4) {
  uint64_t res = nPrime(8);
  EXPECT_EQ(19, res);
}

TEST(st1, nPrime5) {
  uint64_t res = nPrime(9);
  EXPECT_EQ(23, res);
}

TEST(st1, nPrime6) {
  uint64_t res = nPrime(11);
  EXPECT_EQ(31, res);
}

TEST(st1, nPrime7) {
  uint64_t res = nPrime(20);
  EXPECT_EQ(71, res);
}

TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(0);
  EXPECT_EQ(2, res);
}

TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(1);
  EXPECT_EQ(2, res);
}

TEST(st1, nextPrime3) {
  uint64_t res = nextPrime(10);
  EXPECT_EQ(11, res);
}

TEST(st1, nextPrime4) {
  uint64_t res = nextPrime(11);
  EXPECT_EQ(13, res);
}

TEST(st1, nextPrime5) {
  uint64_t res = nextPrime(24);
  EXPECT_EQ(29, res);
}

TEST(st1, nextPrime6) {
  uint64_t res = nextPrime(29);
  EXPECT_EQ(31, res);
}
