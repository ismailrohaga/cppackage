cmake_minimum_required(VERSION 3.28)
project(cppackage)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)
set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
  GIT_TAG main
)
FetchContent_MakeAvailable(ftxui)

if(NOT TARGET spdlog)
    find_package(spdlog REQUIRED)
endif()
link_libraries(spdlog::spdlog_header_only)

# Include directories
include_directories(src/include)

# Source files
set(SOURCES
    src/main.cpp)

# Executable
add_executable(cppackage ${SOURCES})
target_link_libraries(
  cppackage 
  PRIVATE ftxui::screen
  PRIVATE ftxui::dom
  PRIVATE ftxui::component 
)
