#include <iostream>
#include <vector>

template <typename T>
int recursiveLinearSearch(const std::vector<T>& items, T target, size_t pos_first = 0) {
    if (pos_first >= items.size()) return -1;
    if (items[pos_first] == target) return pos_first;
    return recursiveLinearSearch(items, target, pos_first + 1);
}

int main() {
    std::vector<int> items = { 10, 20, 30, 40, 50, 60 };
    int target = 30;

    int index = recursiveLinearSearch(items, target);
    if (index != -1) {
        std::cout << "Target found at index: " << index << std::endl;
    }
    else {
        std::cout << "Target not found" << std::endl;
    }

    return 0;
}
