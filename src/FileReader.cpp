
#include "FileReader.hpp"

#include <fstream>

std::optional<std::string> FileReader::read(const std::filesystem::path &path) {

    if (cache_.contains(path.string())) {
        return cache_[path.string()];
    }

    std::ifstream file(path);

    if (file.is_open()) {

        std::string content;
        std::string line;
        while (std::getline(file, line)) {
            content += line + "\n";
        }

        cache_[path.string()] = content;

        return content;
    } else {
        // kan ikke lese
        return std::nullopt;
    }
}
