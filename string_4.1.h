#pragma once
#include <iostream>
#include <algorithm>
#include <string>

std::string task_1(std::string str) {
    std::replace_if(str.begin(), str.end(), [](char c) { return std::isupper(c); }, 'â');
   // std::replace(str.begin(), str.end(), "abc", "xy");
    return str;
}