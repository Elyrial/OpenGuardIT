cmake_minimum_required(VERSION 3.10)
project(OpenGuardIT)

set(CMAKE_CXX_STANDARD 17)

# Add the directory containing your source files
# add_subdirectory(src)

include_directories(
    ${CMAKE_SOURCE_DIR}/backend/include  # Your project's include directory
    ${CMAKE_SOURCE_DIR}/backend/third_party/spdlog/include  # Path to spdlog include directory
)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/backend/third_party/spdlog/include)

add_executable(it_management_software src/main.cpp src/utils/logger.cpp)

# Link spdlog
target_link_libraries(it_management_software PRIVATE ${CMAKE_SOURCE_DIR}/backend/third_party/spdlog)

