
#include <catch2/catch_test_macros.hpp>

#include <string>

#include "FileReader.hpp"

namespace {

    std::string text = R"(Here's a little ditty about C++,
A language that's sure to make your code zing.
It's got pointers and classes, and lots of syntax,
But once you get the hang of it, you'll be vexed!

With its curly braces and semicolons,
It can make even the bravest programmer groan.
But despite all its quirks, it gets the job done,
From simple scripts to complex algorithms spun.

So if you're feeling down and need a laugh,
Just think about coding in C++ and its peculiar math.
It might be tough, but you'll surely impress,
When you write programs that run with finesse!
)";

}// namespace

TEST_CASE("Test file_reader: valid file") {

    std::filesystem::path file{"data/data.txt"};
    REQUIRE(std::filesystem::exists(file));

    FileReader reader;

    for (int i = 0; i < 5; i++) {
        auto read = reader.read(file);
        REQUIRE(read.has_value());

        auto find = read->find(text);
        REQUIRE(find != std::string::npos);
    }
}

TEST_CASE("Test file_reader: invalid file") {

    std::filesystem::path file{"data/missing.txt"};
    REQUIRE(!std::filesystem::exists(file));

    FileReader reader;
    auto read = reader.read(file);
    REQUIRE(!read.has_value());
}
