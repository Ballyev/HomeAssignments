#ifndef TEMPLATE_CLASS_H
#define TEMPLATE_CLASS_H

#include <vector>


template <typename T>
class TemplateClass {
public:
    TemplateClass(int num, std::vector<float> vec)
        : _instance(), _number(num), _vector(std::move(vec)) {}
    
    bool foo() const {
        return _instance.bar(_number, _vector);
    }

private:
    T _instance;
    int _number;
    std::vector<float> _vector;
};


template <>
class TemplateClass<int> {
public:
    TemplateClass(int, std::vector<float>) {}
    bool foo() const { return true; }
};

template <>
class TemplateClass<double> {
public:
    TemplateClass(int, std::vector<float>) {}
    bool foo() const { return false; }
};

#endif // TEMPLATE_CLASS_H
