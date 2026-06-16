cmake_minimum_required(VERSION 3.10)
project(pose-prediction-engine VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find dependencies (Placeholder for actual path/config)
# find_package(Eigen3 REQUIRED)
# find_package(Torch REQUIRED)
# find_package(ONNXRuntime REQUIRED)

include_directories(include)

add_library(engine src/engine.cpp)
target_link_libraries(engine PRIVATE Eigen3::Eigen)

add_executable(pose_prediction_engine src/main.cpp)
target_link_libraries(pose_prediction_engine PRIVATE engine)
