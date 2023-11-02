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
    function_values_at_points_xi(1,5,1);
    //polynomial_value_for_given_value(1,5,6);
    //solution_of_mathematical_example(1,1,9,0,1);
    //get_first_100_prime_numbers(1,100,0,0);
    //get_first_100_prim444e_numbers(1,0,0);
   // get_first_100_prime_numbers(1,100,0,0);
    //get_all_prime_numbers_of_value(1,8,0);
    ///std::cout<<count_numbers(100,120,4,0);
    ///////////count_ways(5, count,1,5,10,15);
    ///four_digit_number_divisible_by_the_product_of_numbers(10,10,99);
    ///three_digit_numbers_in_decimal_notations_no_identical_digits(1,0,0);
    ///natural_numbers_smaller_value(4, 6,2);
    //std::cout<<count_numbers(1,8,4,0);
    //find_reversible_pairs();
    //increasing_numbers(125);
    //decreasing_numbers(125);
    //count_ways(20,count,1,5,10,20,50,100);
    //count_ways(20,count,1,5,10,20,100,1);
    //find_numbers(20);
    //max_sum_of_divisors_v2(1,9,0,0,0);
    //four_digit_number_divisible_by_the_product_of_numbers(10,10,100,10);
    //std::cout<< sum_before_max_v2(arr,arr + 5,0,0,0);
    //natural_numbers_not(20);
    //table_of_partitions_of_a_number_by_the_sum_of_three_terms(34);
    //find_reversible_pairs(10,10,99);
    //natural_numbers_not_divisible(134);
    //std::cout << is_divisible(22, 0) << std::endl;
    // natural_numbers_not_divisible(23);

  
}

