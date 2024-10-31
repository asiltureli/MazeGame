set(SOURCES
    maze_builder.cpp
    maze_game.cpp)

set(HEADERS
    maze_builder.hpp
    maze_game.hpp
    simulator.hpp)

add_library(${BUILDER_${_MGN_}} STATIC ${SOURCES} ${HEADERS})

target_include_directories(${BUILDER_${_MGN_}} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.)

target_link_libraries(${BUILDER_${_MGN_}} PUBLIC
    ${MAZE_LIB_NAME}
)