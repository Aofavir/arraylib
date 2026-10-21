#include "arraylib.h"
#include <iostream>

int main() {
    int distances[] = {12, 35, 48, 7, 64, 28, 51, 19, 42, 33};
    const std::size_t n = sizeof(distances) / sizeof(*distances);
    std::cout<<"Исходные данные: ";
    for (int i=0; i<n;i++) {
        std::cout<<distances[i]<<' ';
    }
    std::cout<<'\n';
    std::cout << "Общее растояние: " << arr_sum(distances, n) << '\n';
    std::cout << "Минимальное расстояние: " << arr_min(distances, n) << '\n';
    std::cout << "Максимальное расстояние: " << arr_max(distances, n) << '\n';
    std::cout << "Среднее расстояние: " << arr_average(distances, n) << '\n';
    std::cout << "Медиана расстояний " << arr_median(distances, n) << '\n';

    return 0;
}