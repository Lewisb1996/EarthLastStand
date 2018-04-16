cmake_minimum_required(VERSION 3.9)
# Require modern c++
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(EarthsLastStand)

#### Setup Directories ####
#Main output directoiries ####
#Main output directory
SET(OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/")
# Output all DLLs from all libs into main build folder
SET (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})

#### Add External Dependencies ####
add_subdirectory("lib/sfml")
set(SFML_INCS "lib/sfml/include")
link_directories("${CMAKE_BINARY_DIR}/lib/sfml/lib")

#### Earths last stand ####
file(GLOB_RECURSE SOURCES earthslaststand/*.cpp earthslaststand/*.h)
add_executable(EARTHSLASTSTAND ${SOURCES} )
target_include_directories(EARTHSLASTSTAND SYSTEM PRIVATE ${SFML_INCS})
target_link_libraries(EARTHSLASTSTAND sfml-graphics)