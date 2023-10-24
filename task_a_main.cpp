#include <iostream>
#include "arr_and_pointer.h"
#include "func.h"
#include <vector>
#include "loop.h"

int main() {
    const int size = 5;
    int arr[5] = { 1,2,3,4,5 };
    std::vector<int> arr_1(3);
    std::vector<int> arr_2(3);
    for (int i = 0; i < 3; i++)
    {
        arr_1[i] = i;
        arr_2[i] = i;
    }
    //std::cout<<sum_before_min(arr,arr + 5,0,*arr);
    //std::cout<<sum_before_max_v1(arr, arr + 5, 0, *arr);
    //std::cout << sum_between_min_max(arr,arr + 5, *arr, *arr,0);
    std::vector<double> arri = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    



    //std::cout<< sum_after_max_modul_min(arr,size);
    //array_sum(arr_1,arr_2,3,3);
    //std::cout<<zd_11(arr,5);
    //energy_dividers(8);
}

