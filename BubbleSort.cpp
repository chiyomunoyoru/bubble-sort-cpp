#include <iostream>
#include <vector>
#include <random>
#include <print>

/*
*  Bubble Sort
*/

std::vector<int>sorting(const std::vector<int> array) {

    std::vector<int>sortedArray = array;

    if (array.empty()) {
        return {};
    }

    for (int i = 0; i < sortedArray.size() - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < sortedArray.size() - 1; j++) {
            if (sortedArray[j] > sortedArray[j + 1]) {
                swapped = true;

                std::swap(sortedArray[j], sortedArray[j + 1]);
            }
        }
        if (swapped == false) break;
    }

    return sortedArray;
}

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> generateForArray(1, 100);
    std::uniform_int_distribution<int> generateForFor(1, 10);

    std::vector<int>array;

    std::println("Array: ");
    for (int i = 0; i < generateForArray(gen); i++) {
        array.push_back(generateForArray(gen));
        std::print("{} ", array[i]);
    }

    std::vector<int>sortedArray = sorting(array);

    std::println("\nSorted array: ");
    for (int i = sortedArray.size() - 1; i >= 0; i--) {
        std::print("{} ", sortedArray[i]);
    }
}