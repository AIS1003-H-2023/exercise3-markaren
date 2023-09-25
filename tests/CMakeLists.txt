
add_executable(test_file_reader test_file_reader.cpp)
target_link_libraries(test_file_reader PRIVATE fileio Catch2::Catch2WithMain)
