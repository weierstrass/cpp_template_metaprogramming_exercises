
# set up google test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# BOOST
find_package(Boost COMPONENTS system filesystem REQUIRED)

# include all source files recursively
file(GLOB_RECURSE SRC_FILES *.cpp )

# define executable to build from source files
add_executable(template_exercises_test ${SRC_FILES})

# link executable with libraries
target_link_libraries(template_exercises_test
    ${GTEST_BOTH_LIBRARIES}
    ${Boost_SYSTEM_LIBRARY}
)
