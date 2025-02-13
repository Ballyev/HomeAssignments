#include "Class2.h"

bool Class2::bar(int, const std::vector<float>& vec) {
    return !vec.empty();
}

int Class2::c_2_1() { 

    return 2;
}

float Class2::c_2_2() {
return 2.0f;
}

void Class2::c_2_3() {
    std::cout << "Class2 c_2_3" << std::endl;
}