cmake_minimum_required(VERSION 3.17)
project(ais1003_exercise3)

set(CMAKE_CXX_STANDARD 20)

# Place executable into bin directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# copy data into bin folder
file(COPY "${CMAKE_SOURCE_DIR}/data" DESTINATION "${CMAKE_BINARY_DIR}/bin")

add_subdirectory(src)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE fileio)

# ============================
# Testing
# ============================

# Download Catch2 unit-test framework from GitHub
include(FetchContent)
	FetchContent_Declare(
			Catch2
			GIT_REPOSITORY https://github.com/catchorg/Catch2.git
			GIT_TAG v3.3.2
	)
	FetchContent_MakeAvailable(Catch2)

enable_testing()
add_subdirectory(tests)
