cmake_minimum_required(VERSION 3.4)

project(UnAligned CXX)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY $<1:${PROJECT_SOURCE_DIR}/bin/$<CONFIG>>)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY $<1:${PROJECT_SOURCE_DIR}/bin/$<CONFIG>>)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP /Ob3 /utf-8 /arch:AVX2 /openmp:experimental")

# Eigen3
set(BUILD_TESTING OFF CACHE BOOL "" FORCE)
set(EIGEN_BUILD_DOC OFF CACHE BOOL "" FORCE)
set(EIGEN_STRONG_INLINE ON CACHE BOOL "" FORCE)
add_subdirectory(eigen)
find_package(Eigen3 3.4 REQUIRED NO_MODULE)

add_subdirectory(./mylib mylib)

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ./eigen)
target_link_libraries(${PROJECT_NAME} PRIVATE mylib)

set_property(DIRECTORY ${PROJECT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})