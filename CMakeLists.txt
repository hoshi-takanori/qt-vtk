cmake_minimum_required(VERSION 2.6)

project(qt-vtk)

if(CMAKE_COMPILER_IS_GNUCXX)
	set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
endif()

find_package(VTK)
include(${VTK_USE_FILE})

find_package(Qt4 REQUIRED)
include(${QT_USE_FILE})

file(GLOB QT_WRAP *.h)
file(GLOB CXX_FILES *.cc)

qt4_wrap_cpp(MOCSrcs ${QT_WRAP})
add_executable(${PROJECT_NAME} ${MOCSrcs} ${CXX_FILES})
target_link_libraries(${PROJECT_NAME} QVTK)
