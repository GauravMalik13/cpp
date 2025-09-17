#include <iostream>

// Template Class is also a blueprint but for class 

template <typename T>
class Box {
    public:
        T value;
    
};

//Alternative

class IntBox {          // Note that these classes are not used or can not be used for other data types
    public:
    int value;
};

class FloatBox {
    public:
    float value;

};


int main() {
    std::cout<<"hello"<< std::endl;

    // Usage of Template class:

    Box<int> intBox;   // In this line the object with name intBox is created with type Box<int>,
                       // why not just Box (because Box is not a class, its a template(blueprint))
    intBox.value = 3;  // this line assigns the value to the value variable of the class. 

    // Box<float> floatBox = 3.2; // Wrong statement
    Box<float> floatBox;
    floatBox.value = 3.2;

    std::cout<<floatBox.value << std::endl;


    return 0;
}


//One Can also have Templates with multiple types like 
template <typename T, typename U>
class Pair {
    public:
    T var1;
    U var2;
};

//Usage
// Pair<int, std::string> pair;
// pair.var1 = 10;
// pair.var2 = "hello";