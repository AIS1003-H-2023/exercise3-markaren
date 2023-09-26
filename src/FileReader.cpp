
#include "FileReader.hpp"

#include <fstream>
#include <sstream>

std::optional<std::string> FileReader::read(const std::filesystem::path &path) {

    if (cache_.contains(path.string())) {
        return cache_[path.string()];
    }

    if (!std::filesystem::exists(path)) {
        return std::nullopt;
    }

    std::ifstream file(path);

    if (!file.is_open()) {
        return std::nullopt;
    }

    // This is one of many ways of reading a file.
    std::stringstream content;
    std::string line;
    while (std::getline(file, line)) {
        content << line << '\n';
    }

    auto str = content.str();
    cache_[path.string()] = str;

    return str;
}
