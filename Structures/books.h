//
// Created by plott on 4/15/22.
//

#ifndef STUCTURES_BOOKS_H
#define STUCTURES_BOOKS_H
#include <string>
#include <vector>
#include <iostream>

enum location {office, car, backpack, reading_nook, home, starbucks};

struct Book{
    std::string title;
    std::string author;
    std::string publisher;
    std::string isbn;
    short copyright_month;
    short copyright_day;
    short copyright_year;
    int pages;
    double cost;
    location loc;
};

void print_book(Book&);

void add_book(std::vector<Book>& library, Book& book);


#endif //STUCTURES_BOOKS_H
