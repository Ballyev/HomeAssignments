/*Assignment6 Баллыев Эзиз st135568@gmail.com create a template class with specializations and test them*/
#include "Class1.h"


bool Class1::bar(int number, const std::vector<float>&) {
    return number > 0;
}

int Class1::c_1_1() { 
    return 1; 
}

float Class1::c_1_2() {
return 1.0f;
}

void Class1::c_1_3() { std::cout << "Class1 c_1_3" << std::endl; 
}

