cmake_minimum_required(VERSION 3.5)

project(vendingmachine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#This shit is clean and works
set(SOURCES
    src/main.cpp
    src/drink.cpp
    src/snack.cpp
    src/vendingmachine.cpp
    src/food.cpp)
    
set(HEADERS
    include/vendingmachine.h
    include/snack.h
    include/drink.h
    include/food.h)

#Copy this structure to new cmakes
    
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
target_include_directories(${PROJECT_NAME} PUBLIC include)

install(TARGETS vendingmachine
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
