#include <iostream>
#include "arr_and_pointer.h"
#include "func.h"
#include <vector>
#include "loop.h"

int main() {
    const int size = 5;
    int arr[5] = { 1,7,-7 ,4,-4 };
    std::vector<int> arr_1(3);
    std::vector<int> arr_2(3);
    for (int i = 0; i < 3; i++)
    {
        arr_1[i] = i;
        arr_2[i] = i;
    }

    //std::cout<< sum_after_max_modul_min(arr,size);
    //array_sum(arr_1,arr_2,3,3);
    std::cout<<zd_11(arr,5);
}

