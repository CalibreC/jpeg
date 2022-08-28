cmake_minimum_required(VERSION 3.5.1)
project(jpeg)
set(TARGETS jpeg)

include_directories(./)

add_definitions(-DLOG_USE_COLOR)

add_executable(${TARGETS} main.c log.c table.c)

target_link_libraries(${TARGETS} -lm)
