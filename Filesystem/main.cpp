#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path p = "/";
    std::filesystem::path home = "~/pUC19.fasta";
    std::filesystem::path current = std::filesystem::current_path();

    std::cout << p.root_directory() << std::endl;
    std::cout << home.relative_path() << std::endl;
    std::cout << current << std::endl;

    for(auto it = current.begin(); it!=current.end(); ++it){
        std::cout << *it << std::endl;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
