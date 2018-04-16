cmake_minimum_required(VERSION 3.9)
# Require modern c++
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(EarthsLastStand)

#### Setup Directories ####
#Main output directoiries ####
#Main output directory
SET(OUTPUT_DIRECTORIES "${CMAKE_BINARY_DIR}/bin/")
# Output all DLLs from all libs into main build folder
SET (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})

#### Add External Dependencies ####
add_subdirectory("lib/sfml")
set(SFML_INCS "lib/sfml/include")
link_directories("${CMAKE_BINARY_DIR}/lib/sfml/lib")

#### Earths last stand ####
file(GLOB_RECURSE SOURCES 2_enemys/*.cpp 2_enemys/*.h)
add_excecutable(2_ENEMYS ${SOURCES} )
target_include_directories(2_INVADERS SYSTEM PRIVATE ${SFML_INCS})
target_link_libraries(2_ENEMYS sfml-graphics)