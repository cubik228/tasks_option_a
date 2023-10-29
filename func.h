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
    if (value <= 1) 
        return false;
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
int sum_of_divisors(int n) {///(2.1) 4
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}
int count_division(int start,int end ,int value,int count) {///(2.1) 2
    for (; start != end; start++)
    {
        if (value % start == 0) {
            count++;
        }
    }
    return count;
}
int gcd(int first_value, int second_value) {///(2.3) 4 loop
    while (second_value != 0) {
        int t = second_value;
        second_value = first_value % second_value;
        first_value = t;
    }
    return first_value;
}
bool is_coprime(int n, int m) {///(2.1) 3
    return gcd(n, m) == 1;
}
int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool is_divisible(int n) {
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0 && n % digit == 0) {
            return true;
        }
        temp /= 10;
    }
    return false;
}
bool is_reversible(int a, int b,int reverse_product) {
    int product = a * b;
    while (product > 0) {
        reverse_product = reverse_product * 10 + product % 10;
        product /= 10;
    }
    return a * (reverse_product / 10) == b * (reverse_product % 10);
}
bool is_increasing(int n) {
    int last_digit = n % 10;
    n /= 10;
    while (n > 0) {
        int digit = n % 10;
        if (digit >= last_digit) {
            return false;
        }
        last_digit = digit;
        n /= 10;
    }
    return true;
}