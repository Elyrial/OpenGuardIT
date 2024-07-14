cmake_minimum_required(VERSION 3.10)

project(OpenGuardIT)

set(CMAKE_CXX_STANDARD 17)

# Add spdlog include directory
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} src/main.cpp)

# Link spdlog if necessary (this is not always required if spdlog is header-only)
# target_link_libraries(${PROJECT_NAME} spdlog::spdlog)

