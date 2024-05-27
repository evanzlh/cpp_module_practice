module;

#include <iostream>
// #include "json3.10.hpp" // 当使用json3.10时会出现编译错误
#include "json3.11.hpp"

export module module_a;

export namespace module_a{
    void display() {
        nlohmann::json j {{"hello", "module"}};
        std::cout << j.dump() << std::endl;
    }
}