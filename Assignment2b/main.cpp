//Ballyyev Eziz st135568@student.spbu.ru
#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
  const int maxSize = 100;
  double* stack = new double[maxSize];
  int top = -1;

  std::string input;
  std::cout << "Error input in Reverse Polish Notation: ";
  std::getline(std::cin, input);

  std::string token;

  for (size_t i = 0; i < input.size(); ++i)
  {
    char c = input[i];

    if (c ==' ') continue;

    if (c == '+' || c == '-' || c == '*' || c == '/')
    {
      if (top < 1)
      {
        std::cout << "Not enough operand for operation " << c << std::endl;
        delete[] stack;
        return 0;
      }

      double b = stack[top--];
      double a = stack[top--];

      double result = 0;
      switch (c)
      {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
      }

      stack[++top] = result;
    }
    else if (isdigit(c) || c == '-')
    {
      token.clear();
      while (i < input.size() && (isdigit(input[i]) || input[i] == '.' || input[i] == '-'))
      {
        token += input[i];
        ++i;
      }
      --i;
      stack[++top] = atof(token.c_str());
    }
  }

  if (top != 0)
  {
    std::cout << "Incorrect input" << std::endl;
    delete[] stack;
    return 0;
  }

  std::cout << "Result: " << stack[top] << std::endl;

  delete[] stack;
  return 0;
}

