add_library(libreria example.cpp "funciones.h")

target_include_directories(libreria PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
