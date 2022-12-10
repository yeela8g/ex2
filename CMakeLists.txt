cmake_minimum_required(VERSION 3.0.0)
project(prject VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(prject main.cpp Dist.cpp GetInput.cpp GetOutput.cpp InputValidation.cpp Knn.cpp Vector.cpp KnnManager.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
