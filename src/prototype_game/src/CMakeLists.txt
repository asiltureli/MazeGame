set(SOURCES
    maze_game.cpp
    maze_prototype_factory.cpp)

set(HEADERS
    maze_factory.hpp
    maze_game.hpp
    maze_prototype_factory.hpp
    simulator.hpp)

add_library(${PROTOTYPE_${_MGN_}} STATIC ${SOURCES} ${HEADERS})

target_include_directories(${PROTOTYPE_${_MGN_}} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.)

target_link_libraries(${PROTOTYPE_${_MGN_}} PUBLIC
    ${MAZE_LIB_NAME}
)
