#include <iostream>

class demo {
    public:

    void Print(std::string name){
        std::cout<<"Hello "<< name << std::endl;
    }
};


int main() {

    demo obj;
    obj.Print("Gaurav");

    std::cout << "-------------------------------------------" << std::endl;

    std::cout << "If we have the pointer to the object then we can not use the '.' operator to access the member of the object." << std::endl;
    std::cout << "In Order to do that we need to dereference it and then access the members inside"<< std::endl;
    
    
    demo *ptr = &obj;

    // Now in order to access the Print method of the obj we can do it in two ways
    // Option 1: Manual way

    // Dereferencing the pointer using the & operator:

    demo& object = *ptr;
    object.Print("Gaurav");

    // One liner for the above task:
    (*ptr).Print("Gaurav");

    // Using Arrow operator:
    ptr->Print("Gaurav");
};