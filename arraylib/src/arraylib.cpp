#include <iostream>
using namespace std;

int arr_sum(const int* arr, std::size_t n) {
    int s = 0;
    for (std::size_t i = 0; i < n; ++i) {
        s += arr[i];
    }
    return s;
}

int arr_max(const int* arr, std::size_t n) {
    int m=0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i]>m) {m=arr[i];}
    }
return m;
}

int arr_min(const int* arr, std::size_t n) {
    int m=999999999;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i]<m) {m=arr[i];}
    }
return m;
}

double arr_average(const int* arr, std::size_t n) {
    int s = 0;
    double c = 0;
    for (std::size_t i = 0; i < n; ++i) {
        s += arr[i];
        c+=1.0;
    }
return s/c;
}

int arr_count_positive(const int* arr, std::size_t n) {
    int s = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i]>0) {s+=1;}
    }
return s;
}

int arr_count_negative(const int* arr, std::size_t n) {
    int s = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i]<0) {s+=1;}
    }
return s;
}

int arr_count_zero(const int* arr, std::size_t n) {
    int s = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i]==0) {s+=1;}
    }
return s;
}

int arr_product(const int* arr, std::size_t n) {
    int s = 1;
    for (std::size_t i = 0; i < n; ++i) {
        s*=arr[i];
    }
return s;
}

double arr_median(const int* arr, std::size_t n) {
    if (n%2!=0) {
     return arr[n/2];
    } else {
        return (arr[n/2-1]+arr[n/2])/2.0;
    }
}