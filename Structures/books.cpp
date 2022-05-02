//
// Created by plott on 4/15/22.
//

#include "books.h"

void add_book(std::vector<Book>& library, Book& book){
    library.push_back(book);
    return;
}

void print_book(Book& b){
    std::cout << b.title << std::endl;
    std::cout << b.author << std::endl;
    std::cout << b.publisher << std::endl;
    std::cout << b.isbn << std::endl;
    std::cout << b.copyright_month << "/" << b.copyright_day <<"/" << b.copyright_year << std::endl;
    std::cout << b.pages << std::endl;
    std::cout << "$" << b.cost << std::endl;
    switch (b.loc){
        case office:
            std::cout << "It's at the Office" << std::endl;
            break;
        case car:
            std::cout << "It's in the car" << std::endl;
            break;
        case reading_nook:
            std::cout << "You left it at the reading nook" << std::endl;
            break;
        case home:
            std::cout << "You left it at home" << std::endl;
            break;
        case starbucks:
            std::cout << "It's time for a coffee" << std::endl;
            break;
        case backpack:
            std::cout << "It's in your backpack" << std::endl;

    }
}