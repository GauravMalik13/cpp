#include <iostream> 
#include <typeinfo>

// Defining a function which takes two ints and returns one int
int addition(int x, int y) {
    return (x + y);
}

int subtraction (int x, int y) {
    return (x -y);
}

// In the function bellow one can note that the 3rd argument is a pointer to function of type
// Pointer-to-function-which-takes-two-int-and-returns-one-int (PFiiiE)
int binary_operation(int x, int y, int (*func)(int, int)) {
    return (*func)(x, y);
}

// The syntax below is a Pointer-to-function, NOTE = We need to specify the types of argument of the funcion also
int (* add)(int , int) = &addition;

// Both the bellow syntax is incorrect because of different reasons
// int * p = &addition;                 // Incorrect because &addition is of type int(*)(int, int) and p is of type int* 
// int * p(int, int) = &addition;       // Incorrect because of wrong operator precedence: () has higher operator precedence than * , so compiler 
                                        // treates the expression in this way * (p(int, int)) where p is function with two int arguments.

int (* minus)(int , int) = &subtraction;

int main() {
    std::cout<< "\n";

    std::cout<<typeid(addition).name()<<std::endl;
    std::cout<<typeid(add).name()<<std::endl;
    std::cout<< binary_operation(3, 5, add)<<std::endl;
	return 0;
}

/* One might argue that We could do the above with the following way:

int binary_operation(int x, int y, func(int, int)){
    return func(x, y);
}

int main() {

    add = binary_operation(3,3,addition);

}

*/

// Note in the above implementation, you are right that one can use functions instead of pointers to functions
// But under the hood, The  thing which is actually happening is that the function is converted to a pointer and then it is used