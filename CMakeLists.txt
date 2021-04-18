# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("EmbeddedIntentRecognizer")

# Include sub-projects.
add_subdirectory ("EmbeddedIntentRecognizer/MainApplication")
add_subdirectory ("EmbeddedIntentRecognizer/RecognizerBase")
add_subdirectory ("EmbeddedIntentRecognizer/WeatherRecognizer")
add_subdirectory ("EmbeddedIntentRecognizer/CalenderRecognizer")
add_subdirectory ("EmbeddedIntentRecognizer/FactRecognizer")
add_subdirectory ("EmbeddedIntentRecognizer/Factory")
