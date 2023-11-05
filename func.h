#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
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
bool is_divisible(int n,int count) {
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0 && n % digit == 0) {
            count++;
        }
        temp /= 10;
    }
    if (count >= count_number_size(n)) {
        return true;
    }
    return false;
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
bool is_not_increasing(int n) {
    int last_digit = n % 10;
    n /= 10;
    while (n > 0) {
        int digit = n % 10;
        if (digit <= last_digit) {
            return false;
        }
        last_digit = digit;
        n /= 10;
    }
    return true;
}
double Fact(int value)
{
    if (value == 0 || value == 1) {
        return 1;
    }
    {
        return value * Fact(value - 1);
    }
}
int Fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return Fib(n - 1) + Fib(n - 2);
}
double determinant_of_polynomial(double x) {
    return pow(x, 2) + 2 * x + 1;
}
double cos_taylor(double x, int n) {
    double result = 0.0;
    double sign = 1.0;
    double power = 1.0;
    for (int i = 0; i < n; i++) {
        result += sign * power / tgamma(2 * i + 1) * pow(x, 2 * i + 1);
        sign *= -1.0;
        power *= x * x;
    }
    return result;
}

double sin_taylor(double x, int n) {
    double result = 0.0;
    double sign = 1.0;
    double power = x;
    for (int i = 0; i < n; i++) {
        result += sign * power / tgamma(2 * i + 2) * pow(x, 2 * i + 1);
        sign *= -1.0;
        power *= x * x;
    }
    return result;
}
template<class T>
bool is_fib(T value, T fib_0, T fib_1, T fib_2, T begin) {
    for (; begin != value; ++begin)
    {
        fib_0 = fib_1;
        fib_1 = fib_2;
        fib_2 = fib_1 + fib_0;
        if (fib_2 == value)
        {
            return true;
        }
    }
    return false;
}
template<class T>
int double_fact(T begin, T value, T product) {
    if (value % 2 == 0)
        begin = 2;
    else
        begin = 1;
    for (; begin <= value; begin += 2)
    {
        product *= begin;
    }
    return product;
}
template <typename T>
T calculateProduct_product(T begin, T end, T product, T index, T sum) {
    for (; begin <= end; begin += 2) {
        sum = 1;
        for (int j = 0; j < index; j++) {
            int value;
            std::cout << "¬ведите x" << begin + j << ": ";
            std::cin >> value;
            sum *= value;
        }
        product += sum;
        index++;
    }
    return product;
}
template<typename T>
void bubbleSort(std::vector<T>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
template <typename T>
void reverseArray(std::vector<T> arr) {
    std::reverse(arr.begin(), arr.end());
    for ( auto element : arr) {
        std::cout << element << " ";
    }
}