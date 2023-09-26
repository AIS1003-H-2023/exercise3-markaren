
#ifndef EXERCISE3_FILE_READER_HPP
#define EXERCISE3_FILE_READER_HPP

#include <filesystem>
#include <optional>
#include <unordered_map>
#include <string>

class FileReader {

public:
    std::optional<std::string> read(const std::filesystem::path &path);// implement method in the .cpp file

private:
    std::unordered_map<std::string, std::string> cache_;// how can we make use of this one?
};

#endif//EXERCISE3_FILE_READER_HPP
