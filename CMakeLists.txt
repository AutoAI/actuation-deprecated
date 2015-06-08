cmake_minimum_required(VERSION 2.8.3)
project(Actuation)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

find_package(GTest REQUIRED)

catkin_package(
  DEPENDS system_lib
    CATKIN_DEPENDS message_runtime
)

include_directories(
  include/${PROJECT_NAME}
  ${catkin_INCLUDE_DIRS}
  ${GTEST_INCLUDE_DIRS}
)


add_executable(Actuation_Run src/Actuation.cpp)
target_link_libraries(Actuation_Run ${GTEST_LIBRARIES} ${catkin_LIBRARIES} pthread)
add_dependencies(Actuation_Run Actuation_actuation_cpp)

catkin_add_gtest(Actuation_utest src/test/utest.cpp)
target_link_libraries(Actuation_utest ${catkin_LIBRARIES}) 
