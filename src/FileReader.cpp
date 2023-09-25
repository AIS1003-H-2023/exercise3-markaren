
#include "FileReader.hpp"

std::optional<std::string> FileReader::read(const std::filesystem::path &path) {

    // Remember that the path argument is not necessary valid.
    // The path may not exist due to user error (non-existing path) or system changes (file was moved/deleted).

    // Note: you need to preserve newlines when you read the file into memory

    return std::nullopt;//placeholder
}
