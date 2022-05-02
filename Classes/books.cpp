//
// Created by plott on 4/22/22.
//

#include "books.h"


Book::Book(){
    title = "";
    author = "";
    publisher = "";
    isbn = "";
    copyright_month = 1;
    copyright_day = 1;
    copyright_year = 1800;
    pages = 0;
    cost = 0.0f;
}

Book::Book(std::string t, std::string a, std::string i, double c){
    title = t;
    author = a;
    isbn = i;
    cost = c;
}

void Book::print(){
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "ISBN: " << isbn << std::endl;
    std::cout << "Store Cost: " << get_store_cost() << std::endl;
    std::cout << "Store Price: " << get_store_price() << std::endl;
}

void Book::add_location(location l){
    loc = l;
}

location Book::get_location(){
    return loc;
}

double Book::get_store_cost(){
    return cost;
}

double Book::get_store_price(){
    return Book::get_markup(1.2);
}

double Book::get_markup(double rate){
    return cost * rate;
}


