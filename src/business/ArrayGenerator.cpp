//
// Created by Алексей Заузин on 11.01.2023.
//

#include "ArrayGenerator.h"
#include <random>

std::vector<int> ArrayGenerator::generate(int min, int max, int elementCount) {
    std::vector<int> result = std::vector<int>();

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(min, max);

    for(int x = 1; x <= elementCount; x++)
    {
        result.push_back(distr(gen));
    }

    return result;
}