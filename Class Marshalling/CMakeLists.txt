cmake_minimum_required(VERSION 3.29.0)
project(marshall VERSION 0.1.0 LANGUAGES C CXX)
set(C_SHARP_PROJECT_DIR "ClassMarshall")
set(DOTNET_TARGET_FRAMEWORK_VERSION "8.0")

add_library(Marshall SHARED marshall.cpp)

set_target_properties(Marshall PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/${C_SHARP_PROJECT_DIR}/bin/Debug/net${DOTNET_TARGET_FRAMEWORK_VERSION}"
)


add_executable(Test test.cpp marshall.cpp)
target_link_libraries(Test PRIVATE Marshall)
set_target_properties(Test PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/test"
)