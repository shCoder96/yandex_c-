// МКАД

// Длина Московской кольцевой автомобильной дороги —109 километров. Байкер Вася стартует с нулевого километра МКАД и едет со скоростью V километров в час. На какой отметке он остановится через T часов?

// Формат входных данных

// Программа получает на вход целые числа V и T. Если V > 0, то Вася движется в положительном направлении по МКАД, если же значение V < 0, то в отрицательном. 0 ≤ T ≤ 1000, -1000 ≤ V ≤ 1000

// Формат выходных данных

// Программа должна вывести целое число от 0 до 108 — номер отметки, на которой остановится Вася.

// Sample Input 1:

// 60
// 2
// Sample Output 1:

// 11
// Sample Input 2:

// -1
// 1
// Sample Output 2:

// 108

#include <iostream>
int main() {
  int a, v;
    std::cin >> a >> v;
    std::cout << (a * v + 1090) % 109 ;
  return 0;
} 