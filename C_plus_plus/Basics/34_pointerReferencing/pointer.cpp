#include <iostream>
#include <cstdlib> // for abs function

//pointer knows how to hash data. But no any struct or class know.
//

void swapping(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int x = 5;
    int y = 10;
    int *p = &x; //storing the address of x in pointer p

    std::cout << "The value of x: " << x << ",\n the address of x is: " << &x << std::endl;
    std::cout <<"The value of x by ampersand x :" << *&x << std::endl;
    std::cout << "The address of p: " << &p << ",\n The address stored in p is: "
    << p << std::endl;


  // De-referencing allows you to retrieve the value stored at the memory location
  // pointed to by the pointer p.
    std::cout << "The content of p: " << *p << std::endl;
    *p = 2;  //storing value in the address which is pointed by p
    std::cout << "The content of p: " << *p << std::endl;
    std::cout << "Now The content of x: " << x << std::endl;

    p = &y;  //storing the address of y in pointer p
    std::cout << "The content of p: " << *p << std::endl;

    swapping(&x, &y);

    std::cout << "\nAfter swapping \n";
    std::cout << "The value of x: " << x << ",\nThe value of y: " << y << std::endl;

    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = &a[0];

    std::cout << "\nArray element access by pointer\n";
    for (int i = 0; i < 5; i++) {
        std::cout << *ptr << std::endl;
        ptr++;
    }

    int result = std::abs(-25);
    std::cout << result << std::endl;

    //two variable referencing in same location
    int r = 19;
    int &q = r;
    std::cout << q << ", " << r << std::endl;

    r = 30;
    std::cout << q << ", " << r << std::endl;

    return 0;
}
