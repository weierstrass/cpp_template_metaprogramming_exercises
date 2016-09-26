
# set up gtkmm 3.0
find_package(PkgConfig)

# BOOST
find_package(Boost COMPONENTS system filesystem REQUIRED)

# include all source files recursively
file(GLOB_RECURSE SRC_FILES ./*.cpp)

# define executable to build from source files
#add_executable(template_exercises ${SRC_FILES})


# link executable with libraries
#target_link_libraries(template_exercises
#    ${Boost_SYSTEM_LIBRARY}
#)


