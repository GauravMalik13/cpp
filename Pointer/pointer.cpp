#include <iostream>

/*

Pointer is a thing that points to something and is not the thing itself.
It mainly contains where in the memory of the computer the variable or the object is stored and of what type the variable/object is.

* = dereferencing operator.
& = Address of " "

So When we write
int* p = &var;

It means that p is a pointer of type Pointer-to-int and points to var which is of type int.

&var = this is the pointer where & operator is used to tell that this is the address of the variable.

Use the bellow syntax to check if &var is a pointer or not.

#include <iostream>
#include <typeinfo>
int main(){
int var;
std::cout<<typeid(&var).name()<<std::endl;
return 0;
};

Q) Why do we need int* in front of p instead of int if it stores just the memory loaction of that variable/object?
A) Because int* tells teh compiler that the pointer is of type int* it is not just a number, it contains additional information
   about the variable i.e. at that memory location you have to read sizeof(int) bytes when dereferenced.

Now in Order to get back the original variable what we need is " * " operator.

int value = *p;

what this means is that there is a pointer p which points to something. * operater tells to get that variable/object.
Now here int as the type of value because the pointer is a Pointer-to-int (Pi) 
so it points to int so the value of the variable is int which is assigned to value variable.

*/

int main(){
    int var{10};
    std::cout<<var<< std::endl;

    int* p = &var; // This is the basic way to make  a pointer 

    std::cout<<p<< std::endl;

    // To get the value of the operator we have to dereference it. 
    int value = *p;

    std::cout<<value <<std::endl;
    
    std::cout<<*p<<std::endl;

    return 0;
}