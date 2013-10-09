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

add_library(plist src/pugixml.cpp)
