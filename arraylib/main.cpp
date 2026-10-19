#include "arraylib.h"
#include <iostream>

int main() {
    int data[] = {5, 3, 8, 1, 9, 2};
    std::cout << "Sum: " << arr_sum(data, 6) << '\n';
    std::cout << "Max: " << arr_max(data, 6) << '\n';
    std::cout << "Min: " << arr_min(data, 6) << '\n';
    std::cout << "Average: " << arr_average(data, 6) << '\n';
    std::cout << "Positive: " << arr_count_positive(data, 6) << '\n';
    std::cout << "Negative: " << arr_count_negative(data, 6) << '\n';
return 0;
}