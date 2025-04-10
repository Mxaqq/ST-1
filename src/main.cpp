// Copyright 2025 UNN-CS
#include "alg.h"
#include <iostream>

int main() {
    std::cout << "Проверка простоты числа 17: " 
              << (checkPrime(17) ? "простое" : "составное") << "\n";
    
    std::cout << "1-е простое число: " << nPrime(1) << "\n";
    std::cout << "2-е простое число: " << nPrime(2) << "\n";
    std::cout << "Следующее простое число после 15: " << nextPrime(15) << "\n";
    std::cout << "Сумма простых чисел до 20: " << sumPrime(20) << "\n";

    return 0;
}
