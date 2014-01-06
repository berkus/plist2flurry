cmake_minimum_required(VERSION 2.8)

include(support/cmake/setup.cmake)
include_directories(support/3rdparty/endian)

include_directories(support/include plist/include)
add_subdirectory(support)
add_subdirectory(plist)

add_executable(plist2flurry main.cpp)
target_link_libraries(plist2flurry support plist ${Boost_LIBRARIES})
