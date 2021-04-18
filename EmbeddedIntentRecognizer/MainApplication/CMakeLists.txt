# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

include_directories("../Factory")

# Add source to this project's executable.
add_executable (EmbeddedIntentRecognizer MainApp.cpp)
target_link_libraries (EmbeddedIntentRecognizer LINK_PUBLIC RecognizerBase RecognizerFactory CalenderRecognizer FactRecognizer WeatherRecognizer)

# TODO: Add tests and install targets if needed.
