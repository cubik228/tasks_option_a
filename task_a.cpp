#include <algorithm>
#include <iostream>
#include "arr_and_pointer.h"
#include "help_func.h"



int main() {
    int arr[5] = { 1,2,3,4 };
    //std::cout<<sum_before_min(arr,5);
    //sum_before_max(arr,5);
    std::cout << sum_between_min_max(arr, 5);
}

