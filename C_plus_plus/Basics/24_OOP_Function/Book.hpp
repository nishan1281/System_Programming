//
// Created by nisha on 2/4/2024.
//

#ifndef BOOK_H
#define BOOK_H

#include "iostream"

class Book {
private:
    std::string title;
    int pages;

public:
    Book();
    Book (std::string title, int pages);
    Book (std::string title);

    //getter
    std::string getTitle();
    int getPage();

    //setter
    void setTitle(std::string title);
    void setPages(int pages);

    ~Book();
};

#endif