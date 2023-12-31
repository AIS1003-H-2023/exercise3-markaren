
#include "FileReader.hpp"

#include <iostream>

int main() {

    std::filesystem::path file{"data/data.txt"};// object referencing the *location* a text file.

    FileReader reader;
    auto result = reader.read(file);
    if (result) { // always check if optional has value before reading
        std::cout << result.value() << std::endl;
    } else {
        std::cerr << "Could not read " << file << std::endl;
    }

}
