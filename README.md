# AIS1003 exercise3

This exercise is about the usage of some of the Standard Library types and File I/O.


## FileReader

Implement the read function in [FileReader.hpp](include/FileReader.hpp) within the associated [source file](src/FileReader.cpp).
You might want to look into the `<fstream>` header.
Notice that the class has a field `cache_` of type `std::unordered_map`. 
How can that be utilised in a smart way while implementing the `read` function?
Also note the return type of the function. Why is it `std::optional`?

Once you have a `read` function that is deemed usable, 
write som code in `main.cpp` that can read a file using the `FileReader` class.

A text-file is located relative to the generated executable (`<build_folder>/bin`) that you can try to read. 
Notice how CMake is configured to copy the content of `<root>/data` into `<build_folder>/bin`?
This allows you to easily reference the file from within the code using the relative path `"data/data.txt"`.
