cmake_minimum_required(VERSION 3.20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
add_subdirectory(googletest)

add_executable(runTriangleTests

  triangleTest.cpp 
)

add_executable(runHailstoneTests

  hailstoneTest.cpp 
)

add_executable(runAwardsTests

  awardsTest.cpp 
)

target_link_libraries(runTriangleTests gmock gtest gtest_main)
target_link_libraries(runTriangleTests simpleLibrary)
target_link_libraries(runHailstoneTests gmock gtest gtest_main)
target_link_libraries(runHailstoneTests simpleLibrary)
target_link_libraries(runAwardsTests gmock gtest gtest_main)
target_link_libraries(runAwardsTests simpleLibrary)

