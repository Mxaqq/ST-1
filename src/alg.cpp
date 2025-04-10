// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"
#include <cmath>

bool checkPrime(uint64_t value) {
  if (value < 2) {
        return false;
    }
    if (value == 2) {
        return true;
    }
    // Чётные числа (кроме 2) не являются простыми
    if (value % 2 == 0) {
        return false;
    }
    // Проверка делителей от 3 до sqrt(value)
    for (uint64_t i = 3; i <= static_cast<uint64_t>(std::sqrt(value)); i += 2) {
        if (value % i == 0) {
            return false;
        }
    }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t count = 0;
    uint64_t candidate = 2;
    while (true) {
        if (checkPrime(candidate)) {
            count++;
            if (count == n) {
                return candidate;
            }
        }
        candidate++;
    }
  return 0;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t candidate = value + 1;
    while (!checkPrime(candidate)) {
        candidate++;
    }
    return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; ++i) {
        if (checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}
