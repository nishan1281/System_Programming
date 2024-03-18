//
// Created by nisha on 2/4/2024.
//
#include "Book.hpp"

Book::Book(){
    title = "No title";
    pages = 0;
};

//constructing object
Book::Book (std::string title, int pages){
std::cout <<"creating object: "<<std::endl;
this->title = title;
this->pages = pages;
}

//over writing constructor
Book::Book (std::string title){
this->title = title;
this->pages = 10;
}

//getter elaborating from hpp

std::string Book::getTitle() {
    return this->title;
}

int Book::getPage() {
    return this->pages;
}

//setter

void Book::setTitle(std::string title) {
     this->title = title;
}

void Book::setPages(int pages){
    this->pages = pages;
}

Book::~Book(){
    std::cout <<"destroying object at the end"<<std::endl;
}