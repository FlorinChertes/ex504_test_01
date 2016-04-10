cmake_minimum_required (VERSION 2.6)
IF (MSVC) 
   # Activate C++ exception handling 
   IF (NOT CMAKE_CXX_FLAGS MATCHES "/EHsc") 
   SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHsc") 
   ENDIF () 
ENDIF () 

project (ex504_test_prj)

set(INCLUDE_DIRS "test/inc" "lib/inc")


include_directories(${INCLUDE_DIRS})

# add the executable
add_executable(ex504_test

test/inc/test_vector.h
test/src/test_vector.cpp

lib/inc/vector_t.h
lib/src/vector_t.cpp

usage/ex504_test_main.cpp)

