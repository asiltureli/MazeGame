set(SOURCES
    maze.cpp
    room.cpp
    door.cpp)

set(HEADERS
    direction.hpp
    door.hpp
    bombed_maze.hpp
    enhanced_maze.hpp
    mapsite.hpp
    maze.hpp
    room.hpp
    wall.hpp)

add_library(${MAZE_LIB_NAME} STATIC
    ${SOURCES}
    ${HEADERS})

target_include_directories(${MAZE_LIB_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.)