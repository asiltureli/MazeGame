set(SOURCES
    maze_factory.cpp
    maze_game.cpp)

set(HEADERS
    bombed_maze_factory.hpp
    maze_factory.hpp
    maze_game.hpp
    simulator.hpp)

add_library(${ABSTRACT_FACTORY_${_MGN_}} STATIC ${SOURCES} ${HEADERS})

target_include_directories(${ABSTRACT_FACTORY_${_MGN_}} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.)

target_link_libraries(${ABSTRACT_FACTORY_${_MGN_}} PUBLIC
    ${MAZE_LIB_NAME}
)