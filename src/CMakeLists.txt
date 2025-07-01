add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Square)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        square
)
