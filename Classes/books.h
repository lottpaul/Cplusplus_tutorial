//
// Created by plott on 4/22/22.
//

#ifndef CLASSES_BOOKS_H
#define CLASSES_BOOKS_H
#include <iostream>
#include <string>

enum location {office, car, backpack, reading_nook, home, starbucks};

class Book {
    std::string author; //Author - Private member
    std::string publisher; //Publisher - Private member
    std::string isbn;
    short copyright_month;
    short copyright_day;
    short copyright_year;
    int pages;
public:
    std::string title; //Title - Public Member

    Book();
    Book(std::string t, std::string a, std::string i, double c);
    void add_location(location l);
    location get_location();
    double get_store_cost();
    double get_store_price();
    void print();

private:
    location loc;   //Location - Private Member
    double cost;

    double get_markup(double rate);

};


#endif //CLASSES_BOOKS_H
