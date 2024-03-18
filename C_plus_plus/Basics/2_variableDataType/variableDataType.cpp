//
// Created by nisha on 2/3/2024.
//

#include "iostream"

/*argc = argument count. Number command-line argument passed including program name
 * char const *argv[]: Argument 14_vector.argv[0] hold the program name and subsequent
 * 11_array elements contain the argument
 * */

int main(int argc, char const *argv[]){
    std::cout <<sizeof (int ) <<std::endl; //to find byte size of int

    std::string myName = "Nishan";
    int age {25};
    std::cout <<"My Name is " << myName << " and" <<
    " my age is " << age << std::endl;

    char letter = 'a';
    char number = 97; //97 in ASCII is a
    std::cout <<"Number is " << number << std::endl;

    unsigned int x  = -1;  // it can not be - value. it will give the highest number
    std::cout << x << std::endl;

    return 0;
}