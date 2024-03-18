//
// Created by nisha on 2/4/2024.
//

#include "iostream"

class Book{
public:
    std::string title;
    int pages;

    //constructing object
    Book (std::string title, int pages){
        std::cout <<"creating object: "<<std::endl;
        this->title = title;
        this->pages = pages;
    }

    //over writing constructor
    Book (std::string title){
        this->title = title;
        this->pages = 10;
    }

    //destroying object
    ~Book(){
        std::cout <<"destroying object at the end"<<std::endl;
    }

};


int main (int argc, char const *argv[]){

    Book myBook("Book for good", 100); //object created in stack directly
//    myBook.title = "Book for good";
//    myBook.pages = 100;

    std::cout << myBook.title << " & " << myBook.pages <<std::endl;

    Book myBookN ("Over written");
    std::cout << myBookN.title << " & " << myBookN.pages <<std::endl;

    // Creating a Book object with dynamic memory allocation. -> used to acess data
    Book* dynamicBook = new Book ("Dynamic Book");
    std::cout << dynamicBook->title << " & " << dynamicBook->pages <<std::endl;

    // Deallocating memory to avoid memory leaks
    delete dynamicBook;

    return 0;
}