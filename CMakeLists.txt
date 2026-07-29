cmake_minimum_required(VERSION 3.20)

project(fake VERSION 1.0.0 LANGUAGES C)

# Find packages
find_package(unofficial-sqlite3 CONFIG REQUIRED)
find_package(yaml-cpp CONFIG REQUIRED)

# Executable target
add_executable(hello src/main.c)

# Link dependencies (using PRIVATE for executable)
target_link_libraries(hello
    PRIVATE
        yaml-cpp::yaml-cpp
        unofficial::sqlite3::sqlite3
)

# Install rule
install(TARGETS hello
    RUNTIME DESTINATION bin
)

set(CPACK_PACKAGE_NAME "fake-app")
set(CPACK_PACKAGE_VENDOR "awesome")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "A simple sqlite and yaml app")
set(CPACK_GENERATOR "WIX,NSIS") # Formats you want to build by default

include(CPack)
