#include <iostream>

// So a template is a blueprint but you use it with different data types.
// For example: if we want to find the big and the small thing (thing could be any thing like int, float, double, string, etc.).
//              there are two approaches to this:
                
        // Approach 1:
             int maxInt(int a, int b){
                return (a > b) ? a : b;         // This statement says that -> return (condition) ? if_true : if_false
             }
             
             float maxFloat(float a, float b){
                return (a > b) ? a : b;         // This statement says that -> return (condition) ? if_true : if_false
             }
             
             double maxDouble(double a, double b){
                return (a > b) ? a : b;         // This statement says that -> return (condition) ? if_true : if_false
             }

        // Approach 2: 
             template <typename T>
             T myMax(T a, T b) {
                return (a > b) ? a : b;
             }

             //Now to use it for different data type we write

             int a1, b1;
             float a2, b2;
             std::string a3, b3;

             int y1 = myMax(a1, b1);
             float y2 = myMax(a2, b2);
             std::string y3 = myMax(a3, b3);

             int main()
             {
                 std::cout << "Hello World" << std::endl;

                 a1 = 1; b1 = 2;
                 a2 = 2.3; b2 = 4.5;
                 a3 = "hey"; b3 = "hello";

                 // Example usage of template; template defined above main funtion
                 int y1 = myMax(a1, b1);
                 float y2 = myMax(a2, b2);
                 std::string y3 = myMax(a3, b3);

                 std::cout<<"Max int is "<< y1 <<std::endl;
                 std::cout<<"Max float is "<< y2 <<std::endl;
                 std::cout<<"Max string is "<< y3 <<std::endl;
                 
                 std::cout<<"You are seeing hey instead of hello because cpp compares character by character (lexicographic order/ dictionary order)"
                          << std::endl <<"in which case 'y' > 'l'"<<std::endl;


                 return 0;
             }