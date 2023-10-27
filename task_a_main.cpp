#include <iostream>
#include "arrays/arr_and_pointer.h"
#include "func.h"
#include <vector>
#include "loops/loop.h"
#include "template_func.h"


int main() {
    setlocale(LC_ALL, "ru");
    const int size = 5;
    int arr[] = { 19, 7, 5, 2, 1 };
    int arr2[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    std::vector<double> arri = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    std::vector<int> arr_1(3);
    std::vector<int> arr_2(3);
    for (int i = 0; i < 3; i++)
    {
        arr_1[i] = i;
        arr_2[i] = i;
    }

    //sum_before_min(arr,arr + 5, 0,0);
    //std::cout<<sum_before_max_v1(arr, arr + 5, 0, *arr);
    //std::cout << sum_between_min_max(arr,arr + 5, *arr, *arr,0);
    //std::cout<< print_powers_of_numbers(arr, arr + 5, 2, 0);
    //std::cout<<checking_indexes_on_function(arr, arr + 5, /*функция одна из трех из func*/[](int num) { return num % 2 == 0; }, 0);
    //std::cout<< is_sum_array(arr, arr2, arr + 5, arr2 + 5, 0);
    //std::cout<<sum_of_different_indices(arr, arr2, arr + 5, arr2 + 5, 0, 0);
    //std::cout<< sum_after_max_modul_min(arr,size);
    //array_sum(arr_1,arr_2,3,3);
    //std::cout<<zd_11(arr,5);
    //energy_dividers(8);


    //zd_1(arr,arr2,arr + 8,arr2 + 8,0,0);
    //energy_dividers(1,20,0);
    //common_divisors(3,6,0);
    //common_multiples(1,6,0);
    //std::cout<<sum_of_common_divisors(3,5,0,1);
    //std::cout<<max_sum_of_divisors_v2(5,10,0,0,0);
    get_perfect_numbers(5,0,1);
}

