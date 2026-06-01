#include "alg.h"

#include <limits>

namespace {

bool divisibleBySmallPrime(uint64_t value) {
  return value % 2 == 0 || value % 3 == 0;
}

}  // namespace

bool checkPrime(uint64_t value) {
  if (value < 2) {
    return false;
  }
  if (value == 2 || value == 3) {
    return true;
  }
  if (divisibleBySmallPrime(value)) {
    return false;
  }

  for (uint64_t divisor = 5; divisor <= value / divisor; divisor += 6) {
    if (value % divisor == 0 || value % (divisor + 2) == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    return 0;
  }

  uint64_t found = 0;
  uint64_t candidate = 1;
  while (found < n && candidate < std::numeric_limits<uint64_t>::max()) {
    ++candidate;
    if (checkPrime(candidate)) {
      ++found;
    }
  }
  return candidate;
}

uint64_t nextPrime(uint64_t value) {
  if (value < 2) {
    return 2;
  }

  uint64_t candidate = value + 1;
  if (candidate > 2 && candidate % 2 == 0) {
    ++candidate;
  }

  while (!checkPrime(candidate)) {
    candidate += 2;
  }
  return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t result = 0;
  for (uint64_t value = 2; value < hbound; ++value) {
    if (checkPrime(value)) {
      result += value;
    }
  }
  return result;
}
