//
// Created by nisha on 2/4/2024.
//
//by default everything in c++ class is private
#include "iostream"

class Book{
public:
    std::string title;
    int pages;
};

int main (int argc, char const *argv[]){

    Book myBook;
    myBook.title = "Book for good";
    myBook.pages = 100;

    std::cout << myBook.title << " & " << myBook.pages <<std::endl;
}