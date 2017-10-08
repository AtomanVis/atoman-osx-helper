cmake_minimum_required(VERSION 3.1)
project(osx_helper CXX)

find_library(LIB_COCOA cocoa)

add_library(atoman_osx_helper SHARED disable_hidpi.mm osx_helper.cxx)
target_link_libraries(atoman_osx_helper ${LIB_COCOA})

install(TARGETS atoman_osx_helper DESTINATION lib)
