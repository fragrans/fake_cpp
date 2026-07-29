cmake_minimum_required(VERSION 3.20)

project(fake LANGUAGES C)

add_executable(hello src/main.c)

find_package(unofficial-sqlite3 CONFIG REQUIRED)
find_package(yaml-cpp CONFIG REQUIRED)

target_link_libraries(hello PUBLIC yaml-cpp::yaml-cpp)
target_link_libraries(hello PUBLIC unofficial::sqlite3::sqlite3)
