#include <iostream>
#include <typeinfo>

int main()
{
    float var{10.1};

    float *p = &var;
    float &value = *p;

    std::cout << typeid(var).name() << std::endl;
    std::cout << typeid(p).name() << std::endl;
    std::cout<<typeid(*p).name()<<std::endl;

    return 0;
}