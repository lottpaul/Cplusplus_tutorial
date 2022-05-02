#include <iostream>
#include "books.h"

int main() {
    Book a;
    Book b ("Harry Potter and the Sorcerer's Stone", "JK Rowling", "9780590353403", 6.98);

    b.print();

    //std::cout << b.title << std::endl;
    //std::cout << b.cost << std::endl;
    std::cout << b.get_store_price() << std::endl;

    return 0;
}
