#include <iostream>
#include <typeinfo>

int main()
{
    std::cout << "\n";
    int array1[5] = {0, 1, 2, 3, 4};

    int *p;

    std::cout << "Type of Pointer 'p' : " << typeid(p).name() << std::endl;
    std::cout <<"Pi: Pointer-to-int"<< std::endl;
    
    // p = &array; // Not valid
    // Why is this not Valid?
    // Because the '&array' is of type int (*)[5]
    // But p is of type int *. So p can not point to array.

    p = array1; // This means that the p points to the 1st element of the array
    // Why is this valid?
    // Because this pointer points to the first element of the array.

    // Due to this p = array; assignment there has become no difference between arrays and pointers

    std::cout << "The array elements are : ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << array1[i] << ", ";
    };
    std::cout << "\n";

    // Assignig array elements different values
    *p = 10; // This means that array[0] = 10;
    p++;
    *p = 20; // This means that pointer is now pointing to 2nd element of p (due to p++) and then as above
    p = &array1[2];
    *p = 30;
    *(p + 1) = 40;
    *(p + 2) = 50;

    std::cout << "Modified Array : ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << array1[i] << ", ";
    };
    std::cout << "\nModified using Pointer to elements of array\n";

    /*
        Note that in array[] has the '[]' . These are sort of derefrencing operator called offset operator.
        They when applied to the array at the back is same as * applied at the front of the pointer except they
        evaluate the expression inside first.

        The main difference between pointers and arrays is that arrays can not be assigned addresses while pointers can be.
    */

    std::cout << "\n-------------------------------------------------------------------" << std::endl;

    std::cout << "\nPointer to the array of 5 elements" << std::endl;

    // Now we will define a array and a pointer to the whole array

    int array2[5]{0, 1, 2, 3, 4};

    std::cout << "New Array 'array2' : ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << array2[i] << ", ";
    };
    std::cout << "\n";
    
    int (*p2)[5]; // This defines the pointer to an array of 5 elements
    
    p2 = &array2;
    
    *p2[0] = 10; //Don't use this expression to assign to first element of array
    // The bellow statement has no meaning now
    // *(p2 + 1) = 20;
    // Instead we can write
    // *p2[1] = 20; // This is a wrong statement and due to operator precedence the expression is evaluated as *(p2[1]) 
                 // which means that p2[1] is the next block of 5 int arrays. Now it points to the next array so we don't see
                 // any changes

    // Better Way
    (*p2) [0] = 12;
    (*p2) [1] = 22;
    (*p2) [2] = 32;
    (*p2) [3] = 42;
    (*p2) [4] = 52;

    std::cout << "Modified Array 'array2' : ";
    for (int i = 0; i < 5; i++){
        std::cout << array2[i] << ", ";
    };
    std::cout << "\n";



    std::cout << "Type of Pointer 'p2' : " << typeid(p2).name() << std::endl;
    std::cout << typeid(p2).name()<< ": Pointer-to-array-of-5-elememts." << std::endl;

    return 0;
}