// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value <= 1)
    return false;
  if (value <= 3)
    return true;
  if (value % 2 == 0 || value % 3 == 0)
    return false;
  for (uint64_t k = 5; (k * k) <= value; k = (k + 6)) {
    if (value % k == 0 || value % (k + 2) == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0)
    return 0;
  uint64_t cnt = 0;
  uint64_t curr = 1;
  while (cnt < n) {
    curr++;
    if (checkPrime(curr)) {
      cnt++;
    }
  }
  return curr;
}

uint64_t nextPrime(uint64_t value) {
  if (value < 2)
    return 2;

  do {
    value++;
  } while (!checkPrime(value));

  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; i++) {
    if (checkPrime(i))
      sum += i;
  }
  return sum;
}
