#include <iostream>

template<typename Iterator>
void zd_1(Iterator arr_first, Iterator arr_second, Iterator size_first, Iterator size_second, int sum, int count) {///(3.1.3)   1 todo


    const int size1 = 5;
    int arr1[size1] = { 1, 2, 3, 4, 5 };

    const int size2 = 4;
    int arr2[size2] = { -1, -2, 3, -4 };

    const int size3 = size1 + size2;
    int arr3[size3];

    for (int i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        arr3[size1 + i] = arr2[i];
    }

    for (int i = 0; i < size3; i++) {
        if (arr3[i] > 0) {
            sum += arr3[i];
        }
    }

    std::cout << "Общий массив: ";
    for (int i = 0; i < size3; i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Сумма положительных элементов: " << sum << std::endl;

}
void zd_2()///(3.1.3)   2 todo
{
    const int size1 = 5;
    int arr1[size1] = { 1, 2, 3, 4, 5 };

    const int size2 = 4;
    int arr2[size2] = { -1, -2, 3, -4 };

    const int size3 = size1 + size2;
    int arr3[size3];

    for (int i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        arr3[size1 + i] = arr2[i];
    }

    int max_negative = INT_MIN;
    for (int i = 0; i < size3; i++) {
        if (arr3[i] < 0 && arr3[i] > max_negative) {
            max_negative = arr3[i];
        }
    }

    std::cout << "Общий массив: ";
    for (int i = 0; i < size3; i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    if (max_negative == INT_MIN) {
        std::cout << "В массиве нет отрицательных элементов." << std::endl;
    }
    else {
        std::cout << "Максимальный отрицательный элемент: " << max_negative << std::endl;
    }
}
