//
// Created by nisha on 2/4/2024.
//

#include "iostream"
#include "Book.hpp"


int main (int argc, char const *argv[]){

    Book myBook("Book for good", 100);
//    myBook.title = "Book for good";
//    myBook.pages = 100;

    std::cout << myBook.getTitle() << " & " << myBook.getPage() <<std::endl;

    Book myBookN ("Over written");
    std::cout << myBookN.getTitle() << " & " << myBookN.getPage() <<std::endl;

    myBookN.setPages(200);
    std::cout << myBookN.getTitle() << " & " << myBookN.getPage() <<std::endl;

    Book book;
    book.setTitle("trying");
    std::cout << book.getTitle()<<std::endl;

    return 0;
}