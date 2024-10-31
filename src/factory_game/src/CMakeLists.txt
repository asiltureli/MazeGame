set(SOURCES
    maze_game.cpp)

set(HEADERS
    bombed_maze_game.hpp
    enhanced_maze_game.hpp
    maze_game.hpp
    simulator.hpp)

add_library(${FACTORY_${_MGN_}} STATIC ${SOURCES} ${HEADERS})

target_include_directories(${FACTORY_${_MGN_}} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.)

target_link_libraries(${FACTORY_${_MGN_}} PUBLIC
    ${MAZE_LIB_NAME}
)