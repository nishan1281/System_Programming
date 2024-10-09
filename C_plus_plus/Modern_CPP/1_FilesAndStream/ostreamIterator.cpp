//
// Created by nisha on 5/24/2024.
//

#include "iostream"
#include "iterator"

int main(){

    std::ostream_iterator<int> oi (std::cout, "\n");

  /*  The std::ostream_iterator<int> is initialized to write integers
    to std::cout with a newline character after each integer. */

    for (int i =0; i < 10; ++i)  //The for loop iterates from 0 to 9.
    {
        *oi = i;
        /**oi = i;: This dereferences the iterator oi and assigns
         *the value of i to it. Since oi is an ostream_iterator
         *tied to std::cout, this effectively outputs the value
         *of i followed by a newline to the console.*/
        ++oi;
    }

}