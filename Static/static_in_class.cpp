#include <iostream> 

/*
    Static Variables/Methods inside a class means that for all the instances
    of the class there will be just one variable/method and it will be common to all
    the instances of the class.

    Each Static variable must be defined in the code for use with the help of namespace
    of class.
    Eg. int Entity x;

    Static methods can not access non static variables. 
    Eg. In Code below, Entity 3 class if used will give an error that there is an invalid use of member 
        variables in a static member function.
    Static methods can only use static variables.

    Non Static methods can access both static and non static variables.
*/

class Entity{
    public:
        static int x, y;


        void Print() {
        std::cout << x << ", " << y<< std::endl;
    }
};

class Entity2{
    public:
        static int x, y;


        static void Print() {
        std::cout << x << ", " << y<< std::endl;
    }
};

class Entity3{
    public:
        int x, y;


        static void Print() {
        std::cout << x << ", " << y<< std::endl;
    }
};

// The Static Variables should be defined seperately before any kind of assignment to these variables.
int Entity::x; 
int Entity::y;


int main() {

    Entity3 e1;
    e1.x = 1;
    e1.y = 2;

    Entity3 e2;
    e2.x = 5;
    e2.y = 4;

    e1.Print();
    e2.Print();

    
    // Better implementation of the above code and the accurate one.
    int Entity2::x;
    Entity2::x = 12;

    Entity2::y = 10;

    Entity2::Print();


    return 0;


}