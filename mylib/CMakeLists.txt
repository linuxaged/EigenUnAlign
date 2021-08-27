cmake_minimum_required(VERSION 3.16.0)

project(mylib VERSION 1.0.0.0)

find_package(OpenMP)

add_library( mylib SHARED
    mylib.cpp
)

target_compile_options(mylib PRIVATE "/utf-8" "/MP")
target_compile_features(mylib PUBLIC cxx_std_17)
target_compile_definitions(mylib PRIVATE -DNOMINMAX -DUNICODE -D_UNICODE -D_HAS_STD_BYTE=0 -DBUILDING_DLL)

target_link_libraries(mylib PUBLIC 
    OpenMP::OpenMP_CXX 
    Eigen3::Eigen
)
