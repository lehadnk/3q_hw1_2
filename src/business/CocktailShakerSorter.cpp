//
// Created by Алексей Заузин on 11.01.2023.
//

#include "CocktailShakerSorter.h"

std::vector<int> CocktailShakerSorter::sort(std::vector<int> elements) {
    bool hadSwap;

    do {
        hadSwap = false;
        for(int i = 0; i < elements.size() - 1; i++) {
            if (elements[i] > elements[i + 1]) {
                std::swap(elements[i], elements[i + 1]);
                hadSwap = true;
            }
        }
        for(int i = elements.size() - 1; i > 1; i--) {
            if (elements[i] < elements[i - 1]) {
                std::swap(elements[i], elements[i - 1]);
                hadSwap = true;
            }
        }
    } while (hadSwap == true);

    return elements;
}
