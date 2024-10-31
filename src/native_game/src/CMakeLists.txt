set(SOURCES
    maze_game.cpp)

set(HEADERS
    maze_game.hpp
    simulator.hpp)

add_library(${NATIVE_${_MGN_}} STATIC ${SOURCES} ${HEADERS})

target_include_directories(${NATIVE_${_MGN_}} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.)

target_link_libraries(${NATIVE_${_MGN_}} PUBLIC
    ${MAZE_LIB_NAME}
)