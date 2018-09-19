cmake_minimum_required(VERSION 3.10)

if(DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
    CACHE STRING "")
endif()

project(LeetCode CXX)
set(CMAKE_CXX_STANDARD 14)

find_package(Catch2 REQUIRED)

function(add_problem name)
    add_executable(${name} src/${name}.cpp)
    target_link_libraries(${name} Catch2::Catch2)
endfunction(add_problem)

add_problem(0000-leet-code)
add_problem(0001-two-sum)
add_problem(0002-add-two-numbers)
add_problem(0003-longest-substring-without-repeating-characters)
add_problem(0004-median-of-two-sorted-arrays)