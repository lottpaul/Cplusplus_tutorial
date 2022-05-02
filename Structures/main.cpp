#include <iostream>
#include <vector>
#include "books.h"

int main() {
    struct Book b = {"Harry Potter and the Sorcerer's Stone",
            "JK Rowling",
            "Bloomsbury Publishing",
            "9780590353403",
            6,
            26,
            1997,
            223,
            6.98,
            backpack
            };

    std::vector<Book> library;
    add_book(library, b);

    for(auto b: library){
        print_book(b);
    }

    return 0;
}
