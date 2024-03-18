#include <iostream>

//using 16_namespace std;
/* std:: for,
 * 1.Containers: 14_vector, list, set, map
 * 2.Algorithms: sort, find, transform
 * 3.I/O: cin, cout, ifstream, ofstream
 * 4.Strings: string
 * 5.Memory Management: allocator, unique_ptr,  shared_ptr
 * 6.15_function
 * 7.Math: abs, sqrt, sin
 * 8.Concurrency: thread,  mutex, condition_variable
 *
 * The :: is indeed the scope resolution operator in C++.
 * It's used to access members (variables, functions, types) of a namespace,
 * class or enumeration.
 */

//reason for int for main is described at last

//  "cout <<" means putting things in console and
//  "cin >> variable" means setting input data into variable.

int main() {
    std::cout <<"Mike How much do you weight (pound):";

    int pounds;
    std::cin >> pounds; //for input but used >> symbol

    double conversionFactor = 0.454;

    std::cout <<"Your weight is: " << conversionFactor*pounds;
    std::cout <<" kg" << std::endl; //endl to end line and to next line

    bool great_shape = pounds<200;

    if (great_shape) {
        for (int i = 0; i<3; i++) {
            std::cout << "you are in a good shape" << std::endl;
        }
    } else {
        int i  = 0;
        while (i < 3) {
            std::cout << "you are not in a good shape" << std::endl;
            i++;
        }
    }

    return 0; // a return value of 0 indicates successful execution, and
    // any non-zero value indicates an error or abnormal termination.
    //thus main is int.

    
}
