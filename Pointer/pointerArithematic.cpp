#include <iostream>

int main()
{

    int array[5]; // this is how we define an array in cpp, array of size 5 (i.e. 5 elements in array)

    // Defining pointer to the array
    int *p = array;
    std::cout << p << std::endl;
    std::cout << (p + 1) << std::endl;
    std::cout << (p + 2) << std::endl;
    std::cout << (p + 3) << std::endl;

    std::cout << "Size of int is : " << sizeof(int *) << std::endl;

    return 0;
};
/*

Address of p     : 140728949323264             ## Possible explaination : sizeof(int) = 4 bytes
Address of p + 1 : .............68 = 64 + 4       So in order to point to the new integer inn needs to point to
Address of p + 2 : .............72 = 68 + 4       next memory location which is 4 bytes further than the pointer is
Address of p + 3 : .............76 = 72 + 4       pointing to at that location.

*/