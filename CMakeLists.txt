cmake_minimum_required(VERSION 2.8.3)
project(actuation)

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


add_executable(actuation_Run src/actuation.cc)
target_link_libraries(actuation_Run ${GTEST_LIBRARIES} ${catkin_LIBRARIES} pthread)
add_dependencies(actuation_Run actuation_actuation_cc)

catkin_add_gtest(actuation_utest src/test/utest.cc)
target_link_libraries(actuation_utest ${catkin_LIBRARIES}) 
