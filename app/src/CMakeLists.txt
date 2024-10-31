# Target for native main
add_executable(${NATIVE_${_EXE_}} "main.cpp")
target_link_libraries(${NATIVE_${_EXE_}} PUBLIC ${NATIVE_${_MGN_}})

# Target for abstract factory main
add_executable(${ABSTRACT_FACTORY_${_EXE_}} "main.cpp")
target_link_libraries(${ABSTRACT_FACTORY_${_EXE_}} PUBLIC ${ABSTRACT_FACTORY_${_MGN_}})

# Target for factory main
add_executable(${FACTORY_${_EXE_}} "main.cpp")
target_link_libraries(${FACTORY_${_EXE_}} PUBLIC ${FACTORY_${_MGN_}})

# Target for builder main
add_executable(${BUILDER_${_EXE_}} "main.cpp")
target_link_libraries(${BUILDER_${_EXE_}} PUBLIC ${BUILDER_${_MGN_}})

# Target for prototype main
add_executable(${PROTOTYPE_${_EXE_}} "main.cpp")
target_link_libraries(${PROTOTYPE_${_EXE_}} PUBLIC ${PROTOTYPE_${_MGN_}})
