# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)


include_directories("../RecognizerBase")
# Add source to this project's executable.
#add_executable (EmbeddedIntentRecognizer "FactRecognizer.cpp" "FactRecognizer.h")


add_library (FactRecognizer FactRecognizer.cpp)
# Add source to this project's executable.
#add_executable (EmbeddedIntentRecognizer "CalenderRecognizer.cpp" "CalenderRecognizer.h")
target_include_directories (FactRecognizer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


# TODO: Add tests and install targets if needed.
