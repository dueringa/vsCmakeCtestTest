cmake_minimum_required (VERSION 3.0)
project (UnitTest LANGUAGES C)

add_executable(testFileAvailable
    "testFileAvailable.c"
)

add_test(NAME TestFileIsAvailable COMMAND testFileAvailable)

add_custom_target(copytestfiles ALL)
add_custom_command(
    TARGET copytestfiles POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_CURRENT_SOURCE_DIR}/testfile.txt
    ${CMAKE_CURRENT_BINARY_DIR}/testfile.txt
)