
#include "FileReader.hpp"

#include <fstream>

std::optional<std::string> FileReader::read(const std::filesystem::path &path) {
    
    std::ifstream file(path);
    
    if (file.is_open()) {
        
        std::string content;
        std::string line;
        while(std::getline(file, line)) {
            content += line + "\n";
        }
        
       return content;
    } else {
        // kan ikke lese
        return std::nullopt;
    }
}
