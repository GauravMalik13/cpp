#include <iostream>
#include <typeinfo>

int main() {
    int a{10}, b{20};

    // Defining Pointers to the variables;
    int * p1, p2; // In here p1 is a Pointer-to-int but p2 is of type int.

    // To check this, we use the following code:
    std::cout<<"Type of p1 : "<< typeid(p1).name() <<std::endl;
    std::cout<<"Type of p2 : "<< typeid(p2).name() <<std::endl;
    
    // In order to define two pointers in one line we need to define it in this way
    int * p3, * p4;
    
    std::cout<<"Type of p3 : "<< typeid(p3).name() <<std::endl;
    std::cout<<"Type of p4 : "<< typeid(p4).name() <<std::endl;
    
    return 0;

};