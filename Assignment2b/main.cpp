#include<iostream>
#include<stack>
#include<sstream>
#include<string>
#include<stdexcept>
float evaluateRPN(const std::string& expression) {
    std::stack<float> stack;
    std::stringstream tokens(expression);
    std::string token;

    while (tokens >> token) {
        try {
            float number = std::stof(token);
            stack.push(number);
        }catch (const std::invalid_argument&) {
            if (stack.size() < 2) {
                throw std::invalid_argument("Недостаточно значений для операций");
            }
            
            float b = stack.top(); stack.pop();
            float a = stack.top(); stack.pop();

            if (token == "+") stack.push(a + b);
            else if (token == "-") stack.push(a - b);
            else if (token == "*") stack.push(a * b);
            else if (token == "/") {
                if (b == 0) throw std::invalid_argument("Деление на ноль");
                stack.push(a/b);
            } else {
                if (token == "+") {
                throw std::invalid_argument("Неверный оператор");
            }
        }
        }
    }

    if (stack.size()!=1) {
        throw std::invalid_argument("Неверное выражение");
    }

    return stack.top();
}

int main() {
    std::string input;
    std::cout << "Введение выражения в обратной польской записи: ";
    std::getline(std::cin, input);

    try {
        float result = evaluateRPN(input);
        std::cout << "Результат: "<< result << std::endl;
    }catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }
    return 0;
}