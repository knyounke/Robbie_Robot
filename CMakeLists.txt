#Specify the version being used as well as the language
cmake_minimum_required(VERSION 2.6)

set(CMAKE_CXX_STANDARD 11)


#Name of the project
project(Robbie_Robot)

# make cmake aware that we have all our header files in the 
# include subdirectory (the include path should contain that)
include_directories(include)

# find_package can include third party packages into cmake
# the pkgconfig tool is included which is used by some libraries
# to find out how they should be used whne compiling
# e.g.,  try on the command line: pkg-config --cflags glib-2.0
find_package(PkgConfig REQUIRED)


#Could manually add the sources using the set command as follows:
#set(SOURCES src/global.cpp src/worker_thread.cpp src/main.cpp)
# but we can just use the following to add all cpp files:
file(GLOB SOURCES "src/*.cpp") 

#This tells cmake to create the executable based on those sources
add_executable(Robbie_Robot ${SOURCES})

