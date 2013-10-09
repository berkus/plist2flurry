cmake_minimum_required(VERSION 2.6)
project(plist)

include_directories(include)

# Drop this into testing directory:
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DTEST_VERBOSE")
#add_executable(runTests src/runTests.cpp src/plistTests.cpp src/pugixml.cpp)
#ADD_CUSTOM_COMMAND(
#	WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
#	TARGET runTests
#	POST_BUILD
#	COMMAND ./runTests.${SCRIPT_EXT} ${MY_BUILD_TYPE} ${ARCH_DIR}
#	)

# plist/src/pugixml.cpp:912:14: error: unused function 'convert_wchar_endian_swap'
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-function")

add_library(plist src/pugixml.cpp)
