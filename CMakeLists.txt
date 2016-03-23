cmake_minimum_required (VERSION 2.6)
project (ex504_test_prj)

set(INCLUDE_DIRS "test/inc" "lib/inc")


include_directories(${INCLUDE_DIRS})

# add the executable
add_executable(ex504_test

test/inc/test_vector.h
test/src/test_vector.cpp

lib/inc/vector_t.h
lib/src/vector_t.cpp

usage/ex504_test_main.cxx)

