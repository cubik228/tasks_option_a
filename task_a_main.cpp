#include <iostream>
#include "arrays/arr_and_pointer.h"
#include "func.h"
#include <vector>
#include "loops/loop.h"


int main() {
    setlocale(LC_ALL, "ru");
    const int size = 5;
    int count = 0;
    int arr[] = {5,6, 5, 2, 1 };
    int arr2[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    std::vector<double> arri = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    std::vector<int> arr_1(3);
    std::vector<int> arr_2(3);
    for (int i = 0; i < 3; i++)
    {
        arr_1[i] = i;
        arr_2[i] = i;
    }

  
}

