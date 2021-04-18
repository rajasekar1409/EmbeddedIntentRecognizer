# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
#add_executable (EmbeddedIntentRecognizer "RecognizerBase.cpp" "RecognizerBase.h")

# TODO: Add tests and install targets if needed.
#include_directories("../RecognizerBase")
add_library (RecognizerBase RecognizerBase.cpp)
# Add source to this project's executable.
#add_executable (EmbeddedIntentRecognizer "CalenderRecognizer.cpp" "CalenderRecognizer.h")
target_include_directories (RecognizerBase PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})