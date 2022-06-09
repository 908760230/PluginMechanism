set(TARGET_NAME "Main")
file(GLOB MAIN_H *.h)
file(GLOB MAIN_CPP *.cpp)

add_executable(${TARGET_NAME}  ${MAIN_H}  ${MAIN_CPP})

target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${TARGET_NAME} PUBLIC Core)

set_target_properties( ${TARGET_NAME} PROPERTIES OUTPUT_NAME_DEBUG "${TARGET_NAME}")
