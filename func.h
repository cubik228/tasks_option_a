#pragma once
#include <iostream>
#include <cmath>
template<typename T>
int count_number_size(T value) {
    int count = 0;
    for (;value != 0;count++) {
        value /= 10;
    }
    return count;
}
template <int size, typename T>
void print_array(T(&arr)[size]) {
    for (auto item : arr) {
        std::cout << item << " ";
    }
}
template<typename T>
bool is_prime(T value) {
    if (value <= 1) return false;
    for (int i = 2; i <= std::sqrt(value); i++) {
        if (value % i == 0) return false;
    }
    return true;
}
template<typename T>
bool is_perfect_square(T value) {
    int root = std::sqrt(value);
    return value == root * root;
}
template<typename T>
bool is_fibonacci(T value) {
    int a = 0, b = 1, c;
    while (b < value) {
        c = a + b;
        a = b;
        b = c;
    }
    return (b == value);
}
int sum_of_divisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}
int gcd(int first_value, int second_value) {///(2.3) 4 loop
    while (second_value != 0) {
        int t = second_value;
        second_value = first_value % second_value;
        first_value = t;
    }
    return first_value;
}
bool is_coprime(int n, int m) {
    return gcd(n, m) == 1;
}
